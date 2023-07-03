#include <stdlib.h>
#include <stdio.h>

#define MAX 10

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

int main(){
	int scanned_value = 0;
	int digit_value = 0;
	int scanned_digit_value = 0;
	int mod_of_value = 0;
	int i = 0;
	int array_of_digits[MAX];
	int for_printf;
	
	printf("Number: ");
	scanf("%d",&scanned_value);

	printf("Digit: ");
	scanf("%d",&digit_value);

	for_printf = scanned_value;

	scanned_digit_value = digit(scanned_digit_value, scanned_value);

	while(scanned_value != 0){
		mod_of_value = scanned_value % 10;
		array_of_digits[i] = mod_of_value;
		i++;
		scanned_value = scanned_value / 10;
}

       for(i = 0; i < scanned_digit_value; i++){
		if(array_of_digits[i] == digit_value){
			printf("%d does contain %d\n", for_printf, digit_value);
			return 0;
                }
       }
	printf("%d does not contain %d\n", for_printf, digit_value);
	

	return 0;
}
