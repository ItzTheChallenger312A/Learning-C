Cấu trúc `switch - case` là một dạng rẽ nhánh đa đường (multi-way branching). Thay vì viết nhiều câu lệnh `if - else if` liên tiếp để so sánh một biến với các giá trị khác nhau, `switch - case` giúp mã nguồn ngắn gọn, rõ ràng và dễ đọc hơn.

---

## 1. Khái niệm then chốt

* **Nguyên lý hoạt động:** `switch` lấy giá trị của một biểu thức số nguyên/ký tự và so sánh nó với từng nhãn `case`. Nếu khớp, khối lệnh tại `case` đó sẽ được thực thi.
* **Các thành phần chính:**
* `switch (biểu_thức)`: Biểu thức bắt buộc phải trả về kiểu **số nguyên** (`int`, `char`, `enum`).
* `case giá_trị:`: Nhãn so sánh. Giá trị ở `case` phải là **hằng số** hoặc **giá trị cố định** (không được là biến hay biểu thức logic chứa `>`, `<`).
* `break`: Lệnh dùng để **thoát khỏi `switch` ngay lập tức**. Nếu không có `break`, chương trình sẽ chạy tiếp tục xuống các `case` bên dưới bất kể đúng hay sai (hiện tượng **Fall-through**).
* `default`: Xử lý trường hợp khi biểu thức không trùng khớp với bất kỳ `case` nào (tương tự như `else` cuối cùng).



---

## 2. Cú pháp & Ví dụ minh họa

### A. Cú pháp chuẩn

```c
switch (biểu_thức_số_nguyên) {
    case giá_trị_1:
        // Khối lệnh 1
        break;
    case giá_trị_2:
        // Khối lệnh 2
        break;
    default:
        // Khối lệnh mặc định nếu không khớp case nào
        break;
}

```

### B. Ví dụ thực tế: Đọc số thứ tự trong tuần

```c
#include <stdio.h>

int main() {
    int day = 3;

    switch (day) {
        case 2:
            printf("Thứ Hai\n");
            break;
        case 3:
            printf("Thứ Ba\n");
            break;
        case 4:
            printf("Thứ Tư\n");
            break;
        case 5:
            printf("Thứ Năm\n");
            break;
        case 6:
            printf("Thứ Sáu\n");
            break;
        case 7:
            printf("Thứ Bảy\n");
            break;
        case 8:
            printf("Chủ Nhật\n");
            break;
        default:
            printf("Ngày nhập vào không hợp lệ (chỉ nhập từ 2-8)!\n");
            break;
    }

    return 0;
}

```

### C. Kỹ thuật gom nhóm `case` (Tận dụng Fall-through)

Nếu nhiều `case` có cùng một xử lý, bạn có thể gộp chúng lại bằng cách bỏ qua lệnh `break` ở các `case` trên:

```c
#include <stdio.h>

int main() {
    char ch = 'a';

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("'%c' là nguyên âm.\n", ch);
            break;
        default:
            printf("'%c' là phụ âm hoặc ký tự khác.\n", ch);
            break;
    }

    return 0;
}

```

---

## 3. Lưu ý & Lỗi thường gặp

* **Không dùng cho kiểu số thực (`float`, `double`):** `switch (3.14)` hay `case 2.5:` sẽ bị lỗi biên dịch.
* **Không truyền phạm vi/điều kiện vào `case`:** Không thể viết `case x > 5:` hay `case 1 ... 10:` (trong C tiêu chuẩn). Nếu cần so sánh khoảng hay điều kiện phức tạp, phải dùng `if - else`.
* **Thiếu `break` ngoài ý muốn:** Quên `break` là lỗi phổ biến nhất khiến chương trình tự động thực thi luôn các lệnh của `case` ngay sau đó.
* **Khai báo biến trực tiếp trong `case`:** Trong C, nếu bạn muốn khai báo một biến mới ngay bên trong một `case`, bạn phải bọc khối lệnh của `case` đó trong cặp ngoặc nhọn `{}`.

---

## 4. Bài tập nhỏ cho bạn

1. **Dự đoán kết quả:** Màn hình sẽ in ra gì khi chạy đoạn mã sau?
```c
int k = 2;
switch (k) {
    case 1: printf("Một ");
    case 2: printf("Hai ");
    case 3: printf("Ba ");
        break;
    default: printf("Khác ");
}

```


2. **Viết chương trình:** Nhập vào một tháng (từ 1 đến 12). Dùng `switch - case` (kỹ thuật gom nhóm) để in ra số ngày của tháng đó (Giả sử tháng 2 có 28 ngày).