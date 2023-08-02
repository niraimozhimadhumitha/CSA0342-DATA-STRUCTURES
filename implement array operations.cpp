#include <stdio.h>
#define MAX_SIZE 100
int insert(int arr[], int size, int index, int value) {
    if (size >= MAX_SIZE || index < 0 || index > size)
        return size;
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }   
    arr[index] = value;
    return size + 1;
}
int deleteElement(int arr[], int size, int index) {
    if (size <= 0 || index < 0 || index >= size)
        return size; 
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }   
    return size - 1;
}
int display(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5;
    display(arr, size);
    size = insert(arr, size, 2, 10);
    display(arr, size);
    size = deleteElement(arr, size, 3);
    display(arr, size);
    return 0;
}
