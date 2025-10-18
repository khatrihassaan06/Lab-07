#include <stdio.h>

int main() {
    int smallest = 100;
    int arr[8];
    int i;
    for(i = 0; i < 8; i++){
        printf("Enter age of participant: ");
        scanf("%d", &arr[i]);
    }
    for(i =0; i < 8; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    printf("Youngest participant's age= %d", smallest);
    return 0;
}