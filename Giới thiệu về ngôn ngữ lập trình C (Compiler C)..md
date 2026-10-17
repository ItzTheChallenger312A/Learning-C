Ngôn ngữ C ra đời vào đầu những năm 1970 bởi Dennis Ritchie tại phòng thí nghiệm Bell Labs. Đây là ngôn ngữ lập trình hệ thống, làm nền tảng cho nhiều hệ điều hành (như Linux, Windows) và các ngôn ngữ hiện đại sau này (C++, Java, Python).

  

## 1. Khái niệm then chốt

- **Ngôn ngữ biên dịch (Compiled Language):** Mã nguồn C (`.c`) không chạy trực tiếp mà phải đi qua một bộ biên dịch (Compiler) để chuyển thành mã máy (`.exe` hoặc file nhị phân).  
    
- **Môi trường lập trình (IDE / Toolchain):**
  
    - **Trình biên dịch (Compiler):** `GCC` hoặc `Clang`.  
        
    - **Công cụ khuyến nghị:** Visual Studio Code (kèm extension C/C++), Dev-C++, hoặc Online GDB (để chạy thử nhanh trên web).
        

## 2. Chương trình Hello World & Giải thích cấu trúc


``` C
#include <stdio.h>

int main() {
    // In dòng chữ ra màn hình
    printf("Hello, World!\n");
    return 0;
}
```

**Giải thích chi tiết:**

- `#include <stdio.h>`: Chỉ thị tiền xử lý (preprocessor statement). Dòng này nạp thư viện **Standard Input/Output** để bạn có thể sử dụng các hàm nhập/xuất dữ liệu chuẩn như `printf`.
    
- `int main()`: Hàm chính của chương trình. Mọi chương trình C đều bắt đầu thực thi từ hàm `main`. 
    
- `printf("Hello, World!\n");`: Hàm dùng để in chuỗi ký tự ra màn hình.
  
    - `\n`: Ký tự đặc biệt biểu thị việc **xuống dòng**.
        
- `return 0;`: Báo cho hệ điều hành biết chương trình đã kết thúc thành công (không có lỗi).
    
- `;` (Dấu chấm phẩy): Kết thúc một câu lệnh.

## 3. Lưu ý & Lỗi thường gặp

- **Quên dấu chấm phẩy `;`:** Đây là lỗi phổ biến nhất ở người mới. Hầu hết các câu lệnh trong C đều bắt đầu và kết thúc bằng `;`.
    
- **Phân biệt hoa/thường (Case sensitivity):** C phân biệt rõ chữ hoa và chữ thường. `Main()`, `PRINTF()` hay `INT` đều gây lỗi biên dịch.
    
- **Quên thư viện `#include <stdio.h>`:** Nếu không khai báo, trình biên dịch sẽ không hiểu hàm `printf` là gì.

## 4. Bài tập nhỏ cho bạn

1. **Chỉnh sửa:** Thay đổi chương trình trên để in ra 2 dòng riêng biệt:
    
    - Dòng 1: Tên của bạn.  
        
    - Dòng 2: "Tôi đang học lập trình C!"
    
2. **Thử nghiệm tạo lỗi:** Thử xóa dấu `;` ở cuối dòng `printf` hoặc sửa `printf` thành `Printf`, biên dịch chương trình và quan sát thông báo lỗi mà trình biên dịch trả về.