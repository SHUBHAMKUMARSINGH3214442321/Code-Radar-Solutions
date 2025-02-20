#include <stdio.h>
int main(){
   int a,b,c;
   scanf("%d %d %d ",&a ,&b ,&c);
   if(a>b>c) print("%d",a);
   if(b>a>c) print("%d",b);
   if(c>b>a) print("%d",c);
    return 0;
}