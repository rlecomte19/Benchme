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

            nIndice = nPosition;
            nPosition = 2 * nIndice;
        }
        else
        {
            nPosition = nNbVal+1;
        }
    }

}

/**
 * @brief Algorithme de tri par tas
 * 
 * @param tabInit Tableau non trié
 * @param nNbVal Nombre de valeurs dans le tableau
 * @return Tableau trié
 */
float *tri_par_tas(float *tabInit, int nNbVal)
{
    float fTemp;
    printf("Tri par tas\n");
    for(int nI = nNbVal/2; nI >= 0; nI--)
    {

        tas(tabInit, nI, nNbVal);
    }
    for(int nI = nNbVal-1; nI >= 1; nI--)
    {        
        fTemp = tabInit[nI];
        tabInit[nI] = tabInit[1];
        tabInit[1] = fTemp;
        tas(tabInit, 1, nI-1);
    }

    float fLast = tabInit[0];
    for(int nI=0; nI < nNbVal; nI++)
    {
        tabInit[nI] = tabInit[nI+1];
    }
    tabInit[nNbVal-1] = fLast;

    return tabInit;
}
