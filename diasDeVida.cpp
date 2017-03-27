#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main() {
	int diaA, mesA, anoA, diaR, mesR, anoR, max, fail = 0;
	printf("Data de Nascimento: ");
	scanf("%d/%d/%d", &diaR, &mesR, &anoR);
	printf("Data Atual: ");
	scanf("%d/%d/%d", &diaA, &mesA, &anoA);
	if (diaR <= 0 || mesR <= 0 || anoR <= 0) { fail = 1; }
	if (anoR == anoA) { if (mesR > mesA) { fail = 1; } if (mesR == mesA && diaR > diaA) { fail = 1; } }
	if (mesR == 1 || mesR == 3 || mesR == 5 || mesR == 7 || mesR == 8 || mesR == 10 || mesR == 12) { max = 31; }
	else if (mesR == 4 || mesR == 6 || mesR == 9 || mesR == 11) { max = 30; }
	else if (mesR == 2) { if ((anoR % 4 == 0 && anoR % 100 != 0) || anoR % 400 == 0) { max = 29; } else { max = 28; } } else { fail = 1; }
	if (diaR > max) { fail = 1; }
	if (diaA <= 0 || mesA <= 0 || anoA <= 0) { fail = 1; }
	if (mesA == 1 || mesA == 3 || mesA == 5 || mesA == 7 || mesA == 8 || mesA == 10 || mesA == 12) { max = 31; }
	else if (mesA == 4 || mesA == 6 || mesA == 9 || mesA == 11) { max = 30; }
	else if (mesA == 2) { if ((anoA % 4 == 0 && anoA % 100 != 0) || anoA % 400 == 0) { max = 29; } else { max = 28; } } else { fail = 1; }
	if (diaA > max) { fail = 1; }
	if (fail == 0) {
		int tempA;
		if ((100 * anoA + mesA - 190002.5) > 0) { tempA = 1; } else { tempA = -1; }
		int tempR;
		if ((100 * anoR + mesR - 190002.5) > 0) { tempR = 1; } else { tempR = -1; }printf("Voce tem %i dias de vida! (+1 com hoje)\n", (367 * anoA - trunc((7 * (anoA + trunc((mesA + 9.0) / 12))) / 4) + trunc((275.0 * mesA) / 9) + diaA + 1721013.5 - (0.5 * tempA) + 0.5) - (367 * anoR - trunc((7 * (anoR + trunc((mesR + 9.0) / 12))) / 4) + trunc((275.0 * mesR) / 9) + diaR + 1721013.5 - (0.5 * tempR) + 0.5) - 1);
	} else { printf("Data invalida!\n"); } system("pause"); return 0; }
