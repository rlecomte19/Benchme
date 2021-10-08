#include <time.h>

double getCpu(float *tab, double *timeTaken){
    clock_t start, end;
	double cpu_time_used;
	// I - RECUPERATION DU TEMPS CPU UTILISE PAR LE TRI PAR SELECTION
	start = clock();
		triSelection(tab, 4);
	end = clock();
	tab[1] = ((double) (end-start)) / CLOCKS_PER_SEC;

	// II - RECUPERATION DU TEMPS CPU UTILISE PAR LE TRI PAR INSERTION
	start = clock();
		triInsertion(tab, 4);
	end = clock();
	tab[2] = ((double) (end-start)) / CLOCKS_PER_SEC;

	// III - RECUPERATION DU TEMPS CPU UTILISE PAR LE TRI A BULLES
	start = clock();
		tri_a_bulle(tab, 4);
	end = clock();
	tab[3] = ((double) (end-start)) / CLOCKS_PER_SEC;

	// IV - RECUPERATION DU TEMPS CPU UTILISE PAR LE TRI PAR TAS 
	start = clock();
		triTas(tab, 4);
	end = clock();
	tab[3] = ((double) (end-start)) / CLOCKS_PER_SEC;
}