#include <stdio.h>
#include <stdlib.h>

#define N_STUDENT  5

int main(int argc, char *argv[])
{
  int grade[N_STUDENT];
  int i;
  
  grade[0] = 10;
  grade[1] = 20;
  grade[2] = 30;
  grade[3] = 40;
  grade[4] = 50;
  
  for(i=0;i<N_STUDENT;i++)
    printf("grade[%i] = %i\n", i, grade[i]);
  
  system("PAUSE");	
  return 0;
}
