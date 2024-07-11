// Rolling Three Dice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Create a Die Class.
Die should have two attributes:
int faceValue;
const int SIDES = 6;
It should also have three functions:
void roll();   / changes the value of the die to a random number between 1 and the number of the sides.  (rand() % SIDES + 1)
int getFaceValue() const;   // returns the current face value.
string printDie() const;   // returns a string description of the Die, for example, "A 6-sided Die showing a 4"
Inside a main function, create three dice, and roll them.  Display the three dice and their sum.
Submit the .cpp file.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class Die {
private:
    int faceValue;
    const int SIDES = 6;

public:
    Die() {
        faceValue = 1;
    }

    void roll() {
        faceValue = rand() % SIDES + 1;
    }

    int getFaceValue() const {
        return faceValue;
    }

    string printDie() const {
        return "A 6-sided Die showing a " + to_string(faceValue);
    }
};

int main() {
    srand(time(0));

    Die die1, die2, die3;

    die1.roll();
    die2.roll();
    die3.roll();

    cout << "Die 1: " << die1.printDie() << endl;
    cout << "Die 2: " << die2.printDie() << endl;
    cout << "Die 3: " << die3.printDie() << endl;

    int sum = die1.getFaceValue() + die2.getFaceValue() + die3.getFaceValue();
    cout << "Sum of all three dice: " << sum << endl;
}

