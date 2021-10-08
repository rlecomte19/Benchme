// #include <stdio.h>
// #include "tofile.c"

// int main()
// {
// 	int test[] = { 1,2,3,4,5 };
//     FILE* file = NULL;

//     file = fopen("result.csv", "a+");
//     if(file != NULL){
//         // Test ouverture fichier et action réalisées
//         int lenSorted = (int) sizeof(test)/sizeof(int);
//         //size_t lenExec = sizeof(executionTime)/sizeof(double);  double executionTime[]

//         fputs("Tableaux triés;Sortie m/s", file);
//         for(int i=0; i<lenSorted;i++){
//             fprintf(file,"%d", test[i]);
//         }
// 		// TODO
// 		/*
// 			replacer le curseur en haut du fichier
// 			sauter une ligne
// 			déclaer avec ; 

// 		*/
// 		for(int i=0; i<lenSorted;i++){
//             fprintf(file,";%d", test[i]);
//         }
//     }else{
//         printf("L'ouverture du fichier a echouee..");
//     }
// }