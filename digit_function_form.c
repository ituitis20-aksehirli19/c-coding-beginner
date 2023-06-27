#include <stdio.h>
#include <stdlib.h>

int digit(int a, int b){
    for(int i = 0; i <= a; i++){
            while(b>10){
                b = b / 10;
                a++;
            }
            a++;
            break;

        }
    return a;
}

int main() {
    int value = 0;
    int digits = 0;
    printf("Please enter a number: ", value);
    scanf("%d",&value);

    digits = digit(digits,value);
    printf("Your number's digit is:%d\n", digits);

    return 0;
}
