#include "dataPro.h"

int loadData(void** pData, size_t* pSize, const char* szFNm)
{
    if(szFNm)
    {
        FILE* f = fopen(szFNm, "rb");
        fseek(f, 0, SEEK_END);
        *pSize = ftell(f);
        rewind(f);
        *pData = (char*)malloc(*pSize);
        fread(*pData, *pSize, 1, f);
        fclose(f);
    }
    return 0;
}


int dropData(void** pData, const size_t* pSize, const char* szFNm)
{
    if(*pData)
    {
        if(szFNm)
        {
            FILE* f = fopen(szFNm, "wb");
            fwrite(*pData, *pSize, 1, f);
        }
        free(*pData);
    }
    return 0;
}


