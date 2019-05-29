/******************************************************************************
                dataPro.h - data processing c header
*******************************************************************************/
/******************************************************************************
coded by Twareintor - copyright (c) 2002-2019 Claudiu Ciutacu
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * this function loaads data from the file named 'szFNm' in '*pdata' 
 * if 'f' is null, loads data from the default file '~~data.dat'
 *      (remember that this is a temporary file); if the default file is not
 *      available, the result is undefined 
 * 
 */
int loadData(void** pData, size_t* pSize, const char* szFNm);

/**
 * this function frees the memory occupied by '*pdata' after putting its content
 * in the file file named 'szFNm' provided
 * 
 */
int dropData(void** pData, const size_t* pSize, const char* szFNm);

