#include "sort.h"
#include <ctype.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

bool letters_in_order(char a, char b) {
    return tolower(a) <= tolower(b);
}

bool numbers_in_ascending_order(char a, char b) {
    return a <= b;
}

void bubble_sort(char *arr, int n, bool (*pair_is_in_order)(char, char)) {
    bool swapping_occurred;
    do {
        swapping_occurred = false;
        for (int i = 1; i < n; ++i) {
            if (!pair_is_in_order(arr[i - 1], arr[i])) {
                swap(&arr[i - 1], &arr[i]);
                swapping_occurred = true;
            }
        }
        n--;
    } while (swapping_occurred);
}
