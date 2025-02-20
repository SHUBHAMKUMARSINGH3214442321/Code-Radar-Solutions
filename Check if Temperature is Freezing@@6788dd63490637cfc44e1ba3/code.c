#include <stdio.h>
int main(){
   int temp;
   scanf("%d",&temp);
   if(temp<=0) printf("Freezing");
   if(temp>0) printf("Above Freezing");
    return 0;
}