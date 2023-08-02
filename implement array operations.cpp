#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int array[MAX_SIZE];
    int n, pos, value;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
}
    printf("Enter the position where the element should be inserted: ");
    scanf("%d", &pos);
    
    switch (pos) {
        case 1:
            for (int i = n - 1; i >= 0; i--) {
                array[i + 1] = array[i];
            }
            printf("Enter the value of the new element: ");
            scanf("%d", &value);
            array[0] = value;
            n++;
            printf("Element inserted successfully.\n");
            break;
        
        case 2:
            printf("Enter the value of the new element: ");
            scanf("%d", &value);
            array[n] = value;
            
            n++;
            
            printf("Element inserted successfully.\n");
            break;
        
        default:
            if (pos >= 3 && pos <= n + 1) {
                for (int i = n - 1; i >= pos - 1; i--) {
                    array[i + 1] = array[i];
                }
                printf("Enter the value of the new element: ");
                scanf("%d", &value);
                array[pos - 1] = value;
                n++;
                
                printf("Element inserted successfully.\n");
            } else {
                printf("Invalid position.\n");
            }
            break;
    }
    
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}
#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int array[MAX_SIZE];
    int n, pos;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);
    
    switch (pos) {
        case 1:
            for (int i = 0; i < n - 1; i++) {
                array[i] = array[i + 1];
            }
            n--;
            
            printf("Element deleted successfully.\n");
            break;
        
        case 2:
             the size of the array
            n--;
            
            printf("Element deleted successfully.\n");
            break;
        
        default:
            if (pos >= 3 && pos <= n) {
                for (int i = pos - 1; i < n - 1; i++) {
                    array[i] = array[i + 1];
            }
                n--;           
                printf("Element deleted successfully.\n");
            } else {
                printf("Invalid position.\n");
            }
            break;
    }
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

