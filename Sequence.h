#ifndef SEQUENCE_H
#define SEQUENCE_H
#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

class Sequence
{
    public:
     Sequence(const char*);
     ~Sequence();
     int length();
     int numberOf(char);
     string longestConsecutive();
     //        string longestRepeated();
    private:
     ifstream file;
     void read();
     string s;
};

#endif // SEQUENCE_H
