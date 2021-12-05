//************************	Dictionary.h	************************
//	An ordered singly circular linked list which consists of strings

#include <stdexcept>
#include <string>
#include "List.h"


#ifndef DICTIONARY_H
#define DICTIONARY_H

class Dictionary : public List<string>
{

public:
    Dictionary& operator=( const Dictionary & );
    bool operator==( const Dictionary & ) const;
    bool operator!=( const Dictionary & ) const;
    void insertOrderly( const string & );

    //	it is not "const string &" because we swap the word with lower case
    int getNodeByValue( string & );
    void addToHead( const string & );
    void addToTail( const string & );
    Dictionary();
    Dictionary( const Dictionary & );
    ~Dictionary();
};


#endif
