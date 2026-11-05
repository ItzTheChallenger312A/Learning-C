Con trỏ (Pointer) là "đặc sản" và cũng là công cụ mạnh mẽ nhất của ngôn ngữ C. Nó cho phép bạn thao tác trực tiếp với địa chỉ ô nhớ RAM, tối ưu hiệu năng và quản lý bộ nhớ động (Dynamic Memory Allocation).
## 1. Khái niệm then chốt

### A. Con trỏ (Pointer)

- **Địa chỉ ô nhớ (Memory Address):** Mỗi biến trong bộ nhớ đều nằm tại một địa chỉ nhất định (ví dụ: `0x7ffd...`). Lấy địa chỉ bằng toán tử `&`.
- **Biến con trỏ:** Là biến dùng để **lưu trữ địa chỉ ô nhớ** của một biến khác  
    - Khai báo: `int *ptr;` (con trỏ `ptr` trỏ tới ô nhớ kiểu `int`).

- **Toán tử giải tham chiếu (Dereference Operator `*`):** Dùng để lấy hoặc thay đổi **giá trị** tại ô nhớ mà con trỏ đang trỏ tới.

- **Truyền tham chiếu (Pass by Reference):** Truyền địa chỉ của biến vào hàm bằng con trỏ, cho phép hàm **thay đổi trực tiếp giá trị của biến gốc**.

### B. Cấp phát bộ nhớ động (Dynamic Memory Allocation)

Dùng khi bạn **chưa biết trước kích thước mảng** lúc viết code và cần xin cấp phát bộ nhớ trên vùng nhớ **Heap** khi chương trình đang chạy (thư viện `<stdlib.h>`):

- `malloc(size)`: Cấp phát vùng nhớ chưa xóa dữ liệu cũ (chứa giá trị rác).

- `calloc(n, size)`: Cấp phát vùng nhớ và tự động xóa toàn bộ dữ liệu về `0`.

- `realloc(ptr, new_size)`: Thay đổi kích thước vùng nhớ đã cấp phát.

- `free(ptr)`: **Giải phóng vùng nhớ** sau khi dùng xong (bắt buộc để tránh rò rỉ bộ nhớ - Memory Leak).

## 2. Ví dụ minh họa & Giải thích

```C
#include <stdio.h>
#include <stdlib.h>

// Hàm hoán đổi 2 số dùng con trỏ (Pass by Reference)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // 1. Cơ bản về Con trỏ
    int x = 10, y = 20;
    int *ptr = &x; // ptr lưu địa chỉ của x

    printf("Giá trị của x: %d\n", x);
    printf("Địa chỉ ô nhớ của x: %p\n", (void*)&x);
    printf("Giá trị con trỏ ptr đang giữ: %p\n", (void*)ptr);
    printf("Giá trị tại ô nhớ con trỏ trỏ tới (*ptr): %d\n", *ptr);

    // Hoán đổi x và y bằng hàm dùng con trỏ
    swap(&x, &y);
    printf("Sau khi swap: x = %d, y = %d\n\n", x, y);

    // 2. Cấp phát bộ nhớ động (Dynamic Memory)
    int n = 5;
    int *arr = (int*) malloc(n * sizeof(int)); // Xin cấp phát mảng 5 số nguyên

    // Kiểm tra xem máy tính có cấp phát thành công không
    if (arr == NULL) {
        printf("Lỗi: Không đủ bộ nhớ!\n");
        return 1;
    }

    // Gán giá trị và in
    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
        printf("%d ", arr[i]);
    }
    printf("\n");

    // GIẢI PHÓNG BỘ NHỚ (Bắt buộc)
    free(arr);
    arr = NULL; // Tránh con trỏ hoang (Dangling Pointer)

    return 0;
}
```

## 3. Lưu ý & Lỗi thường gặp

- **Lỗi rò rỉ bộ nhớ (Memory Leak):** Dùng `malloc`/`calloc` xin cấp phát nhưng quên gọi `free()` trước khi kết thúc chương trình. Bộ nhớ RAM bị chiếm dụng vô ích.
    
- **Con trỏ hoang (Dangling / Wild Pointer):**
      
    - Khai báo con trỏ nhưng không gán địa chỉ ban đầu (`int *p; *p = 5;` $\rightarrow$ Crash chương trình).
    - Đã `free(p)` nhưng vẫn tiếp tục dùng `*p`.
- **Giải phóng bộ nhớ 2 lần (Double Free):** Gọi `free(p)` 2 lần liên tiếp trên cùng một con trỏ chưa gán về `NULL`.
    
- **Phân biệt `*ptr` và `ptr`:**
      
    - `ptr` là **địa chỉ**.
    - `*ptr` là **giá trị tại địa chỉ đó**.
## 4. Bài tập nhỏ cho bạn

1. **Dự đoán kết quả:** Màn hình sẽ in ra giá trị nào của `a` và `b`?
	
    ```C
    int a = 5;
    int *p = &a;
    *p = 20;
    printf("%d", a);
    ```
    
2. **Viết chương trình:** Nhập số nguyên $N$ từ bàn phím. Dùng `malloc` hoặc `calloc` để cấp phát bộ nhớ động cho mảng $N$ số nguyên, nhập giá trị các phần tử, tìm phần tử lớn nhất (Max), sau đó **giải phóng bộ nhớ** bằng `free`.