#include <iostream>
#include <string>

const int MAX_MEMBERS = 10;

class Member {
public:
  int id;
  std::string name;
  int monthsValid;

  Member(int id, const std::string& name) : id(id), name(name), monthsValid(0) {}
};

class GymManager {
private:
  Member members[MAX_MEMBERS];
  int numMembers;

public:
  GymManager() : numMembers(0) {}

  void create(int id, const std::string& name) {
    if (numMembers == MAX_ MEMBERS) {
      std::cout << "Cannot perform this operation: Gym is full\n";
      return;
    }
    for (int i = 0; i < numMembers; ++i) {
      if (members[i].id == id) {
        std::cout << "Cannot perform this operation: Member ID already exists\n";
        return;
      }
    }
    members[numMembers] = Member(id, name);
    numMembers++;
    std::cout << "Member " << id << " : " << name << ", subscription valid for 0 months\n";
  }

  void deleteMember(int id) {
    int index = findMember(id);
    if (index == -1) {
      std::cout << "Cannot perform this operation: Member not found\n";
      return;
    }
    for (int i = index; i < numMembers - 1; ++i) {
      members[i] = members[i + 1];
    }
    numMembers--;
    std::cout << "Member " << id << " deleted\n";
  }

  void extend(int id, int months) {
    int index = findMember(id);
    if (index == -1) {
      std::cout << "Cannot perform this operation: Member not found\n";
      return;
    }
    members[index].monthsValid += months;
    std::cout << "Member " << id << " : " << members[index].name << ", subscription valid for " << members[index].monthsValid << " months\n";
  }

  void cancel(int id) {
    int index = findMember(id);
    if (index == -1) {
      std::cout << "Cannot perform this operation: Member not found\n";
      return;
    }
    members[index].monthsValid = 0;
    std::cout << "Member " << id << " : " << members[index].name << ", subscription cancelled\n";
  }

  int findMember(int id) const {
    for (int i = 0; i < numMembers; ++i) {
      if (members[i].id == id) {
        return i;
      }
    }
    return -1;
  }

  void printMembers() const {
    if (numMembers == 0) {
      std::cout << "No members in the system\n";
      return;
    }
    for (int i = 0; i < numMembers; ++i) {
      std::cout << "Member " << members[i].id << " : " << members[i].name << ", subscription valid for " << members[i].monthsValid << " months\n";
    }
  }
};

int main() {
  GymManager gym;
  std::string command;

  while (true) {
    std::getline(std::cin, command);
    if (command == "quit") {
      break;
    }

    std::string arg1, arg2;
    int id, months;

    if (sscanf(command.c_str(), "create %d %s", &id, arg1.c_str()) == 2) {
      gym.create(id, arg1);
    } else if (sscanf(command.c_str(), "delete %d", &id) == 1) {
      gym.deleteMember(id);
    } else if (sscanf(command.c_str(), "extend %d %d", &id, &months) == 2) {
      gym.extend(id, months);
    } else if (sscanf(command.c_str(), "cancel %d", &id) == 1) {
      gym.
