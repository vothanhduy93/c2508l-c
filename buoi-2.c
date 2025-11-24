// Comment nghia la khong cho trinh bien dich dich dong code nay
// Day la tien xu ly (preprocessor). Muc dich la nhung thu vien
// Standard Input Output (thu vien nhap xuat chuan)
// vao trong file thuc thi
#include <stdio.h>

// Day la ham chuong trinh se thuc thi dau tien
int main(){
	// day la than ham
	
	// Ham printf (print formatted) dung de in ra man hinh 1 cai gi do
	printf("Xin chao \n");
	
	int tuoi = 0;
	// %d, %f, %lf, %c... goi la format specifier (dac ta dinh dang)
	printf("Tuoi cua toi la: %d \n", tuoi);
	
	float diemToan = 4.5;
	float diemVan = 7.5;
	float diemAnh = 5.5;
    float diemTrungBinh;
	
	printf("Diem toan: %f \n", diemToan);
	printf("Diem van: %f \n", diemVan);
	printf("Diem anh: %f \n", diemAnh);
	
	diemTrungBinh = (diemToan + diemVan + diemAnh) / 3; 
	
	printf("Diem trung binh la: %f \n", diemTrungBinh); 
	
	char kyTu = 'C';
	
	printf("Gia tri cua bien kyTu la: %d \n", kyTu);
	
	// De nhap du lieu tu ban phim thi minh dung scanf()
	int a;
	int b;
	int tong;
	printf("Nhap so a: ");
	// Dau & la toan tu dia chi, dung de xac dinh gia tri cua bien a
	// duoc luu o dau trong bo nho RAM
	scanf("%d", &a);
	
	printf("Gia tri cua bien a la: %d \n", a);
	
	printf("Nhap so b: ");
	scanf("%d", &b);
	printf("Gia tri cua bien b la: %d \n", b);
	
	tong = a + b;

	printf("Tong cua a va b la: %d", tong);
	
	return 0;
}
