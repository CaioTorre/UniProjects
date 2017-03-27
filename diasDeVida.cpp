#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main() {
	int diaA, mesA, anoA, diaR, mesR, anoR, max, fail;
	
	diaA = 27;
	mesA = 3;
	anoA = 2017;
	
	fail = 0;
	
	printf("Dia de Nascimento: ");
	scanf("%i", &diaR);
	printf("Mes de Nascimento: ");
	scanf("%i", &mesR);
	printf("Ano de Nascimento: ");
	scanf("%i", &anoR);
	printf("------------------\n");
	printf("Dia Atual: ");
	scanf("%i", &diaA);
	printf("Mes Atual: ");
	scanf("%i", &mesA);
	printf("Ano Atual: ");
	scanf("%i", &anoA);
	
	if (diaR <= 0 || mesR <= 0 || anoR <= 0) {fail = 1;}
	
	if (anoR == anoA) {
	    	if (mesR > mesA) {fail = 1;}
	    	if (mesR == mesA && diaR > diaA) {fail = 1;}
	}
	if (mesR == 1 || mesR == 3 || mesR == 5 || mesR == 7 || mesR == 8 || mesR == 10 || mesR == 12) {
		max = 31;
	} else {
		if (mesR == 4 || mesR == 6 || mesR == 9 || mesR == 11) {
			max = 30;
		} else {
			if (mesR == 2) {
				if ((anoR % 4 == 0 && anoR % 100 != 0) || anoR % 400 == 0) {
					max = 29;
				} else {
					max = 28;
				}
			} else {
				fail = 1;
			}
		}
	}
		
	if (diaR > max) {fail = 1;}
	
	if (fail == 0) {
	    
		int temp1A = (mesA + 9)/12;
		int temp2A = (7 * (anoA + temp1A))/4;
		int temp3A = (275 * mesA)/9;
		int temp4A;
		if ((100 * anoA + mesA - 190002.5) > 0) {
			temp4A = 1;
		} else {
			temp4A = -1;
		}
		double julianoA = 367 * anoA - temp2A + temp3A + diaA + 1721013.5 - (0.5 * temp4A) + 0.5;
		
		int temp1R = (mesR + 9)/12;
		int temp2R = (7 * (anoR + temp1R))/4;
		int temp3R = (275 * mesR)/9;
		int temp4R;
		if ((100 * anoR + mesR - 190002.5) > 0) {
			temp4R = 1;
		} else {
			temp4R = -1;
		}
		double julianoR = 367 * anoR - temp2R + temp3R + diaR + 1721013.5 - (0.5 * temp4R) + 0.5;
		
		int diff = julianoA - julianoR - 1;

		printf("Voce tem %i dias de vida!", diff);
	} else {
		printf("Data invalida!\n");
	}
	return 0;
}
