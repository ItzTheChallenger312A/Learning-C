Hàm (Function) giúp chia nhỏ chương trình thành các khối mã độc lập, dễ quản lý, tái sử dụng và bảo trì. Trong C, hàm là thành phần cốt lõi để xây dựng cấu trúc chương trình chuyên nghiệp.
## 1. Khái niệm then chốt

### A. Cấu trúc và thành phần của Hàm

- **Khai báo hàm (Function Prototype):** Khai báo tên hàm, kiểu trả về và tham số trước khi hàm `main` sử dụng, giúp trình biên dịch biết sự tồn tại của hàm.

- **Kiểu trả về (Return Type):** Kiểu dữ liệu của giá trị mà hàm trả về (`int`, `float`, `char`...). Nếu hàm không trả về giá trị, dùng kiểu `void`.

- **Tham số (Parameters / Arguments):** Dữ liệu truyền vào hàm để xử lý. 
    - _Truyền tham trị (Pass by Value):_ Giá trị của biến được sao chép vào hàm. Mọi thay đổi bên trong hàm **không ảnh hưởng** đến biến gốc ở ngoài.

### B. Phạm vi của biến (Scope)

- **Biến cục bộ (Local Variables):** Được khai báo bên trong một hàm hoặc khối lệnh `{}`. Chỉ có thể truy cập và sử dụng trong nội bộ hàm/khối lệnh đó. Biến bị giải phóng khỏi bộ nhớ khi hàm kết thúc.

- **Biến toàn cục (Global Variables):** Được khai báo bên ngoài tất cả các hàm (thường ở đầu file). Tất cả các hàm trong file đều có thể truy cập và chỉnh sửa biến này.

## 2. Ví dụ minh họa & Giải thích

```C
#include <stdio.h>

// 1. Khai báo prototype (Nguyên mẫu hàm)
int tinh_tong(int a, int b);
void xin_chao(char ten[]);

// Biến toàn cục
int g_dem = 0; 

int main() {
    int x = 5, y = 7;

    // Gọi hàm không trả về giá trị
    xin_chao("Nam");

    // Gọi hàm có trả về giá trị
    int tong = tinh_tong(x, y);
    printf("Tổng của %d và %d là: %d\n", x, y, tong);

    printf("Số lần gọi hàm đã đếm (biến toàn cục): %d\n", g_dem);

    return 0;
}

// 2. Định nghĩa hàm tinh_tong
int tinh_tong(int a, int b) {
    g_dem++; // Thay đổi biến toàn cục
    return a + b; // Trả về kết quả
}

// 3. Định nghĩa hàm xin_chao (Kiểu void)
void xin_chao(char ten[]) {
    g_dem++;
    printf("Xin chào, %s!\n", ten);
    // Không cần câu lệnh return (hoặc chỉ dùng 'return;' để thoát hàm)
}
```

## 3. Lưu ý & Lỗi thường gặp

- **Quên Khai báo Prototype:** Nếu định nghĩa hàm bên dưới hàm `main` mà không khai báo prototype ở trên, trình biên dịch sẽ cảnh báo hoặc báo lỗi `implicit declaration of function`.

- **Sai kiểu trả về / Nhầm lẫn `void`:** Hàm có kiểu trả về (như `int`) bắt buộc phải có câu lệnh `return <giá_trị>`. Ngược lại, hàm `void` không được `return` một giá trị nào cả.

- **Hiểu sai về Truyền tham trị (Pass by Value):**

    ```C
    void tang_gia_tri(int n) {
        n = n + 1; // Chỉ tăng bản sao 'n' bên trong hàm
    }
    // Ở main: int x = 5; tang_gia_tri(x); -> x vẫn giữ nguyên bằng 5!
    ```
    _(Để làm thay đổi biến gốc `x`, chúng ta sẽ dùng Con trỏ (Pointer) ở các Section sau)._

- **Lạm dụng biến toàn cục (Global Variables):** Dùng quá nhiều biến toàn cục khiến mã nguồn khó kiểm soát vì bất kỳ hàm nào cũng có thể vô tình làm thay đổi giá trị của nó.

## 4. Bài tập nhỏ cho bạn

1. **Dự đoán kết quả:** Màn hình sẽ in ra giá trị của `a` là bao nhiêu?
    ```C
    #include <stdio.h>
    
    void thay_doi(int a) {
        a = a * 2;
    }
    
    int main() {
        int a = 10;
        thay_doi(a);
        printf("%d", a);
        return 0;
    }
    ```
    
2. **Viết hàm:** Viết một hàm tên `kiểm_tra_số_nguyên_tố(int n)` trả về `1` nếu $n$ là số nguyên tố, và trả về `0` nếu ngược lại. Sau đó gọi hàm này trong `main` để kiểm tra một số nhập từ bàn phím.