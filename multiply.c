#include "matops.h"

void multiply (float** a, float** b, float** c, int n)
{
  int i,j,k;
  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      c[i][j] = 0;

  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      for(k=0; k<n; k++)
	c[i][j] = a[i][k] * b[k][j];
}
