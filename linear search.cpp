#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 5
void linear_search(int[], int);
int main() {
  int arr_search[MAX_SIZE], i, element;
  printf("Simple Linear Search Example - Array and Functions\n");
  printf("\nEnter %d Elements for Searching : \n", MAX_SIZE);
  for (i = 0; i < MAX_SIZE; i++)
    scanf("%d", &arr_search[i]);

  printf("Enter Element to Search : ");
  scanf("%d", &element);
  linear_search(arr_search, element);
  getch();
}
void linear_search(int fn_arr[], int element) {
  int i;
  for (i = 0; i < MAX_SIZE; i++) {
    if (fn_arr[i] == element) {
      printf("Linear Search : %d is Found at array : %d.\n", element, i + 1);
      break;
    }
  }
  if (i == MAX_SIZE)
    printf("\nSearch Element : %d  : Not Found \n", element);
}
