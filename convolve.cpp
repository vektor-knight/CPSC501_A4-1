#include <ctime>
#include <fstream>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#include "WAV.h"

/* Prototypes */
void convolve(float x[], int N, float h[], int M, float y[], int P);

int main(int argc, char *argv[]) // Accept CL arguments
{
	return 0;
}

// Input-side convolution from Smith (p. 112-115)
void convolve(float x[], int N, float h[], int M, float y[], int P) 
{
	int n, m;

	for (n = 0; n < P; n++)
		y[n] = 0.0;

	for (n = 0; n < N; n++) 
	{
		for (m = 0; m < M; m++)
		{
			y[n+m] += x[n] * h[m];
		}
	}

}
