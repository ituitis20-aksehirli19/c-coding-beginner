#include <stdio.h>
#include <stdlib.h>
int main() {
    int value = 0;
    int digit = 0;
    printf("Please enter a number: ", value);
    scanf("%d",&value);
    for(int i = 0; i <= digit; i++){
        while(value>10){
            value = value / 10;
            digit++;
        }
            digit++;
            break;

    }
    printf("Your numbers digit is: %d\n", digit);

    return 0;
