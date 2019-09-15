#include<stdio.h>
int main(){
int sum=0,p;
while(1){
    printf("Enter product's price :   ");
    scanf("%d",&p);

        if(p==0){
            break;
        }
        else{
            sum=sum+p;
        printf("total amount :   %d\n",sum);
        }
    }
printf("__ %d __is total amount to pay\n",sum);
printf("Thank ou for shoping with us\n");
}
