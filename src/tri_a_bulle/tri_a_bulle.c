#include <stdio.h>

/**
 * @brief Algorithme de tri à bulle
 * 
 * @param tabInit Tableau non trié
 * @param nNbVal Nombre de valeurs dans le tableau
 * @return Tableau trié
 */

float *tri_a_bulle(float *tabInit, int nNbVal)
{
    printf("Tri a bulle\n");

    int nI = 0;
    float fTemp;
    int ntabTrie = 0 ;
    while(ntabTrie != 1)
    {
        ntabTrie = 1;
        for(nI; nI <nNbVal-1; nI++)
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

    }
    return tabInit;
}