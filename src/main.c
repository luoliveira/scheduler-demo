#include <stdio.h>

int main() {
  int a[5];
  int n;
  int i, flag;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (i=0; i<n; i++) {
  	flag = 1;
    if ((i+1) % a[0] == 0) {
      printf ("0");
      flag = 0;
    }
    if ((i+1) % a[1] == 0) {
      printf ("1");
      flag = 0;
    }
    if ((i+1) % a[2] == 0) {
      printf ("2");
      flag = 0;
    }
    if ((i+1) % a[3] == 0) {
      printf ("3");
      flag = 0;
    }
    if ((i+1) % a[4] == 0) {
      printf ("4");
      flag = 0;
    }
    if (flag) printf("-");
    printf("\n");
  }

  return 0;
}
