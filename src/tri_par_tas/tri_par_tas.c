#include <stdio.h>

float *tas(float *tab,int nIndice, int nNbVal)
{
    float fTemp;
    int nPosition = 2* nIndice;
    while (nPosition<= nNbVal)
    {
        if(nPosition < nNbVal && tab[nPosition] < tab[nPosition+1])
        {
            nPosition += 1;
        }
        if(tab[nIndice] < tab[nPosition])
        {
            fTemp = tab[nPosition];
            tab[nPosition] = tab[nIndice];
            tab[nIndice] = fTemp;
        }
        else
        {
            nPosition +=1;
        }
    }
}

//float *tri_a_bulle(float *tablInit)
float *tri_par_tas(float *tabInit, int nNbVal)
{
    float fTemp;
    printf("\nTri par tas\n");

    for(int nI = nNbVal/2; nI > 0; nI--)
    {
        tas(tabInit, nI, nNbVal);
    }
    for(int nI = nNbVal; nI > 0; nI--)
    {
        fTemp = tabInit[nI];
        tabInit[nI] = tabInit[0];
        tabInit[0] = fTemp;
        tas(tabInit, 0, nI-1);
    }

    return tabInit;
}