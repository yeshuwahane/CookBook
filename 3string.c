#include<stdio.h>
#include<string.h>
int main(){
    char name[20],dname[20];
    printf("Enter a name :  ");
    scanf("%s",name);
    int len;
    len=strlen(name);
    for(int i=0;i<len;i++){
        dname[i]=name[i];
       }
       printf("%s \n",dname);
return 0;
}
