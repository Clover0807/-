#include<stdio.h>
int gcd(int a,int b);
int main()
{
	int a,b,t;
	printf("请输入两个整数a、b:");
	scanf("%d %d",&a,&b);
	t=gcd(a,b);
	printf("%d和%d的最大公约数为%d\n",a,b,t);
}
int gcd(int a,int b)
{
	int m;
		while(b!=0){
			m=a%b;
		    a=b;
		    b=m;
		}
		return a;
	
}
