[33mcommit fcd384151def4384101cd1c76a3b97376e81090c[m
Author: Nathan Russo <=>
Date:   Sun Dec 14 22:38:18 2014 -0300

    Nothing to commit

[1mdiff --git a/Plain/a.h b/Plain/a.h[m
[1mdeleted file mode 100644[m
[1mindex e69de29..0000000[m
[1mdiff --git a/Plain/a.html b/Plain/a.html[m
[1mdeleted file mode 100644[m
[1mindex e69de29..0000000[m
[1mdiff --git a/Plain/indexed_sequence.h b/Plain/indexed_sequence.h[m
[1mdeleted file mode 100644[m
[1mindex 63126c3..0000000[m
[1m--- a/Plain/indexed_sequence.h[m
[1m+++ /dev/null[m
[36m@@ -1,51 +0,0 @@[m
[31m-/********************************************[m
[31m-*                                           *[m
[31m-*    File        : indexed-sequence.h       *[m
[31m-*                                           *[m
[31m-*    Project     : Dinamic Sequence         *[m
[31m-*                                           *[m
[31m-*    Author      : Nathan Russo             *[m
[31m-*    RAD         : Code::Blocks 13.12       *[m
[31m-*                                           *[m
[31m-*    Date        : 08/12/2014               *[m
[31m-*                                           *[m
[31m-*    Iteration   : Plain                    *[m
[31m-*                                           *[m
[31m-********************************************/[m
[31m-[m
[31m-[m
[31m-#ifndef _INDEXED_SEQUENCE_H[m
[31m-#define _INDEXED_SEQUENCE_H[m
[31m-[m
[31m-#include <iostream>[m
[31m-#include <conio.h>[m
[31m-#include <mem.h>[m
[31m-using namespace std;[m
[31m-[m
[31m-#include "sequence.h"[m
[31m-[m
[31m-template < class Type >[m
[31m-class IndexedSequence: public Sequence<Type>[m
[31m-{[m
[31m-[m
[31m-    typedef bool (*Predicate)(Type item);[m
[31m-[m
[31m-    Sequence< Type > rep ;[m
[31m-[m
[31m-    bool __fastcall Initialize( void ) ;[m
[31m-    bool __fastcall CreateWith( Type data[], int size ) ;[m
[31m-    int __fastcall Count( void ) ;[m
[31m-    void __fastcall Select( Predicate predicate, IndexedSequence& output ) ;[m
[31m-    bool __fastcall IsEmpty( void ) ;[m
[31m-    bool __fastcall IsFull( void ) ;[m
[31m-    bool __fastcall Add( const Type& item ) ;[m
[31m-    Type* __fastcall First( void ) ;[m
[31m-    Type* __fastcall Next( void ) ;[m
[31m-    void __fastcall Dump( void ) ;[m
[31m-    void __fastcall Free( void ) ;[m
[31m-[m
[31m-    Type& __fastcall AtPos( int pos ) ;[m
[31m-    int __fastcall IndexOf( const Type& item ) ;[m
[31m-};[m
[31m-[m
[31m-#endif // _INDEXED_SEQUENCE_H[m
