#include "TicTacToe.h"

TicTacToe::TicTacToe()
{
    currentPlayerIndex = 0;
    string player1;
    string player2;

    cin.ignore(10000, '\n');
    cin.clear();
    cout << "Nhap ten cua nguoi thu nhat (di dau tien): "; getline(cin, player1);
    cout << "Nhap ten cua nguoi thu hai "; getline(cin, player2);

    Players[0] = Player('X', player1);
    Players[1] = Player('O', player2);
}

Player& TicTacToe::getCurrentPlayer()
{
    return Players[currentPlayerIndex];
}

void TicTacToe::swithTurn()
{
    currentPlayerIndex = (currentPlayerIndex + 1) % 2;
}

void TicTacToe::Play()
{
    int row, col;
    system("cls");
    cout << "Welcome to Tic-Tac-Toe\n";
    while (!board.isFull())
    {
        //Ve 1 cai bang
        board.drawBoard();
        //Di chuyen luot nguoi choi
        Player& currentPlayer = getCurrentPlayer();

        //Lay du lieu nhap vao va dua vao o 3x3
        while (true)
        {
            //Kiem tra du lieu nhap vao co dung hay khong
            cout << currentPlayer.getName() << " (" << currentPlayer.getSymbol()
                << ") ,Nhap lan luot cho hang va cot (0, 1, 2): ";
            cin >> row >> col;
            if (isValidMove(row, col))
                break;
            else
            {
                cout << "Loi nhap hay thu lai\n";
            }
        }

        // nhap vao o hay makeMove
        board.makeMove(row, col, currentPlayer.getSymbol());

        //Kiem tra chien thang
        if (board.checkWin(currentPlayer.getSymbol()))
        {
            board.drawBoard();
            cout << currentPlayer.getName() <<" win!!\n";
            return;
        }

        //Doi luot
        swithTurn();
    }

    //tro choi se ket thuc khi isFull tra ve la true ma van khong return => hoa
    board.drawBoard();
    cout << "Tie - 2 ben deu hoa\n";
}
