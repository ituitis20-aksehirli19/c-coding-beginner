#include <stdio.h>
#include <stdlib.h>

#define MAX 15

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

int *arrayfiller(int scanned_value){
    int i = 0;
    static int array_of_digits[MAX];
    int mod_of_value = 0;
    while(scanned_value != 0 ){
        mod_of_value = scanned_value % 10;
        array_of_digits[i] = mod_of_value;
        i++;
        scanned_value = scanned_value / 10;
    }
    return array_of_digits;
}

int main() {
    int *p;
    int value = 153;
    int digits = 0;
    int module;
    int addition = 0;
    
    printf("Please enter a number: ", value);
    scanf("%d", &value);

    digits = digit(digits,value);
    printf("Your numbers digit is:%d\n", digits);

    p = arrayfiller(value);

    for (int i = 0; i < digits; i++ ) {
      addition += *(p+i) * digits;
   }

    printf("The addition is: %d\n", addition);

    if(addition == value){
    printf("this is armstrong number\n");
   }else{
    printf("this is not an armstrong number\n");
}
    return 0;
}
