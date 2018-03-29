// ConsoleApplication1.cpp: define el punto de entrada de la aplicación de consola.
//
#include <stdio.h>
#include "stdafx.h"
// #define MAX(a,b) a>b? a:b;
#define MAX(a, b) ((a)>(b)? (a):(b))

int f (){ return 3;}

void main (void)
{
	int x = 3;
	int m = MAX(x, f()+1) * 2;	
	printf("%d\n", m);
}


