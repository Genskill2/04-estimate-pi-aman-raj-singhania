#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int n)
{
  float num,num2,num3,mypi;
  if (n==0)
  {
    return 0;
  }
  for (int j=1;j<=n;j++)
  {
    num = 4*j*j;
    num2 = num-1;
    num3 = num/num2;
    
    if (j==1)
    {
      mypi = num3;
    }
    else
    {
      mypi = mypi * num3;
    }
  }
  mypi *= 2;
  return mypi;
}


int main(void) {
  float pi
  for (int i=0; i<5; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) > 0.15)) {
      printf("Estimate with just %d iterations is %f which is too accurate.\n", i, pi);
      abort();
    }
  }

  for (int i=500; i<3000; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) < 0.01)) {
      printf("Estimate with even %d iterations is %f which is not accurate enough.\n", i, pi);
      abort();
    }
  }
}

