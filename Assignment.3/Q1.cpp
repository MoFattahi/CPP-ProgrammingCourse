#include <iostream>
using namespace std;


void showBoard(char[][3]);
bool checkWinner(char[][3], char);
void playerMove(char[][3], char);

int main()
{

    char board[3][3] = { {'*', '*', '*'},

                        {'*', '*', '*'},

                        {'*', '*', '*'} };

    int moves = 0;

    cout << "TIC - TAC - TOE\n\n";

    while (true) {


        showBoard(board);

        cout << "Player 1 moves\n";

        playerMove(board, 'X');

        moves++;

        if (checkWinner(board, 'X')) {

            showBoard(board);

            cout << "\nPlayer 1 (X) wins!\n";

            return 0;

        }

        if (moves == 9)

            break;

        showBoard(board);

        cout << "Player 2 moves\n";

        playerMove(board, 'O');

        moves++;

        if (checkWinner(board, 'O')) {

            showBoard(board);

            cout << "\nPlayer 2 (O) wins!\n";

            return 0;

        }

    }


    showBoard(board);

    cout << "This game is a tie!\n";

    return 0;

}

void showBoard(char board[][3]) {

    cout << endl;


    for (int row = 0; row < 3; row++) {

        for (int col = 0; col < 3; col++)

            cout << board[row][col] << "    ";

        cout << endl << endl;

    }

    cout << endl;

}

bool checkWinner(char board[][3], char player) {


    bool flag;


    for (int row = 0; row < 3; row++) {

        flag = true;

        for (int col = 0; col < 3; col++) {

            flag *= (board[row][col] == player);

        }

        if (flag)

            return true;

        else

            continue;

    }

    for (int col = 0; col < 3; col++) {

        flag = true;

        for (int row = 0; row < 3; row++) {

            flag *= (board[row][col] == player);

        }

        if (flag)

            return true;

        else

            continue;

    }


    flag = true;

    for (int i = 0; i < 3; i++) {

        flag *= (board[i][i] == player);

    }


    if (flag)

        return true;

    flag = true;


    for (int col = 0; col < 3; col++) {

        flag *= (board[2 - col][col] == player);

    }


    if (flag)

        return true;


    return false;

}


void playerMove(char board[][3], char player) {


    int row, col, trial=0;

    do
        {
            if(trial>0)
                cout << "Invalid move! Try again\n";

            cout << "Row: ";

            cin >> row;

            cout << "Col: ";

            cin >> col;

            trial++;
        }
     while (board[row - 1][col - 1] != '*' || row > 3 || row < 0 || col > 3 || row < 0);

    board[row - 1][col - 1] = player;

}
