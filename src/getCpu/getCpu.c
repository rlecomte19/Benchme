// #include <time.h>
// #include "./triSelection/triSelection.h"

// void getCpu(float *tab, double *timeTaken){
//     clock_t start, end;
// 	double cpu_time_used;
// 	// I - TRI PAR SELECTION
// 	start = clock();
// 		triSelection(tab, 4);
// 	end = clock();
// 	tab[1] = ((double) ((end-start)) / CLOCKS_PER_SEC)* pow(10,6)

// 	// II - TRI PAR INSERTION
// 	start = clock();
// 		triInsertion(tab, 4);
// 	end = clock();
// 	tab[2] = ((double) ((end-start)) / CLOCKS_PER_SEC)* pow(10,6)

// 	// III - TRI A BULLES
// 	start = clock();
// 		tri_a_bulle(tab, 4);
// 	end = clock();
// 	tab[3] = ((double) ((end-start)) / CLOCKS_PER_SEC)* pow(10,6)

// 	// IV - TRI PAR TAS
// 	start = clock();
// 		triTas(tab, 4);
// 	end = clock();
// 	tab[3] = ((double) ((end-start)) / CLOCKS_PER_SEC)* pow(10,6)
// }
