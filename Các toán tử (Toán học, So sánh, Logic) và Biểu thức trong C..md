Toán tử (Operators) là các ký hiệu dùng để thực hiện các phép toán trên biến và giá trị. Trong C, toán tử được chia làm 3 nhóm chính cùng với một số quy tắc quan trọng về ép kiểu và thứ tự ưu tiên.

## 1. Khái niệm then chốt

### A. Các nhóm toán tử chính

- **Toán tử toán học (Arithmetic):** `+`, `-`, `*`, `/`, `%` (chia lấy dư, chỉ dùng cho số nguyên), `++` (tăng 1), `--` (giảm 1).
    
- **Toán tử so sánh / Quan hệ (Relational):** `==` (bằng), `!=` (khác), `>`, `<`, `>=`, `<=`. Kết quả trả về `1` (Đúng / True) hoặc `0` (Sai / False).
    
- **Toán tử Logic:**
    
    - `&&` (AND): Đúng khi **cả hai** điều kiện đều đúng.
        
    - `||` (OR): Đúng khi **ít nhất một** điều kiện đúng.
        
    - `!` (NOT): Phủ định (đảo ngược True thành False và ngược lại).
        
- **Toán tử gán kết hợp (Compound Assignment):** `+=`, `-=`, `*=`, `/=`, `%=` (Ví dụ: `x += 5` tương đương `x = x + 5`).
    

### B. Ép kiểu (Type Casting)

Khi thực hiện phép chia 2 số nguyên, C sẽ thực hiện **chia nguyên** (bỏ phần thập phân). Nếu muốn lấy kết quả số thực, ta cần ép kiểu:

- `int a = 5, b = 2;`
    
- `float c = (float)a / b;` $\rightarrow$ Kết quả là `2.5` (nếu không ép kiểu `(float)` sẽ ra `2.0`).
    

## 2. Ví dụ minh họa & Giải thích

``` C
#include <stdio.h>

int main() {
    int a = 10, b = 3;
    
    // 1. Phép chia số nguyên và ép kiểu
    printf("Chia nguyên: %d / %d = %d\n", a, b, a / b);       // Kết quả: 3
    printf("Chia lấy dư: %d %% %d = %d\n", a, b, a % b);       // Kết quả: 1
    printf("Chia thực: %.2f\n", (float)a / b);                // Kết quả: 3.33

    // 2. Toán tử so sánh và Logic
    int age = 20;
    int has_license = 1; // 1: Có bằng lái, 0: Không có

    // Điều kiện: Tuổi từ 18 trở lên VÀ có bằng lái
    if (age >= 18 && has_license == 1) {
        printf("Được phép lái xe!\n");
    }

    // 3. Tiền tố (Prefix) vs Hậu tố (Postfix)
    int x = 5;
    int y = x++; // Gán y = x (5), sau đó x mới tăng lên 6
    int z = ++x; // x tăng lên 7 trước, sau đó gán z = x (7)
    
    printf("x = %d, y = %d, z = %d\n", x, y, z); // x=7, y=5, z=7

    return 0;
}
```

## 3. Lưu ý & Lỗi thường gặp

- **Nhầm lẫn giữa `=` và `==`:**
    
    - `=` là phép gán (gán giá trị vế phải cho vế trái).
        
    - `==` là phép so sánh bằng.
        
    - _Lỗi điển hình:_ Viết `if (x = 5)` thay vì `if (x == 5)` sẽ làm cho điều kiện luôn đúng và gán $x = 5$.
        
- **Chia cho 0 (Division by zero):** Thực hiện `a / 0` hoặc `a % 0` sẽ gây ra lỗi gãy chương trình (Crash / Runtime Error).  
    
- **Toán tử `%` không dùng cho `float`/`double`:** Phép chia lấy dư `%` bắt buộc cả 2 toán hạng phải là số nguyên (`int`, `char`, `long`...).
    
- **Thứ tự ưu tiên toán tử:** Nhân/chia (`*`, `/`, `%`) thực hiện trước, Cộng/trừ (`+`, `-`) thực hiện sau. Các toán tử so sánh thực hiện trước toán tử logic (`&&`, `||`). Khi nghi ngờ, hãy dùng dấu ngoặc đơn `()` để cố định thứ tự tính toán.

## 4. Bài tập nhỏ cho bạn

1. **Dự đoán kết quả:** Không chạy code, hãy đoán giá trị của `res` trong đoạn mã sau:
    
    ``` C
    int a = 8, b = 3;
    int res = (a > 5) && (b++ == 3);
    ```
    
    _Sau phép tính trên, `res` bằng bao nhiêu và `b` bằng bao nhiêu?_
    
2. **Viết chương trình:** Nhập vào một số nguyên $N$ từ bàn phím. In ra `1` nếu $N$ là **số chẵn dương** (vừa chia hết cho 2 vừa lớn hơn 0), ngược lại in ra `0`.