#include <iostream>
using namespace std;

char Matrix[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void Draw() {
    cout << "-----------\n";
    for (int r = 0; r < 3; r++) {  
        cout << "| "; 
        for (int c = 0; c < 3; c++) { 
            cout << Matrix[r][c] << " "; 
        }
        cout << "|\n"; 
    }
    cout << "-----------\n";
}

int main() {
    Draw();
    return 0;
}
