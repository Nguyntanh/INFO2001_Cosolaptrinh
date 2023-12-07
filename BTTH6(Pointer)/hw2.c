#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int* a;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Unable to allocate memory.\n");
        return 1;
    }
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    free(a);
    return 0;
}