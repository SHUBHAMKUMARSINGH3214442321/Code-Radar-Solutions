#include <stdio.h>
int main(){
    int cp,sp;
    scanf("%d %d",&cp ,&sp);
    if(cp>sp) printf("Loss");
    if(cp<sp) printf("Profit");
    if(cp==sp) printf("No Profit No Loss");
    return 0;
}