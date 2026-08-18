#include <iostream>
#include "Project-7-class/ clsMyString.h"
using namespace std;

int main()
{
    cout << "\n\n\t\t\t\t\t\tUndo/Redo Project\n\n";

    clsMyString<string> S1;

    cout << "\nS1 = " << S1.Get() << "\n";

    S1.Set("Mohammed");
    cout << "S1 = " << S1.Get() << "\n";

    S1.Set("Mohammed2");
    cout << "S1 = " << S1.Get() << "\n";

    S1.Set("Mohammed3");
    cout << "S1 = " << S1.Get() << "\n";


    cout << "\n\nUndo:";
    cout << "\n__________\n";

    S1.Undo();
    cout << "\nS1 after undo = " << S1.Get() << "\n";

    S1.Undo();
    cout << "S1 after undo = " << S1.Get() << "\n";

    S1.Undo();
    cout << "S1 after undo = " << S1.Get() << "\n";


    cout << "\n\nRedo:";
    cout << "\n__________\n";

    S1.Redo();
    cout << "\nS1 after Redo = " << S1.Get() << "\n";

    S1.Redo();
    cout << "S1 after Redo = " << S1.Get() << "\n";

    S1.Redo();
    cout << "S1 after Redo = " << S1.Get() << "\n";

    return 0;
}