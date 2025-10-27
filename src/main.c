#include <stdio.h>
#include "sort.h"

int main() {
    // Array of characters (letters)
    char letter_arr[] = {'z', 'S', 's', 'a'};
    int len_letters = sizeof(letter_arr) / sizeof(letter_arr[0]);

    // Array of 'numbers' as chars
    char number_arr[] = {4, -1, 2, 9};
    int len_numbers = sizeof(number_arr) / sizeof(number_arr[0]);

    // Print original letter array
    printf("Original letters: ");
    for (int i = 0; i < len_letters; ++i) printf("%c ", letter_arr[i]);
    printf("\n");

    // Sort letters case-insensitively (implemented in sort.c)
    bubble_sort(letter_arr, len_letters, letters_in_order);
    printf("Sorted letters:  ");
    for (int i = 0; i < len_letters; ++i) printf("%c ", letter_arr[i]);
    printf("\n");

    // Print original number array
    printf("Original numbers: ");
    for (int i = 0; i < len_numbers; ++i) printf("%d ", (int)number_arr[i]);
    printf("\n");

    // Sort "numbers" in ascending order
    bubble_sort(number_arr, len_numbers, numbers_in_ascending_order);
    printf("Sorted numbers: ");
    for (int i = 0; i < len_numbers; ++i) printf("%d ", (int)number_arr[i]);
    printf("\n");

    return 0;
}
