    #include <iostream>
    using namespace std;

    class Tree {
    public:
        virtual void draw() = 0;
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
        Tree* treeArray[3];

        PineTree pineTree;
        ChristmasTree christmasTree;
        BirchTree birchTree;

        treeArray[0] = &pineTree;
        treeArray[1] = &christmasTree;
        treeArray[2] = &birchTree;

        for (int i = 0; i < 3; ++i) {
            treeArray[i]->draw();
        }

        return 0;
    }
