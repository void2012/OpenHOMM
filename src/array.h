/************************************************************************

		OpenHoMM Project by Void_17
                  Licensed under MIT

	------------------------------------------------------------------
  						           array.h

	Header: /src/array.h 

	Descr.: Provides

 ************************************************************************/


#include <windows.h>

#pragma once

#define    DEFAULT_ARRAY_STEP            25

// --------------------------------------------------------------------------------
// This array stores pointers to your actual data. It automatically grows
// as items are placed into it...
// Этот массив хранит указатели ваших данных,
// он автоматически возрастает по мере заполнения...
// --------------------------------------------------------------------------------
template <class TClass>
class CAutoArray
{
public:

    CAutoArray () //Constructor
    {
        step        = DEFAULT_ARRAY_STEP;    
        size        = 0;
        allocSize   = 0;
        pArray      = NULL;
    }

    virtual ~CAutoArray () //Destructor
    {
        Destroy ();
    }

    inline void Destroy (bool deleteData=true)
    {
        if ( deleteData )
        {
            for (DWORD i=0;i<size;i++)
            {
                TClass *pElement = Get (i);
                delete pElement;
            }
        }
        if ( pArray )
            delete [] pArray;

        pArray      = NULL;
        allocSize   = 0;
        size        = 0;
    }

    void SetStep ( DWORD newStep )
    {
        step    = newStep;
    }

    inline bool Allocate ( DWORD newSize )
    {
        allocSize    = newSize;
        DWORD        *pTemp = new DWORD[ allocSize ];
        if ( pArray )
        {
            memcpy ( pTemp, pArray, sizeof(DWORD) * size );
            delete [] pArray;
        }
        pArray = pTemp;
        return true;
    }

    virtual bool Add ( TClass *element )
    {
        if ( allocSize<=size )
        {
            Allocate ( allocSize+step );
        }
        size++;
        return Put ( size-1, element );
    }

    virtual TClass * Get ( DWORD elementNbr )
    {
        if ( elementNbr>=size )
        {
            return NULL;
        }
        return (TClass*)pArray[elementNbr];
    }

    virtual bool Put ( DWORD elementNbr, TClass *element )
    {
        if ( elementNbr >= size )
            return false;

        pArray[ elementNbr ]    = (DWORD)element;

        return true;
    }

    virtual bool Delete ( DWORD    elementNbr )
    {
        if ( elementNbr >= size )
            return false;

        for ( DWORD index=elementNbr; index<size-1; index++ )
        {
            pArray[ index ]    = pArray[ index+1 ];
        }
        size--;

        return true;
    }

    virtual bool Insert ( DWORD nextElementNbr, TClass *element )
    {
        if ( nextElementNbr >= size )
            return false;

        TClass    *save = Get (size-1);

         for ( DWORD index=size-1; index>nextElementNbr; index-- )
         {
             pArray[index]    = pArray[index-1];
         }

         Put ( nextElementNbr, element );
         Add ( save );

        return true;
    }

    virtual DWORD GetCount()            { return size; }


    inline TClass * operator[] (DWORD index)
    {
        return Get ( index );
    }


protected:
    DWORD        step;      //offset  +4
    DWORD        *pArray;   //offset  +8
    DWORD        allocSize; //offset  +12
    DWORD        size;      //offset  +16
};
