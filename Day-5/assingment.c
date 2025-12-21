#include<stdio.h>
int main() {
     int a,b;
     printf("enter the value of a and b");
     scanf("%d %d",&a,&b);
     a += b;
     printf("%d",a);
     a -= b;
     printf("\n%d",a);
     a *= b;
     printf("\n%d",a);
     a /= b;
     printf("\n%d",a);
     a %= b;
     printf("\n%d",a);
     return 0;
}
