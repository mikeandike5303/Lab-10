// Lab 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

struct Piece {
    char sprite = '\0';
    int x;
    int y;
};

int main()
{
    // input file
    ifstream gameFile;
    gameFile.open("C:\\Users\\mike.goy\\Documents\\persons.txt");
    if (gameFile.fail() || !gameFile.is_open()) {
        cout << "Uh oh, we can't read the file" << endl;
        exit(1);
    }

    // fix vector to hold person info
    Piece pieces[10];
    Piece current;
    int i = 0;
    while (gameFile >> current.sprite >> current.x >> current.y) {
        pieces[i] = current;
        i++;
    }

    // display pieces
    for (Piece& p : pieces) {
        if (p.sprite == '\0') {
            break;
        }
        cout << p.sprite << p.x << p.y << endl;
    }

    return 0;

}