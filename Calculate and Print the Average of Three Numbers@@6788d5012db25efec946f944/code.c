#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a ,&b ,&c);
    float avg ;
    avg = (a+b+c)/3;
    print("Average: %.2f",avg);
    return 0;
}