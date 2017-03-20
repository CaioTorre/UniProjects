#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main() {
	while (true) {
		printf("Mode: ");
		int mode;
		float x1, x2, x3, y1, y2, y3, z1, z2, z3;
		float xr, yr, zr, res, mod;
		scanf("%i", &mode);
		printf("Vector 1: ");
		scanf("%f %f %f", &x1, &y1, &z1);
		printf("Vector 2: ");
		scanf("%f %f %f", &x2, &y2, &z2);
		if (mode == 0){
			res = (x1 * x2 + y1 * y2 + z1 * z2);
			printf("Result: %f\n", res);
		}
		else if (mode == 1) {
			xr = (y1 * z2 - y2 * z1);
			yr = -1 * (x1 * z2 - x2 * z1);
			zr = (x1 * y2 - x2 * y1);
			mod = sqrt(xr * xr + yr * yr + zr * zr);
			printf("Result: (%f, %f, %f); Module: %f\n", xr, yr, zr, mod);
		}
		else {
			printf("Vector 3: ");
			scanf("%f %f %f", &x3, &y3, &z3);
				
			xr = x1 * (y2 * z3 - y3 * z2);
			yr = y1 * (x2 * z3 - x3 * z2);
			zr = z1 * (x2 * y3 - x3 * y2);
			printf("Result: %f\n", (xr - yr + zr));
		}	
		//system("pause");
		printf("\n\n");
	}
}