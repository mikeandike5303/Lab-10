// Lab 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

struct Person {
    char sprite = '\0';
    string first;
    string last;
    string email;
    int SSN;
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
    Person people[10];
    Person current;
    int i = 0;
    while (gameFile >> current.SSN >> current.first >> current.last >> current.email) {
        people[i] = current;
        i++;
        
    }

    // display pieces
    for (Person& p : people) {
        if (p.sprite == '\0') {
            break;
        }
        cout << p.last << p.first << p.SSN << p.email << endl;
    }

    return 0;

}