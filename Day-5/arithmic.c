#include<stdio.h>
int main() {
     int a,b,sum,sub,mul,div,mol;
     printf("enter the value of a and b");
     scanf("%d %d",&a,&b);
     sum = a+b;
     printf("%d",sum);
     sub = a-b;
     printf("\n%d",sub);
     mul = a*b;
     printf("\n%d",mul);
     div = a/b;
     printf("\n%d",div);
     mol = a%b;
     printf("\n%d",mol);
     return 0;
}
