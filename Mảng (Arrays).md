Mảng (Array) cho phép lưu trữ một tập hợp các phần tử cùng kiểu dữ liệu liên tiếp nhau trong bộ nhớ RAM. Chuỗi ký tự (String) trong C thực chất là một mảng các ký tự (`char`) kết thúc bằng ký tự đặc biệt `'\0'`.

  ![[Pasted image 20261105132649.png]]

## 1. Khái niệm then chốt

### A. Mảng 1 chiều (1D Array)

- **Chỉ số (Index):** Đánh số từ `0` đến `N - 1` (với $N$ là số lượng phần tử).
    
- **Khai báo & Khởi tạo:** 
    - `int arr[5];` (Mảng chưa khởi tạo giá trị ban đầu, chứa rác bộ nhớ).  
        
    - `int arr[5] = {1, 2, 3, 4, 5};` (Khởi tạo sẵn 5 phần tử).

### B. Chuỗi ký tự (String / Char Array)

- **Ký tự kết thúc `'\0'` (Null Character):** Bắt buộc phải có để đánh dấu điểm kết thúc của chuỗi. Do đó, mảng `char` cần khai báo độ dài dư ít nhất 1 ô nhớ.

- **Thư viện `<string.h>`:** Cung cấp các hàm xử lý chuỗi phổ biến
    - `strlen(s)`: Lấy độ dài chuỗi (không tính `'\0'`).
        
    - `strcpy(dest, src)`: Sao chép chuỗi `src` sang `dest`.
        
    - `strcmp(s1, s2)`: So sánh 2 chuỗi (trả về 0 nếu 2 chuỗi giống hệt nhau).
        
    - `strcat(dest, src)`: Nối chuỗi `src` vào cuối chuỗi `dest`.
        
## 2. Ví dụ minh họa & Giải thích

```C
#include <stdio.h>
#include <string.h>

int main() {
    // 1. Thao tác với Mảng 1 chiều số nguyên
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    printf("Các phần tử trong mảng: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
        sum += numbers[i];
    }
    printf("\nTổng các phần tử = %d\n", sum);

    // 2. Thao tác với Chuỗi ký tự
    char str1[50] = "Lap trinh C";
    char str2[50];

    // Nhập chuỗi có khoảng trắng bằng fgets (An toàn hơn scanf)
    printf("\nNhập tên của bạn: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Xóa ký tự xuống dòng '\n' do fgets giữ lại nếu có
    str2[strcspn(str2, "\n")] = '\0';

    printf("Độ dài chuỗi str1: %lu\n", strlen(str1));
    printf("Xin chào: %s!\n", str2);

    return 0;
}
```

## 3. Lưu ý & Lỗi thường gặp

- **Tràn mảng (Out of Bounds / Buffer Overflow):** Truy cập vào chỉ số vượt quá phạm vi khai báo (ví dụ mảng có 5 phần tử nhưng truy cập `arr[5]` hoặc `arr[10]`). C không tự kiểm tra lỗi này, gây ra ghi đè ô nhớ khác hoặc ngắt chương trình.

- **Nhầm lẫn giữa `scanf("%s", s)` và `fgets(...)`:** `scanf("%s")` dừng đọc khi gặp khoảng trắng. Để đọc dòng chữ có khoảng trắng (như họ và tên), nên dùng `fgets`.

- **Quên kích thước cho `'\0'`:** Khai báo `char name[5] = "Hello";` là lỗi, vì `"Hello"` cần 6 ô nhớ (5 ký tự + 1 ký tự `'\0'`).

- **So sánh chuỗi bằng `==`:** Dùng `if (str1 == str2)` là so sánh địa chỉ ô nhớ chứ không phải so sánh nội dung chuỗi. Phải dùng `strcmp(str1, str2) == 0`.


## 4. Bài tập nhỏ cho bạn

1. **Tính trung bình cộng:** Viết chương trình nhập vào mảng gồm $N$ số nguyên ($N \le 100$). Tính và in ra giá trị trung bình cộng của các phần tử trong mảng.

2. **Đếm ký tự:** Viết chương trình nhập một chuỗi ký tự từ bàn phím. Đếm và in ra số lượng ký tự `'a'` (hoặc `'A'`) xuất hiện trong chuỗi đó.