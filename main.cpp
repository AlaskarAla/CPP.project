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


bool CheckWinner(char player) {
    
    for (int r = 0; r < 3; r++) {
        if (Matrix[r][0] == player && Matrix[r][1] == player && Matrix[r][2] == player) {
            return true;
        }
    }
    
    for (int c = 0; c < 3; c++) {
        if (Matrix[0][c] == player && Matrix[1][c] == player && Matrix[2][c] == player) {
            return true;
        }
    }
    
    if (Matrix[0][0] == player && Matrix[1][1] == player && Matrix[2][2] == player) {
        return true;
    }
    if (Matrix[0][2] == player && Matrix[1][1] == player && Matrix[2][0] == player) {
        return true;
    }
    return false;
}


void PlayGame() {
    int choice;
    char currentPlayer = 'X';
    int moves = 0;

    while (true) {
        Draw();  
        cout << "اللاعب " << currentPlayer << ", اختر رقماً (1-9): ";
        cin >> choice;

        
        if (choice < 1 || choice > 9) {
            cout << "اختيار غير صحيح! اختر رقماً بين 1 و 9.\n";
            continue;
        }

        
        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        
        if (Matrix[row][col] == 'X' || Matrix[row][col] == 'O') {
            cout << "الخانة مشغولة! اختر خانة فارغة.\n";
            continue;
        }

        
        Matrix[row][col] = currentPlayer;
        moves++;

        
        if (CheckWinner(currentPlayer)) {
            Draw();
            cout << "اللاعب " << currentPlayer << " فاز!\n";
            break;
        }

        
        if (moves == 9) {
            Draw();
            cout << "التعادل!\n";
            break;
        }

        
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
}

int main() {
    PlayGame();  
    return 0;
}
