//INPUT: 5 7
//OUTPUT: 7 13    6 14
#include<stdio.h>
 int main ()
{ 
int i,j;
printf("Enter the values of i and j");
scanf("%d%d",&i,&j);
     i = i + 1;
      j = j + i + 1;  // correct the code
      printf("%d %d   ",i + 1, j - 1);
      printf("%d %d", i, j);
return 0;
}
