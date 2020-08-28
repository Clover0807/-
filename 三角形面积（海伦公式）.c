#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c,p;
    double s;
    printf("输入三角形的三条边长a b c");
    scanf("%d %d %d",&a,&b,&c);
    p=0.5*(a+b+c);
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("三角形的面积为%lf",s);
    return 0;
}
