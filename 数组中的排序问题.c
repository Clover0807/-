#include<stdio.h>

  

   int main(void)

  {

      int i, n, m;

      int a[6] = {10, 20, 30, 40, 50};

       printf("Input an integer: ");

       scanf("%d", &n);

       for (i = 0; i < 6 - 1; i++)

          if (a[i] > n)

              break;

      cur = i;

      //将a[4]~a[m]依次后移

      for (i = 6 - 2; i >= cur; i--)

          a[i + 1] = a[i];

      //将n 插入到a[m]

      a[m] = n;

      for (i = 0; i < 6; i++)

          printf("%5d", a[i]);

      printf("\n");

 

      return 0;

  }
