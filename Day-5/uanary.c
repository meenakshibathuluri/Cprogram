#include<stdio.h>
int main() {
     int a=50;
     printf("enter the value of a");
     scanf("%d",&a);
     a = a++;
     printf("increment a %d");
     return 0;
}
