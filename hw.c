#include <stdio.h>

#include "avg.h"

int main() {
	printf("Hello World!\n");
	return (0);
	
	float a[] = { 12.0, 247.0, 348.0, 482.0, 237.0, 6835.0, 657.0,457.0, 48.0, 475.0, 7.0 };
	float b[10];
	
	average(a,b,10);
}
