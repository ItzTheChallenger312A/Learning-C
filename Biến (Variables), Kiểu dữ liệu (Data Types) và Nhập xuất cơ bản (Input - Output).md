## 1. Khái niệm then chốt

- **Biến (Variable):** Một vùng nhớ được đặt tên dùng để lưu trữ dữ liệu. Dữ liệu này có thể thay đổi trong quá trình chương trình chạy.
    
- **Các kiểu dữ liệu cơ bản:**
      
    - `int`: Số nguyên (ví dụ: `10`, `-5`).
        
    - `float` / `double`: Số thực, số có dấu phẩy (ví dụ: `3.14`, `-0.01`).
        
          
    - `char`: Ký tự đơn, đặt trong dấu nháy đơn (ví dụ: `'A'`, `'z'`).
        
- **[[Mã định dạng (Format Specifiers)]]:** Dùng trong `printf` và `scanf` để chỉ định kiểu dữ liệu muốn in hoặc nhập.
      
    - `%d`: Cho số nguyên (`int`).
        
    - `%f`: Cho số thực (`float`).
        
    - `%c`: Cho ký tự (`char`).
        

## 2. Ví dụ minh họa & Giải thích

Ví dụ về việc khai báo biến, nhận dữ liệu từ bàn phím bằng `scanf` và in kết quả ra màn hình với `printf`:

``` C
#include <stdio.h>

int main() {
    int tuổi;
    float chiều_cao;

    // Nhập dữ liệu
    printf("Nhập tuổi của bạn: ");
    scanf("%d", &tuổi);

    printf("Nhập chiều cao (m): ");
    scanf("%f", &chiều_cao);

    // Xuất dữ liệu
    printf("\n--- Thông tin đã nhập ---\n");
    printf("Tuổi: %d\n", tuổi);
    printf("Chiều cao: %.2f m\n", chiều_cao); // %.2f để lấy 2 chữ số sau dấu phẩy

    return 0;
}
```

**Giải thích chi tiết:**

- `scanf("%d", &tuổi);`: Hàm đọc dữ liệu từ bàn phím.
    
    - `%d`: Báo cho chương trình biết giá trị nhập vào là số nguyên.
        
    - `&tuổi`: Dấu `&` (address-of operator) đại diện cho **địa chỉ ô nhớ** của biến. Bắt buộc phải có `&` trước tên biến khi xài `scanf` (trừ một số ngoại lệ sau này như chuỗi/array).
          
- `%.2f`: In số thực và làm tròn đến 2 chữ số phần thập phân.
## 3. Lưu ý & Lỗi thường gặp

- **Quên dấu `&` trong `scanf`:** Đây là lỗi kinh điển khiến chương trình bị treo hoặc dừng đột ngột (Segmentation Fault / Runtime Error).
    
- **Sai mã định dạng:** Dùng `%d` cho `float` hoặc `%f` cho `int` sẽ làm kết quả in ra bị sai rác dữ liệu.
    
- **Đặt tên biến không hợp lệ:** Tên biến không được chứa khoảng trắng, không bắt đầu bằng số, và không trùng với các từ khóa của C (như `int`, `return`, `main`...).
    
- **Khởi tạo biến:** Nên gán giá trị ban đầu cho biến trước khi tính toán, tránh việc biến mang giá trị "rác" còn sót lại trên RAM.
    

## 4. Bài tập nhỏ cho bạn

1. **Tính diện tích hình chữ nhật:** Viết chương trình khai báo 2 biến số thực `chieu_dai` và `chieu_rong`. Nhập giá trị cho 2 biến này từ bàn phím, sau đó tính và in ra diện tích với 2 chữ số thập phân.
    
2. **Sửa lỗi:** Đoạn code dưới đây bị sai ở đâu? Hãy tìm và sửa lại cho đúng:
    
    ```C
    int main() {
        int a;
        scanf("%f", a);
        printf("Gia tri a la: %d", a);
        return 0;
    }
    ```