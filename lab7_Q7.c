#include <stdio.h>
#include <ctype.h>  

int main() {
    char input[100];
    int digits[100];
    int sum = 0, count = 0;

    printf("Enter a string with letters, digits, and special characters:\n");
    fgets(input, sizeof(input), stdin);  
  
    for (int i = 0; input[i] != '\0'; i++) {
        if (isdigit(input[i])) {
            digits[count] = input[i] - '0';  
            sum += digits[count];
            count++;
        }
    }

   
    printf("\nExtracted digits: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", digits[i]);
    }

    
    printf("\nSum of digits: %d\n", sum);

    return 0;
}