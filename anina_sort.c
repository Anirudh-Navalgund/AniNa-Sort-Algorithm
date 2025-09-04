#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// swap
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// shuffle
void shuffle(int arr[], int n, int start)
{
    for (int i = n - 1; i > start; i--) {
        int j = start + rand() % (i - start + 1);
        swap(&arr[i], &arr[j]);
    }
}

// anina sort
void anina_sort(int arr[], int n)
{
    int shuffle_count = 0;
    for (int pos = 0; pos < n; pos++) {
        int ref = arr[pos];

        while (1) {
            shuffle(arr, n, pos);
            shuffle_count++;

            printf("Shuffle %d: ", shuffle_count);
            for (int i = 0; i < n; i++)
                printf("%d ", arr[i]);
            printf("\n");

            if (arr[pos] < ref) {
                ref = arr[pos];
            }
            int true_min = arr[pos];
            for (int j = pos; j < n; j++) {
                if (arr[j] < true_min) true_min = arr[j];
            }
            if (arr[pos] == ref && ref == true_min) {
                break;
            }
        }
    }
}

int main()
{
    srand(time(NULL));

    int arr[] = {10, 4, 57, 32, 68, 15, 11, 28, 1, 91};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n\n");

    anina_sort(arr, n);

    printf("Sorted array:   ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
