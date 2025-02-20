#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(0<num && num<101) printf("In Range");
    else printf("Out of Range");
    return 0;
}