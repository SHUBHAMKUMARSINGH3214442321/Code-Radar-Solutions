#include <stdio.h>
int main(){
    char name[10];
    char age[20];
    char hobby[30];
    scanf("%s %s %s",&name ,&age ,&hobby);
    printf("Name: %s\n",name);
    printf("Age: %s\n",age);
    printf("Hobby: %s",hobby);
    return 0;
}