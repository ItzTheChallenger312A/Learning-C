#include <stdio.h>
#include <stdlib.h>
int main() {
  int phuongAn = 0;

  for (int dung = 1; dung <= 20; dung++) {
    for (int nam = 1; nam <= 33; nam++) {
      int gia = 100 - dung - nam;
      if (gia > 0 && gia % 5 == 0) {
        if (dung * 5 + nam * 3 + gia / 5 == 100) {
          phuongAn++;
          printf("Phuong an %d:\n", phuongAn);
          printf("  - Trau dung: %2d con (an %2d bo)\n", dung, dung * 5);
          printf("  - Trau nam:  %2d con (an %2d bo)\n", nam, nam * 3);
          printf("  - Trau gia:  %2d con (an %2d bo)\n", gia, gia / 5);
          printf("  -> Tong: %2d con trau, %2d bo co\n", dung + nam + gia,
                 dung * 5 + nam * 3 + gia / 5);
        }
      }
    }
  }

  if (phuongAn == 0) {
    printf("Khong tim thay phuong an phu hop.\n");
  }
  system("pause");
  return 0;
}