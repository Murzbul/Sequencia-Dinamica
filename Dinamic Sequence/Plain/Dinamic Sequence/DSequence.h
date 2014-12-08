#ifndef DSEQUENCE_H_INCLUDED
#define DSEQUENCE_H_INCLUDED

/********************************************
*                                           *
*    File        : sequence.h               *
*                                           *
*    Project     : Dinamic Sequence         *
*                                           *
*    Author      : Nathan Russo             *
*    RAD         : Code::Blocks 13.12       *
*                                           *
*    Date        : 13/08/2014               *
*                                           *
*    Iteration   : Plain                    *
*                                           *
********************************************/

#include <iostream>
#include <mem.h>
using namespace std;

template <class Type>
class DSequence
{
    typedef bool ( *Predicate )( Type item ) ;

private:
    //enum {SEQUENCE_MAX_ITEMS = 512, SEQUENCE_EMPTY = -1} ;

    Type* rep;
    int first;
    int last;
    Type* current;

public:
    //Constructors and Destructor
    DSequence( void );
    DSequence( const Type &item );
    DSequence( const DSequence &dsequence );
   ~DSequence( void );

    //Members Functions
    bool CreateWith( Type data[], int size );
    int Count( void );
    void Select( Predicate predicate, DSequence& output );
    bool IsEmpty( void );
    bool Add( const Type& item );
    Type* First( void );
    Type* Next( void );
    void Dump( void );
    void Free( void );


};

template <class Type>
DSequence<Type>::DSequence( void )
{
    rep = new Type[1];
    rep[0] = 0;
    first = 0;
    last = 0;
    current = 0;

}

template <class Type>
DSequence<Type>::DSequence( const Type& item )
{
    rep = new Type[2];
    rep[0] = item;
    rep[1] = 0;
    first = 0;
    last = 1;
    current = &rep[first];
}

template < class Type >
DSequence<Type>::DSequence( const DSequence& dsequence )
{
    this->rep = dsequence.rep;
}

template < class Type >
DSequence<Type>::~DSequence( void )
{
    while ( rep )
    {
        delete rep;
    }
}

template < class Type >
bool DSequence<Type>::CreateWith( Type data[], int size )
{
    for (int index = 0; index<size; index++)
    {
        rep[index] = data[index];
    }
}

template < class Type >
int DSequence<Type>::Count( void )
{
    bool isFull = true;
    int 

    while (!isFull)
    {
        
    }
}

template < class Type >
void DSequence<Type>::Select( Predicate predicate, DSequence& output )
{

}

template < class Type >
bool DSequence<Type>::IsEmpty( void )
{
    return (rep[0]==0)?true:false;
}

template < class Type >
bool DSequence<Type>::Add( const Type& item )
{

}

template < class Type >
Type* DSequence<Type>::First( void )
{
    current = rep[first];
    return current;
}

template < class Type >
Type* DSequence<Type>::Next( void )
{
    Type* next = current;

    next++;

    return next;
}

template < class Type >
void DSequence<Type>::Dump( void )
{
    Type* item = First();

    while ( item )
    {
        cout<<*item<<" ";
        item = Next();
    }
    cout<<endl<<endl;
}

template < class Type >
void DSequence<Type>::Free( void )
{
    Type* aux = new Type[0];

    delete rep;

    rep = aux;

}

#endif // DSEQUENCE_H_
