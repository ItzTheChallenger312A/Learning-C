Mã định dạng (Format Specifier) trong C là công cụ dùng để báo cho các hàm nhập/xuất như `printf` và `scanf` biết dữ liệu được xử lý thuộc **kiểu dữ liệu nào** và cần được **định dạng hiển thị ra sao**.

Dưới đây là bảng tổng hợp đầy đủ và chi tiết các mã định dạng phổ biến nhất trong C:

## 1. Bảng mã định dạng theo kiểu dữ liệu

| **Kiểu dữ liệu**       | **Mã định dạng** | **Mô tả / Ví dụ**                                                                            |
| ---------------------- | ---------------- | -------------------------------------------------------------------------------------------- |
| **`int`**              | `%d` hoặc `%i`   | Số nguyên có dấu (định dạng cơ số 10)                                                        |
| **`unsigned int`**     | `%u`             | Số nguyên không dấu                                                                          |
| **`short`**            | `%hd`            | Số nguyên ngắn (short integer)                                                               |
| **`long`**             | `%ld`            | Số nguyên dài (long integer)                                                                 |
| **`long long`**        | `%lld`           | Số nguyên rất dài (64-bit)                                                                   |
| **`float`**            | `%f`             | Số thực dấu phẩy động (đơn)                                                                  |
| **`double`**           | `%lf`            | Số thực độ chính xác kép (dùng `%f` hoặc `%lf` trong `printf`, bắt buộc `%lf` trong `scanf`) |
| **`char`**             | `%c`             | Ký tự đơn                                                                                    |
| **`char[]` / `char*`** | `%s`             | Chuỗi ký tự (String)                                                                         |
| **`void*`**            | `%p`             | Địa chỉ ô nhớ (Con trỏ - Pointer)                                                            |
| **Hex / Octal**        | `%x` / `%X`      | Số hệ cơ số 16 (Hexadecimal - in chữ thường/hoa)                                             |
| **Hex / Octal**        | `%o`             | Số hệ cơ số 8 (Octal)                                                                        |
| **Dạng mũ**            | `%e` / `%E`      | In số thực dưới dạng ký hiệu khoa học ($1.23 \times 10^4$ $\rightarrow$ `1.23e+04`)          |
| **Dấu `%`**            | `%%`             | In ra chính ký tự `%`                                                                        |

## 2. Kỹ thuật căn chỉnh và định dạng số thực (`printf`)

Bạn có thể thêm các thông số vào giữa dấu `%` và chữ cái định dạng để tùy chỉnh cách in:
### A. Tùy chỉnh số chữ số thập phân (`%.nf`)

- `%.1f`: In ra 1 chữ số sau dấu phẩy.
    
- `%.2f`: In ra 2 chữ số sau dấu phẩy (tự động làm tròn).
    

``` C
float pi = 3.141592;
printf("%.2f\n", pi); // Kết quả: 3.14
printf("%.4f\n", pi); // Kết quả: 3.1416
```

### B. Độ rộng khoảng in (Width & Alignment)

- `%5d`: Dành tối thiểu 5 ô khoảng trống để in số (căn phải).
    
- `%-5d`: Dành 5 ô khoảng trống (căn trái).
    
- `%05d`: Dành 5 ô khoảng trống, nếu thừa thì điền thêm các số `0` ở trước.


``` C
int n = 42;
printf("[%5d]\n", n);  // Kết quả: [   42]
printf("[%-5d]\n", n); // Kết quả: [42   ]
printf("[%05d]\n", n); // Kết quả: [00042]
```

## 3. Ví dụ tổng hợp trong C

``` C
#include <stdio.h>

int main() {
    int age = 20;
    double gpa = 3.658;
    char grade = 'A';
    char name[] = "Lập trình C";

    printf("Tên môn: %s\n", name);
    printf("Tuổi: %d | Xếp loại: %c\n", age, grade);
    printf("Điểm GPA (làm tròn 2 chữ số): %.2lf\n", gpa);
    printf("Địa chỉ ô nhớ của 'age': %p\n", (void*)&age);
    printf("Số 255 ở dạng Hex: %X\n", 255); // Out: FF

    return 0;
}
```

## 4. Lưu ý quan trọng khi dùng với `scanf`

- **`float` vs `double`:** Trong `printf`, cả `%f` và `%lf` đều dùng được cho `double`. Tuy nhiên trong `scanf`, **bắt buộc** phải dùng `%f` cho `float` và `%lf` cho `double`.
    
- **Khoảng trắng trước `%c` trong `scanf`:** Khi nhập ký tự, nên dùng `scanf(" %c", &ch);` (có khoảng trắng trước `%c`) để bỏ qua ký tự xuống dòng `\n` còn sót lại trong bộ đệm phím từ lần nhập trước.