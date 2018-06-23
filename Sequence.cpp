#include "Sequence.h"
#include <fstream>
#include <iomanip>
Sequence::Sequence(const char* a)
    {
        file.open(a);
        if(!file)
            {
            cerr << "File could not be opened." << endl;
            }
        read();
    }

Sequence::~Sequence()
    {
        file.close();
    } 

int Sequence::length()
    {
        return s.length();
    }

int Sequence::numberOf(char base)
    {
        int count=0;
        string tmp = s;
        for(int i = 0;i < s.length();++i)
	    {
            if(base==s[i])
	    count++;
	    }
	    return count;
    }

void Sequence::read()
    {
        char * buf = new char[100];
	while(!file.eof())
	    {
	    file.getline(buf,100);
	    s = s + buf;
	    }
	    //    cout << s;
    }

