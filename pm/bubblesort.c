#include <stdio.h>

void bsort(int arr[], int len) {
  int cache;
  int swapped; //removable
  for (int max = 1; max<len-1; max++) {
    swapped = 0; //removable
    for (int i = 0; i < len - max; i++) {
      if (arr[i] > arr[i+1]) {
        swapped = 1; //removable
        cache = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = cache;
        printf("swapped %d and %d\n", arr[i], arr[i+1]); //removable
      }
    }
    if (swapped == 1) { //removable
      printf("UPDATED:\n{");
      for (int i = 0; i<len; i++) {
        printf("%d, ", arr[i]);
      }
      printf("}\n");
    }
  }
}

int main(void)
{
  int arr[] = {7, 3, 2, 6, 0, 4};
  int length = (sizeof arr / sizeof arr[0]);
  bsort(arr, length);
  return 0;
}
