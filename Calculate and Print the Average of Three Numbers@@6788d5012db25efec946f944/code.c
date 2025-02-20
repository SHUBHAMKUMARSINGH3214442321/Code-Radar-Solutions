#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a ,&b ,&c);
    float avg ;
    avg = (a+b+c)/(float)3;
    printf("Average: %.2f",avg);
    return 0;
}