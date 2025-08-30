#include "PlayingGame.h"

void MenuGame()
{
	cout << "\nChung toi co cac loai game sau\n";
	cout << "1. TicTacToe\n";
}

void Play_TicTacToe()
{
    TicTacToe Game1;
    Game1.Play();
}

void Game()
{
    int n;
    while (true) {
        MenuGame();
        cin >> n;
        switch (n)
        {
        case 1:
            Play_TicTacToe();
            break;
        default:
            cout << "Vui long chon lai\n";
        }
    }
}

