#include <stdbool.h>
#include <stdio.h>

int main() {
  bool arr[3] = {true, false, true};
  for (int i = 0; i < 3; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
