#include <iostream>
#include "Sequence.h"
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    clock_t ra,rb;
    cout << "--------Reading data--------" << endl << endl;
    ra = clock();
    Sequence test("test.txt");
    rb = clock();
    cout << "Time used: " << (double)(rb-ra)/(double)CLOCKS_PER_SEC << endl << endl;
    clock_t s,e,a,b,c,d,f,g;
    cout << "--------Testing function length()--------" << endl << endl;
    s = clock();
    cout << "The length of the file is " << test.length() << endl << endl;
    c = clock();
    cout << "Time used: " << (double)(c-s)/(double)CLOCKS_PER_SEC << endl << endl;
    cout << "--------Testing function numberOF()--------" << endl << endl;
    d = clock();
    cout << "Number of A: " << test.numberOf('A') << endl;
    cout << "Number of T: " << test.numberOf('T') << endl;
    cout << "Number of G: " << test.numberOf('G') << endl;
    cout << "Number of C: " << test.numberOf('C') << endl << endl;
    f = clock();
    cout << "Time used: " << (double)(c-s)/(double)CLOCKS_PER_SEC << endl << endl;
    cout << "--------Testing function longestConsecutive()--------" << endl << endl;
    g = clock();
    cout << test.longestConsecutive() << endl;
    e = clock();
    cout << "Time used: " << (double)(e-g)/(double)CLOCKS_PER_SEC << endl << endl;
    cout << "--------Testing function longestRepeated()--------" << endl << endl;
    a = clock();
    cout << test.longestRepeated() << endl;
    b = clock();
    cout << "Time used: " << (double)(b-a)/(double)CLOCKS_PER_SEC << endl << endl;
    cout << "--------End--------" << endl << endl;
    return 0;
    

}

