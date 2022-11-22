#include<stdio.h>


  main()
{
      int n,k,i,j,l;
      clrscr();
      printf("enter any number");
      scanf("%d",&n);
      i=1;
      while(i<=n)
      { if(n%i==10)
      {j=i;
      k=0;
      l=1;
      while(l<=j)
      {if(j%1==0)
      k++;
      l++;
      }
      if(k==2)
      {printf("\n%d is a prime factor of %d",l-1,n);}}
      i++;
      }getch();
      }
