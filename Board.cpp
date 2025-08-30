#include "Board.h"

Board::Board() : FilledCells(0)
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            grid[i][j] = ' ';
    }
}

void Board::drawBoard() const
{
    //Display the board
    cout << "-------------" << "\n";
    for (int i = 0; i < 3; ++i)
    {
        cout << "|";
        for (int j = 0; j < 3; ++j)
        {
            cout << grid[i][j] << "|";
        }
        cout<<"\n" << "-------------" << "\n";
    }
}

bool Board::isValidMove(int row, int col) const
{
    //Check if a move is valid
    //Giong nhu cac o khi chon phai thoa man dieu kien
    //+ 0 <= row, col <3
    //+ Cac o chua duoc danh
    return (row >= 0 && row < 3 && col >= 0 && col < 3 && grid[row][col] == ' ');
}

void Board::makeMove(int row, int col, char symbol)
{
    if (isValidMove(row, col)) {
        grid[row][col] = symbol;
        FilledCells++;
    }
}

bool Board::checkWin(char symbol) const
{
    for (int i = 0; i < 3; ++i) {
        if (grid[i][0] == symbol && grid[i][1] == symbol && grid[i][2] == symbol)
            return true;
    }
    for (int i = 0; i < 3; ++i) {
        if (grid[0][i] == symbol && grid[1][i] == symbol && grid[2][i] == symbol)
            return true;
    }
    if (grid[0][0] == symbol && grid[1][1] == symbol && grid[2][2] == symbol) {
        return true;
    }
    if (grid[0][2] == symbol && grid[1][1] == symbol && grid[2][0] == symbol)
        return true;

    //If everything on there is not statistified the Win
    return false;
}

bool Board::isFull() const
{
    return (FilledCells == 9);
}

int Board::getFilledCells() const
{
    return FilledCells;
}
