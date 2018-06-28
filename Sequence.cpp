#include "Sequence.h"
#include <fstream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <string.h>

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
/*
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
*/
//Another method of longestConsecutive()

string Sequence::longestConsecutive()
    {
        string longest;
	longest.clear();
	char max='Q';
	char base='Q';
	long long slength = s.length();
	int count=0;
	int mcount=0;
	for(int i = 0;i < slength;++i)
	{
	if(base == s[i])
	count++;
	else
	{
	if(count>mcount)
	{
	max = base;
	mcount = count;
	}
	base = s[i];
	count = 1;
	}
	}
	for(int i = 0;i < mcount;++i)
	{
	longest = longest + max;
	}
	cout << mcount <<endl;
	return longest;
    }

int pstrcmp(const void* p1, const void* p2)
{
	return strcmp(*(const char**)p1, *(const char**)p2);
}

int commonLength(char*p, char*q)
	{
	    int i = 0;
	    while(p[i] == q[i++]);
	    return --i;
	}

//Variables used in the following function
char c[1500000];
char* cPtr[1500000];

string Sequence::longestRepeated()
{
        int slength = s.length();
	int max = 0;
	int point = 0;
	for(int i = 0;i<slength;++i)
	{
	    cPtr[i] = &c[i];
	    c[i] = s[i];
        }
	c[slength] = 0;
	qsort(cPtr,slength,sizeof(char*),pstrcmp);
	for(int i = 0;i<slength-1;++i)
	{
	    if(commonLength(cPtr[i],cPtr[i+1]) > max)
	    {
	        max = commonLength(cPtr[i],cPtr[i+1]);
		point = i;
	    }
	}
	string out;
	out.assign(cPtr[point],max);
	return out;
	}

