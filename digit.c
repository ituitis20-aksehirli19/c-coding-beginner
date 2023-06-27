#include <stdio.h>
#include <stdlib.h>

int main() {
    int value = 987;
    int digit = 0;
    printf("please enter a number: ", value);

    for(int i = 0; i <= digit; i++){
        while(value>10){
            value = value / 10;
            digit++;
        }
            digit++;
            break;
            
    }
    printf("your numbers digit is:%d", digit);
    
    return 0;
}
