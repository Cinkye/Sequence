#include <iostream>
#include "Sequence.h"
#include <string>

using namespace std;

int main()
{
    Sequence test("test.txt");
    cout << "Testing function length()" << endl << endl;
    cout << "The length of the file is " << test.length() << endl << endl;
    cout << "Testing function numberOF()" << endl << endl;
    char base;
    cout << "Input the letter you want to know the number of..." << endl;
    cin >> base;
    cout << test.numberOf(base) << endl;
    return 0;
}

