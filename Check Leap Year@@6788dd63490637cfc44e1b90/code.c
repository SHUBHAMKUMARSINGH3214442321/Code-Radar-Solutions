#include <stdio.h>
int main(){
   int year;
   scanf("%d",&year);
   if(x%400==0 || (x%4==0 && x%100!=0) ) printf("Leap Year");
   else printf("Not a Leap Year");

    return 0;
}