/*
    File    : indexed_sequence.h

    Project     : Devolucion Trabajo Practico Final
                  Consulta Finales Dic' 2010, Mar' 2011

    Author      : Gabriel Pimentel
    RAD         : Borland C++ Builder 5.5

    Date        : Noviembre 2010
    Status      : Prototype
    Iteration   : 1 ( prototype )
*/
#pragma hdrstop
#pragma argsused

#ifndef _INDEXED_SEQUENCE_H
#define _INDEXED_SEQUENCE_H

#include <iostream.h>
#include <conio.h>
#include <mem.h>

#include "sequence.h"

template < class Type >
struct IndexedSequence
{

    typedef Sequence< Type >::Predicate Predicate ;

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
} ;

template< class Type >
bool __fastcall IndexedSequence<Type>::Initialize( void )
{
    return rep.Initialize() ;
}

template< class Type >
bool __fastcall IndexedSequence<Type>::CreateWith( Type data[], int size )
{
    return rep.CreateWith( data, size ) ;
}

template< class Type >
int __fastcall IndexedSequence<Type>::Count( void )
{
    return rep.Count() ;
}

template< class Type >
void __fastcall IndexedSequence<Type>::Select( Predicate predicate,
                                               IndexedSequence& output)
{
    return rep.Select( predicate, output ) ;
}

template< class Type >
bool __fastcall IndexedSequence<Type>::IsEmpty( void )
{
    return rep.IsEmpty() ;
}

template< class Type >
bool __fastcall IndexedSequence<Type>::IsFull( void )
{
    return rep.IsFull() ;
}

template< class Type >
bool __fastcall IndexedSequence<Type>::Add( const Type& item )
{
    return rep.Add( item ) ;
}

template< class Type >
Type* __fastcall IndexedSequence<Type>::First( void )
{
    return rep.First() ;
}

template< class Type >
Type* __fastcall IndexedSequence<Type>::Next( void )
{
    return rep.Next() ;
}

template< class Type >
Type& __fastcall IndexedSequence<Type>::AtPos( int pos )
{
    return rep.rep[ pos ] ;
}

template< class Type >
int __fastcall IndexedSequence<Type>::IndexOf( const Type& item )
{
    int idx = 0 ;
    bool found = false ;
    Type* current = First();

    while ( current && !found ) {
        if ( ::memcmp( current, &item, sizeof( item ) ) == 0 )
        {
            found = true ;
        } else {
            current = Next() ;
            idx++ ;
        }
    }
    return found ? idx : -1 ;
}

template< class Type >
void __fastcall IndexedSequence<Type>::Dump( void )
{
    return rep.Dump() ;
}

template< class Type >
void __fastcall IndexedSequence<Type>::Free( void )
{
    rep.Free() ;
}

#endif // _INDEXED_SEQUENCE_H
