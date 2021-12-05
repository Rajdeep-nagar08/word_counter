//************************	WordCounter.h	************************

#include <fstream>
#include "Dictionary.h"

#ifndef WORDCOUNTER_H
#define WORDCOUNTER_H

class WordCounter
{
private:
    Dictionary dic;
    string fileName;

    string fixWord( string & );
    void fillDictionary();
public:
    WordCounter( const string & );
    ~WordCounter();

    //	it is not "const string &" because we swap the word with lower case
    int getCounter( string & );
    int getSize();
    void print();
    void listPopular( const int & );
};

#endif
