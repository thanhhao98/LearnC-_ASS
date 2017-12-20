Assignment_1
# LearnC-_ASS




## 1. Giới thiệu

Bài tập lần này các bạn sẽ phải học cách làm việc với mã nguồn do Tôi viết.
Đồng thời để hoàn thành yêu cầu đòi hỏi các em phải thuần thục và vận dụng các kiến thứ về  mảng, đọc viết file, vòng lặp ...
Chúc các bạn làm bài thật tốt và có những bài học, trải nghiệm thú vị

## 2. Yêu cầu

Trong bài tập lớn này, các bạn sẽ được cung cấp 2 tập tin chứa dữ liệu nhập:
`data.csv` và `request.txt`. Chi tiết mô tả dữ liệu nhập, xuất và 
các công việc các phải làm được nêu trong các mục dưới đây.
### 2.1. Dữ liệu nhập
-  File `data.csv`: chứa các thông tin về vị trí của các phương tiện 
	vận chuyển, trong đó chúng ta quan tâm 4 thông số quan trọng sau:
	+ TAG: ID của phương tiện. ARMY\_ID: số hiệu của phương tiện.
	+ LONGITUDE (long): kinh độ.
	+ LATITUDE (lat): vĩ độ.
- File `request.txt`: chứa các yêu cầu xử lý dữ liệu. Các yêu cầu này được 
    mô tả trong phần sau. Nội dung tập tin dữ liệu nhập `request.txt` sẽ mô tả 
    các yêu cầu theo thứ tự từ trái sang phải. Số lượng các yêu cầu là không 
    cố định, có thể thay đổi tùy theo test case. Một yêu cầu có thể xuất hiện 
    nhiều lần trong tập tin dữ liệu nhập. Nếu số yêu cầu nhiều, các yêu cầu có thể 
    trình bày thành nhiều dòng. Mỗi yêu cầu được mô tả sẽ cách nhau bởi một dấu 
    khoảng trắng, kết thúc các yêu cầu bằng dấu chấm phẩy. Nếu mã yêu cầu không 
    tồn tại thì bỏ qua yêu cầu đó và đi tiếp đến yêu cầu tiếp theo.
	
### 2.2. Dữ liệu xuất

Dữ liệu phải được xuất theo từng dòng riêng biệt với mỗi yêu cầu. 
Dữ liệu xuất theo cú pháp:

    `<mã yêu cầu>: <kết quả>`
trong đó, `<kết quả>` được in ra theo quy tắc sau:
- Ký tự: không cần định dạng.
- Số nguyên: không cần định dạng.
- Số thực: độ chính xác 12 chữ số ( Đã được hiện thực phần này, các bạn không cần quan tâm đến nó).
	
## 3. Quy ước và yêu cầu
### 3.1. Quy ước
1. **Mỗi id tượng trương cho một phương tiện**
    Số  lượng phương tiện chính bằng số id khác nhau trong danh sách.
2. **Phương tiện lưu trữ đầu tiên**
    Là số  phương tiện được lưu trữ ở dòng thứ 2 trong file (không tính dòng đầu).
2. **Phương tiện lưu trữ đầu tiên**
    Là số  phương tiện được lưu trữ ở dòng cuối cùng của file.


### 3.2. Yêu cầu truy xuất
Các yêu cầu truy xuất có mã và mô tả về việc truy xuất lần lượt sau đây:
1. **Xác định số hiệu phương tiện lưu trữ đầu tiên trong danh sách**	
	Mã yêu cầu: `1`<br />
	Khi gặp yê cầu này sinh viên in ra id của phương tiện lưu trữ đầu tiên trong danh sách.
		
2. **Xác định số hiện của phương tiện lưu trữ cuối cùng trong danh sách**
	<br/>
	Mã yêu cầu: `2`<br/>
	Khi gặp yê cầu này sinh viên in ra id của phương tiện lưu trữ cuối cùng trong danh sách.
		
3. **Xác định số lượng phương tiện lưu trữ trong dánh sách**
	<br/>
	Mã yêu cầu: `3`<br/>
    Khi gặp yê cầu này sinh viên in ra id của phương tiện lưu trữ cuối cùng trong danh sách.
	
		
4. **Xác định phương tiện hiện diện ở 2 vị trí xa nhau nhất**
	<br/>
	Mã yêu cầu: `4`<br/>
	Khi gặp yêu cầu này xuất ra id của phương tiện có mặt ở 2 vị trí xa nhau nhất.


5. **Xác định phương tiện hiện diện ở vị trí có longitude lớn nhất**
	<br/>
	Mã yêu cầu: `5`<br/>
	Khi gặp yêu cầu này xuất ra id của phương tiện có số liệu longitude lớn nhất.

5. **Xác định phương tiện hiện diện ở vị trí có latitude lớn nhất**
	<br/>
	Mã yêu cầu: `6`<br/>
	Khi gặp yêu cầu này xuất ra id của phương tiện có số liệu latitude lớn nhất.
		


## 4. Hiện thực chương trình
	
Các bạn được cung cấp các tập tin sau đây:
- `main.cpp`: mã nguồn chính của chương trình.
- `myMath.h`: tập tin chứa đinh nghĩa các hàm được cho sẵng.
- `myMath.cpp`: tập tin chứa hiện thực các hàm được cho sẵng.
- `mystruckLib.h`: tập tin chưa định nghĩa của các struct được cho sẵng.
- `readFile.cpp`: tập tin chứa đinh nghĩa các hàm đọc file, sử lý event.
- `process.h`: tập tin chứa các hàm sửa lý event, đọc file.


Các bạn được cho các hàm sau:
- `distanceEarth`: tính khoảng cách giữa 2 điểm trên mặt đất với toạ độ (latitude, longitude) cho trước.
- `compareId`: so sánh id của 2 phương tiện ( trả về true nếu giống nhau và false nêu khác nhau).



Các bạn chỉ phải hiện thực 3 hàm trong file process.cpp ( các file khác không được viết lên):
- `process`: hàm xử lý event.
- `readDataInf`: đọc file data và mảng dataInf.
- `readEvent`: đọc file event vào mang event.

	
## 5. Cách dịch và thực thi chương trình
Các bạn sẽ được Tôi hướng dẫn kí phần này tại lớp.



