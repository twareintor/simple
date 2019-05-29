
/******************************************************************************
code by Twareintor - copyright (c) 2002-2019 Claudiu Ciutacu
*******************************************************************************/

#include "deps.h"
#include "dataPro.h"

int main()
{
    char* data;
    size_t size;
    loadData((void**)&data, &size, "data.dat");
    
    printf("size of the data = %d bytes\n---------------------------\n", size);
    /* test converting data to another type, e.g., long int */
    long* pvalue = (long*)data;
    int i;
    for(i=0; i<32; i++)
    {
        pvalue++;
        /** (*pvalue)++; */ /* just because is a test reading/ writting */
        printf("%ld\n", *pvalue);
    }
    
    /* test converting data to wide-char - doesn't work */
    wchar_t* wszX = (wchar_t*)data;
    /* wprintf(L"%ls\n", wszX); */ /* <<== doesn't print anything */
    
    /* test printing the data as-is */
    printf("%s\n", data);

    dropData((void**)&data, &size, "data2.dat");
    
    return 0;
}

