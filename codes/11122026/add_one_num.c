// cho một danh sách gồm n số nguyên gồm a1, a2, a3, ..., an và 1 số nguyên v.
// Hãy chèn thêm giá trị v ở vị trí p và in danh sách.
// Input: line 1: n, p, v (constraints: 1 <= n <= 10^3, 1 <= p <=+1 n, 0 <= ai,v
// <= 10^9)

#include <stdio.h>
int main() {
  int n, p, v;
  scanf("%d %d %d", &n, &p, &v);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("%d\n", v);

  return 0;
}