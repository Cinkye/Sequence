#include <iostream>
#include "Sequence.h"
#include <string>
#include <ctime>
using namespace std;

int main()
{
    Sequence test("test.txt");
    clock_t s,e,a,b;
    s = clock();
    cout << "--------Testing function length()--------" << endl << endl;
    cout << "The length of the file is " << test.length() << endl << endl;
    cout << "--------Testing function numberOF()--------" << endl << endl;
    cout << "Number of A: " << test.numberOf('A') << endl;
    cout << "Number of T: " << test.numberOf('T') << endl;
    cout << "Number of G: " << test.numberOf('G') << endl;
    cout << "Number of C: " << test.numberOf('C') << endl << endl;
    cout << "--------Testing function longestConsecutive()--------" << endl << endl;
    cout << test.longestConsecutive() << endl;
    e = clock();
    cout << "Time used: " << (double)(e-s)/(double)CLOCKS_PER_SEC << endl;
    cout << "--------Testing function longestRepeated()--------" << endl << endl;
    a = clock();
    cout << test.longestRepeated() << endl;
    b = clock();
    cout << "Time used: " << (double)(b-a)/(double)CLOCKS_PER_SEC << endl;
    return 0;
}

