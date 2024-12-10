#include<stdio.h>
int main(){
    int inputNumber;
    printf("Enter a number: \n");
    scanf("%d",& inputNumber);
    if(inputNumber%2==0){
        printf("The given number is even");
    } 
    else{
        printf("The given number id odd");
    } 

    return 0;
}         