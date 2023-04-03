#include <stdio.h>

int main(){
    int a=10,b=20;
    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    float div=a*1.0/b;
    int mod=a%b;

    printf("%d %d %d %0.2f %d",sum,sub,mul,div,mod);
}