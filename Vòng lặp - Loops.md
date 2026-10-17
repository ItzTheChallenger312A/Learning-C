Vòng lặp (Loops) giúp bạn thực thi một khối lệnh lặp đi lặp lại nhiều lần cho đến khi một điều kiện dừng được thỏa mãn. Đây là một trong những công cụ quan trọng nhất để xử lý danh sách, duyệt mảng hay tự động hóa công việc.

## 1. Khái niệm then chốt

C hỗ trợ **3 loại vòng lặp chính** cùng với **2 lệnh điều khiển luồng**:

### A. 3 Loại vòng lặp

- **Vòng lặp `for`:** Dùng khi **biết trước số lần lặp**.
    
      
    - Cú pháp: `for (khởi_tạo; điều_kiện; bước_nhảy)`
        
          
        
- **Vòng lặp `while`:** Dùng khi **chưa biết trước số lần lặp**, kiểm tra điều kiện _trước_ khi thực thi. Nếu điều kiện sai ngay từ đầu, khối lệnh sẽ không chạy lần nào.
    
      
    - Cú pháp: `while (điều_kiện)`
        
          
        
- **Vòng lặp `do-while`:** Kiểm tra điều kiện _sau_ khi thực thi. Khối lệnh **luôn chạy ít nhất 1 lần**, dù điều kiện đúng hay sai.
    
      
    - Cú pháp: `do { ... } while (điều_kiện);` _(Lưu ý: Có dấu `;` ở cuối)_
        

### B. Lệnh điều khiển luồng

- **`break`:** Thoát khỏi vòng lặp ngay lập tức (bỏ qua các lần lặp còn lại).
    
- **`continue`:** Bỏ qua phần còn lại của _lần lặp hiện tại_ và nhảy ngay sang lần lặp tiếp theo.
    

## 2. Ví dụ minh họa & Giải thích


### A. So sánh 3 dạng vòng lặp (In các số từ 1 đến 5)


```C
#include <stdio.h>

int main() {
    // 1. Vòng lặp for
    printf("Vòng lặp for: ");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // 2. Vòng lặp while
    printf("Vòng lặp while: ");
    int j = 1;
    while (j <= 5) {
        printf("%d ", j);
        j++; // Bắt buộc phải tăng j để tránh lặp vô tận
    }
    printf("\n");

    // 3. Vòng lặp do-while (Ví dụ: Nhập số nguyên dương)
    int n;
    do {
        printf("Nhập một số > 0: ");
        scanf("%d", &n);
    } while (n <= 0); // Lặp lại nếu người dùng nhập số <= 0

    printf("Số hợp lệ bạn đã nhập là: %d\n", n);

    return 0;
}
```

### B. Minh họa `break` và `continue`


```C
#include <stdio.h>

int main() {
    printf("Minh họa continue (Bỏ qua số 3):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Bỏ qua i = 3, nhảy sang i = 4
        }
        printf("%d ", i); // In ra: 1 2 4 5
    }

    printf("\n\nMinh họa break (Dừng khi gặp số 3):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break; // Thoát hẳn khỏi vòng lặp
        }
        printf("%d ", i); // In ra: 1 2
    }
    printf("\n");

    return 0;
}
```

## 3. Lưu ý & Lỗi thường gặp

- **Vòng lặp vô tận (Infinite Loop):** Quên cập nhật biến đếm (như quên `i++` trong `while`) hoặc điều kiện dừng luôn luôn đúng (`while (1)`).
    
- **Lỗi Off-by-one (Lặp thừa/thiếu 1 lần):** Nhầm lẫn giữa `<` và `<=` hoặc `>` và `>=`.  
    - `for (int i = 0; i < 5; i++)` $\rightarrow$ Chạy 5 lần (`0, 1, 2, 3, 4`).  
        
    - `for (int i = 0; i <= 5; i++)` $\rightarrow$ Chạy 6 lần (`0, 1, 2, 3, 4, 5`).

- **Quên dấu `;` ở cuối `do-while`:** Cấu trúc `do { ... } while (điều_kiện);` bắt buộc có dấu chấm phẩy ở cuối câu lệnh `while`.

- **Đặt dấu `;` thừa ngay sau câu lệnh lặp:**
      
    - _Lỗi:_ `for (int i = 0; i < 5; i++);` $\rightarrow$ Dấu `;` làm vòng lặp rỗng, khối lệnh bên dưới sẽ không còn thuộc vòng lặp nữa!
        


## 4. Bài tập nhỏ cho bạn

1. **Dự đoán kết quả:** Màn hình sẽ in ra những số nào khi chạy đoạn mã sau
    
    ```C
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) continue;
        if (i > 6) break;
        printf("%d ", i);
    }
    ```
    
2. **Viết chương trình:** Nhập vào số nguyên $N$ từ bàn phím ($N > 0$). Sử dụng vòng lặp `for` hoặc `while` để tính tổng các số từ 1 đến $N$:
    $$S = 1 + 2 + 3 + \dots + N$$