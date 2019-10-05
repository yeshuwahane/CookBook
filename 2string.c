#include<stdio.h>
#include<string.h>
int main(){
    char fname[15],lname[15];
    printf("Enter your first name : ");
    scanf("%s",fname);
    printf("Enter your last name : ");
    scanf("%s",lname);
    strcat(fname,lname);
    printf("%s  \n",fname);
return 0;
}
