#include <stdio.h>
#include <string.h>
#include <locale.h>


main(void) {
	
	char nome[50];
	char m[3][2];
	int l, c;
	for (l=0; l<3; l++) {
		for (c=0; c<2; c++) {
			printf("Digite o numero na posicao [%d][%d]", l, c);
			scanf("%d", &m[l][c]);			
		}
	}
	for (l=0; l<3; l++) {
		for (c=0; c<2; c++) {	
			printf("%d\t", m[l][c]);
	}
}
}



/*main (void){
	int n;
	int v[5];
	for (n=0; n<3; n++) v[n]=0 {
		printf("%d", &v[n]);
	}
	}*/
	

