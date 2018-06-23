#include "Sequence.h"
#include <fstream>
#include <iomanip>
#include <string>
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
        char * buf = new char[1000];
	while(!file.eof())
	    {
	    file.getline(buf,1000);
	    s = s + buf;
	    }
	    //    cout << s;
    }

string Sequence::longestConsecutive()
    {
        string longest;
        string current;
        char base;
        string tmp = s;
        base = s[0];
        longest = base;
        for(int i = 1;i < s.length();++i)
        {
        if(current.length()>longest.length())
	longest = current;
	if(base == s[i])
	current = current + s[i];
	else
	{
	base = s[i];
	current = s[i];
	}

        }
	return longest;
    }
