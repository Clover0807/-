#include<stdio.h>
int main(){
 int sum,a,b,c;
 scanf("%d %d %d",&a,&b,&c);
 for(int sum=10;sum<=100;sum++)
 {
  if(sum%3==a&&sum%5==b&&sum%7==c)
  printf("%d",sum);
 
 }
 return 0;
}        
       
