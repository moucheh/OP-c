#include <stdio.h>
#include <assert.h>
int maxNum(int* array, int size) {
  assert(size > 0);
  assert(array!=NULL);
  int max = array[0];
  for (int i = 1; i < size; ++i) {
    if (max < array[i]) {
      max = array[i];
    }
  }
  return max;
}

int main(void)
{
  int size=7;
  int array[30] = {4,7,2,11,9,3,8};
  printf("Max num: %d\n", maxNum(array, size));
  return 0;
}
