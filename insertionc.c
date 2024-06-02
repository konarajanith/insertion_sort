#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main() {
    int numbers[] = {100, 50, 7, 900, 150};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int a, key, j;

    // Insertion Sort Algorithm
    for (a = 1; a< n; a++) {
        key = numbers[a];
        j = a - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && numbers[j] > key) {
            numbers[j + 1] = numbers[j];
            j = j - 1;
        }
        numbers[j + 1] = key;
    }

    // Print sorted array
    printf("Sorted array(insertion sort) -\n");
    for (a = 0; a < n; a++)
        printf("%d ", numbers[a]);
    printf("\n");

    return 0;



	
}
