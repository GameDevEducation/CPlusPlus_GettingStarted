// C++ Tutorial - Getting started.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // create a variable called name of type string
    string name;

    // ask the user to enter their name
    cout << "Please enter your name: ";

    // read in the name
    cin >> name;

    // greet the user
    cout << "Hello " << name << "!" << endl;

    int age = 41;
    float speed = 1.234f; 
    double currentTime = 1.2345678;

    speed *= 2;             // multiplies speed by 2 and updates the variable
    currentTime /= 0.5f;    // divides currentTime by 0.5 (ie. multiplies by 2) and updates the variable
    currentTime += 1.f;     // adds 1 to currentTime and updates the variable

    speed = speed * 5;

    cout << "Age: " << age << endl;
	cout << "Speed: " << speed << endl;
	cout << "Time: " << currentTime << endl;
}

/*
* This
* is
* a
* comment
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
