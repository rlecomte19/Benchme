#include <stdio.h>

//float *tri_a_bulle(float *tablInit)
float *tri_a_bulle()
{

    int nNbVal = 10;
    float tabInit[10] = { 15, 4, 16, 2, 500, 14.3, 48, 1250, 46, 1300};
    int nI;
    float fTemp;
    int ntabTrie = 0 ;
    while(ntabTrie != 1)
    {
        ntabTrie = 1;
        for(nI; nI <nNbVal; nI++)
        {
            if(tabInit[nI] > tabInit[nI+1])
            {
                fTemp = tabInit[nI+1];
                tabInit[nI+1] = tabInit[nI];
                tabInit[nI] = fTemp;
                ntabTrie = 0;
            }
        }
        nI = 0;
        //ntabTrie = 1;
        //nI++;
    }
    for(int nJ=0; nJ<nNbVal; nJ++)
        printf("%f - ", tabInit[nJ]);
        
    
    //printf("%f", tabInit);
    return tabInit;
}