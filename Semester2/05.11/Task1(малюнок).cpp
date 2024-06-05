    #include <iostream>
    using namespace std;

    class Tree {
    public:
        virtual void draw() = 0; // Virtual method (to be overridden)
    };

    class PineTree : public Tree {
    public:
        void draw() override {
            cout << "Drawing 1:\n";
            cout << " /\\\n";
            cout << "//\\\\\n";
        }
    };

    class ChristmasTree : public Tree {
    public:
        void draw() override {
            cout << "Drawing 2:\n";
            cout << " /\\\n";
            cout << "/**\\\n";
        }
    };

    class BirchTree : public Tree {
    public:
        void draw() override {
            cout << "Drawing 3:\n";
            cout << " /\\\n";
            cout << "/++\\\n";
        }
    };

    int main() {
        Tree* treeArray[3]; // Array of pointers to Tree objects

        // Create instances of different trees
        PineTree pineTree;
        ChristmasTree christmasTree;
        BirchTree birchTree;

        // Assign pointers to the respective objects
        treeArray[0] = &pineTree;
        treeArray[1] = &christmasTree;
        treeArray[2] = &birchTree;

        // Call the draw method for each tree
        for (int i = 0; i < 3; ++i) {
            treeArray[i]->draw();
        }

        return 0;
    }
