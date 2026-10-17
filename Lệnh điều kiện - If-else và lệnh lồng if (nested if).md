Cấu trúc rẽ nhánh giúp chương trình đưa ra quyết định và thực thi các khối lệnh khác nhau tùy thuộc vào điều kiện đúng hay sai.
## 1. Khái niệm then chốt

- **Cấu trúc điều kiện cơ bản:**
    
    - `if`: Kiểm tra điều kiện đầu tiên.
        ![[Pasted image 20261001150219.png|424]]
    - `else if`: Kiểm tra các điều kiện tiếp theo nếu điều kiện trước đó Sai.
        ![[Pasted image 20261001145831.png]]
    - `else`: Trường hợp còn lại (khi tất cả các điều kiện trên đều Sai).
	    ![[Pasted image 20261001150105.png|425]]

- **Lệnh `if` lồng nhau (Nested `if`):** Đặt một câu lệnh `if` (hoặc `if-else`) vào **bên trong** một khối lệnh `if` khác. Kỹ thuật này dùng khi một quyết định phụ phụ thuộc vào kết quả của một quyết định chính trước đó.
    



## 2. Ví dụ minh họa & Giải thích

Ví dụ: Bài toán xét tuyển vào một câu lạc bộ (Yêu cầu: Tuổi $\ge 18$. Nếu đủ tuổi, xét tiếp điểm thi).

``` C
#include <stdio.h>

int main() {
    int age = 19;
    float score = 8.5;

    // 1. Cấu trúc if - else if - else dạng chuỗi
    printf("--- Kiem tra Diem ---\n");
    if (score >= 8.0) {
        printf("Hoc luc: Gioi\n");
    } else if (score >= 6.5) {
        printf("Hoc luc: Kha\n");
    } else {
        printf("Hoc luc: Trung binh / Yeu\n");
    }

    // 2. Cấu trúc if lồng nhau (Nested if)
    printf("\n--- Xet tuyen CLB ---\n");
    if (age >= 18) {
        printf("-> Du dieu kien ve tuoi.\n");
        
        // Lệnh if lồng bên trong
        if (score >= 7.0) {
            printf("-> CHUC MUNG: Ban da trung tuyen vao CLB!\n");
        } else {
            printf("-> RAT TIEC: Diem cua ban chua dat (yeu cau >= 7.0).\n");
        }

    } else {
        printf("-> RAT TIEC: Ban chua du 18 tuoi de tham gia.\n");
    }

    return 0;
}
```

## 3. Lưu ý & Lỗi thường gặp khi lồng lệnh `if`

- **Sự nhập nhằng của `else` (Dangling Else Problem):** Trình biên dịch luôn gắn lệnh `else` với lệnh `if` **gần nó nhất** chưa có `else`. Nếu không dùng ngoặc nhọn `{}` cẩn thận, luồng chạy sẽ bị sai so với ý đồ.
    
    - _Mẹo:_ Luôn dùng cặp ngoặc nhọn `{}` cho mọi khối lệnh `if` và `else`, kể cả khi chỉ có 1 dòng lệnh.
        
- **Lồng quá nhiều cấp:** Tránh lồng `if` quá 3-4 cấp vì sẽ khiến code cực kỳ khó đọc và dễ sót trường hợp. Trong nhiều trường hợp, ta có thể gộp điều kiện bằng toán tử logic `&&` thay vì lồng `if`.
      
    - _Cách lồng:_ `if (a) { if (b) { ... } }`
        

    - _Rút gọn tương đương:_ `if (a && b) { ... }`
        

## 4. Bài tập nhỏ cho bạn

1. **Tìm số lớn nhất trong 3 số:** Viết chương trình nhập vào 3 số nguyên $a, b, c$. Sử dụng **cấu trúc `if-else` lồng nhau** để tìm và in ra số lớn nhất.
    

2. **Chuyển đổi logic:** Hãy rút gọn đoạn code lồng nhau dưới đây thành một câu lệnh `if` duy nhất dùng toán tử `&&`:
    

    ``` C
    if (temperature > 30) {
        if (humidity > 80) {
            printf("Thoi tiet oi nong!\n");
        }
    }
    ```