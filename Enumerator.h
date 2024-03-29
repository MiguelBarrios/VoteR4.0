//
//  Enumerator.h
//  Project2VoteR
//
//  Created by Miguel Barrios on 10/22/18.
//  Copyright © 2018 Miguel Barrios. All rights reserved.
//

#ifndef ENUMERATOR
#define ENUMERATOR

template <typename T>
class Enumerator
{
public:
    virtual bool hasNext() const = 0;    // returns true if there is a next element
    virtual T next() = 0;                // returns copy of next element and advances to next position
    // throws ExceptionEnumerationBeyondEnd if no next item is available
    virtual T peek() const = 0;            // returns copy of next element without advancing position
    // throws ExceptionEnumerationBeyondEnd if no next item is available
};

#endif // !ENUMERATOR
