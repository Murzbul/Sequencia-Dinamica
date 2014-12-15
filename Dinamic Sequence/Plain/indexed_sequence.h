/********************************************
*                                           *
*    File        : indexed-sequence.h       *
*                                           *
*    Project     : Dinamic Sequence         *
*                                           *
*    Author      : Nathan Russo             *
*    RAD         : Code::Blocks 13.12       *
*                                           *
*    Date        : 08/12/2014               *
*                                           *
*    Iteration   : Plain                    *
*                                           *
********************************************/


#ifndef _INDEXED_SEQUENCE_H
#define _INDEXED_SEQUENCE_H

#include <iostream>
#include <conio.h>
#include <mem.h>
using namespace std;

#include "sequence.h"

template < class Type >
class IndexedSequence: public Sequence<Type>
{

    typedef bool (*Predicate)(Type item);

    Sequence< Type > rep ;

    bool __fastcall Initialize( void ) ;
    bool __fastcall CreateWith( Type data[], int size ) ;
    int __fastcall Count( void ) ;
    void __fastcall Select( Predicate predicate, IndexedSequence& output ) ;
    bool __fastcall IsEmpty( void ) ;
    bool __fastcall IsFull( void ) ;
    bool __fastcall Add( const Type& item ) ;
    Type* __fastcall First( void ) ;
    Type* __fastcall Next( void ) ;
    void __fastcall Dump( void ) ;
    void __fastcall Free( void ) ;

    Type& __fastcall AtPos( int pos ) ;
    int __fastcall IndexOf( const Type& item ) ;
};

#endif // _INDEXED_SEQUENCE_H
