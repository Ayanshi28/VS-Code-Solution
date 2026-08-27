#include <stdio.h>

int main() {
    int arr[] = {6, 12, 23, 34, 40}; // Must be sorted
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 34;
    
    int low = 0;
    int high = size - 1;
    int foundIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            foundIndex = mid;
            break;
        }
        if (arr[mid] < target) {
            low = mid + 1; // Search right half
        } else {
            high = mid - 1; // Search left half
        }
    }

    if (foundIndex != -1) {
        printf("Element %d found at index %d.\n", target, foundIndex);
    } else {
        printf("Element %d not found.\n", target);
    }

    return 0;
}
