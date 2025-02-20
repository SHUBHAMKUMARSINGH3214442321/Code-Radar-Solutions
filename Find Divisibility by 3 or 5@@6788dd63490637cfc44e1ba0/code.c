#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num%3==0 && num%5==0) printf("Divisible by Both");
    if(num%3==0 && num%5!=0) printf("Divisible by 3");
    if(num%5==0 && num%3!=0) printf("Divisible by 5");
    if(num%5!=0 && num%3!=0) printf("Not Divisible");

    return 0;
}