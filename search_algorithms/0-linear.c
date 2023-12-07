#include "search_algorithms.h"

int linear_search(int *array, size_t size, int value) {
    
    if (array == NULL) {
        return (-1);
    }
    for (int i = 0; i < size; i++) {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            printf("Found %d at index %d\n", array[i], i);
            return i;
        }
    }
}