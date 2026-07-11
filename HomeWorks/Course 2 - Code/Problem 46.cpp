// Q: Print Letters from A to Z

#include <iostream>
using namespace std;

void PrintLetters() {
    for (char letter = 'A'; letter <= 'Z'; letter++) {
        cout << letter << " ";
    }
    cout << endl;  
}

int main() {
    
    PrintLetters();
    return 0;
}

-----------------------------------------------------------------

((((((((((Update Code))))))))))

// Q: Print Letters from A to Z, using while loop

#include <iostream>
using namespace std;

void PrintLetters() {
    
    char letter = 'A';
    
    while(letter <= 'Z'){
        
        cout << letter << " ";
        letter++;
    }

    cout << endl;  
}

int main() {
    
    PrintLetters();
    return 0;
}