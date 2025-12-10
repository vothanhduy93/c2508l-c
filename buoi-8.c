#include <stdio.h>

// Function prototype
// Khai bao tat ca cac ham chuc nang cua chuong trinh o day
int tongCongTich();
int tinhTong();
void tinhHieu();
int tinhTich();
float tinhThuong();
int tinhTuoi(int);

int main(){
	// function call (loi goi ham)
//	int tong;
//	tong = tinhTong();
//	printf("Tong la: %d", tong);
	
//	tinhHieu();

//	int tich;
//	tich = tinhTich();
//	printf("Tich la: %d", tich);

//	float thuong;
//	thuong = tinhThuong();
//	printf("Thuong la: %.2f", thuong);

//	int ketQua = tongCongTich();
//	printf("Tong cong tich la: %d", ketQua);

	int namSinh;
	printf("Nhap nam sinh: ");
	scanf("%d", &namSinh);
	
	int tuoi = tinhTuoi(namSinh);
	
	printf("Tuoi cua ban la: %d", tuoi);
	
	return 0;
}



// viet ham tinh tong 2 so
int tinhTong(){
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	return a + b;
}

// viet ham tru 2 so
void tinhHieu(){
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	printf("Hieu la: %d", a - b);
}

int tinhTich(){
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	return a * b;
}

float tinhThuong(){
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	return (float) a / b;
}

int tongCongTich(){
	int a, b, tong, tich;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	tong = a + b;
	tich = a * b;
	
	return tong + tich;
}

int tinhTuoi(int namSinh){
	return 2025 - namSinh;
}














