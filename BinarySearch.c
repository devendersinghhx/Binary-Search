#include <stdio.h>

// Function to perform binary search in a sorted array
// Parameters:
//   arr: the sorted array to search in
//   size: the size of the array
//   target: the element to search for
// Returns:
//   The index of the target element if found, -1 otherwise
int binarySearch(int arr[], int size, int target) {
    int left = 0;          // Leftmost index of the search range
    int right = size - 1;   // Rightmost index of the search range

    // Continue the search as long as the left index is less than or equal to the right index
    while (left <= right) {
        int mid = left + (right - left) / 2;  // Calculate the middle index

        if (arr[mid] == target) {
            return mid;  // Target element found at the middle index
        } else if (arr[mid] < target) {
            left = mid + 1;  // Adjust the search range to the right half
        } else {
            right = mid - 1;  // Adjust the search range to the left half
        }
    }

    return -1;  // Target element not found
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter Elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Binary Search
    int BS = binarySearch(arr, size, target);

    // Display the result of binary search
    if (BS != -1) {
        printf("BS: Element found at index: %d", BS);
    } else {
        printf("BS: Element not found.");
    }
}

// by devender
