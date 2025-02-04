#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <math.h>
bool is_prime(int number1){ //a function to check if number is prime
    bool prime=true;
    if (number1==1)
        {
        prime=false; //if not a prime assigning false to prime
    }
    else if (number1==2 || number1==3)
        {
        prime=true;
    }
    else
    {
        int i;
        for (i=3;i<sqrt(number1)+1;i+=2) //checking if the number is divisible by integer numbers until square root of that number
        {
            if (number1%i==0){
                prime=false;
                break;
                }
    }
    }
    return prime;
}
void clean_buffer(){ //cleaning buffers
    while(getchar() !='\n');

}
int main(){
    char continue_input;
    int number;
    do{
        printf("if you enter a float if will give result for the rounded value\n");
        printf("enter your number:");
        while(scanf("%d",&number) !=1 || number<=0){//getting the input from the user and checking if its valid
            if (scanf("%d",&number) !=1){
                printf("Error:not a valid input.please input a positive integer value.\n");}
            else if (number<=0){
                printf("error:not a valid input.number cannot be negative or zero");
            }
            clean_buffer();
            printf("Enter your number:");
            continue;
            }

        if (is_prime(number)) //checking if this number is a sophie germain number
            {
            if (is_prime(2*number+1))
                {
                printf("its a sophie german prime.\n");

            }
            else
                {
                printf("its not a sophie german prime.\n");
            }
        }
        else
            {
            printf("its not a sophie german prime\n");
        }
        printf("do you want to check another number(Y/N)??\n"); //asking the user if they want to check another number
        clean_buffer();
        scanf(" %c",&continue_input);  //getting the input Y or N
    } while (continue_input=='y'|| continue_input=='Y'); //if yes do again
    printf("thank you for using the code");
    return 0;
}
