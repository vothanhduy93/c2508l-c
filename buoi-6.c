#include <stdio.h>
#include <math.h>

int main(){
	
	// Cau 1
//	int a, b, c, max;
//	printf("Nhap a, b, c: ");
//	scanf("%d%d%d", &a, &b, &c);
//	
//	max = a;
//	if(b > max){
//		max = b;
//	}
//	if(c > max){
//		max = c;
//	}
//	
//	printf("So lon nhat la: %d", max);
	
	// Cau 2
//	int a;
//	printf("Nhap so a: ");
//	scanf("%d", &a);
//	
//	if(a % 2 == 0 && a % 3 == 0){
//		printf("a chia het cho 2 va 3");
//	}else{
//		printf("a khong chia het cho 2 va 3");
//	}
	
	// Cau 3
//	int tuoi;
//	printf("Nhap tuoi: ");
//	scanf("%d", &tuoi);
//	
//	if(tuoi >= 16){
//		printf("Du dieu kien hoc lop 10");
//	}else{
//		printf("Khong du dieu kien");
//	}
	
	// Cau 4
	double a, b, c, p, s;
	printf("Nhap do dai 3 canh a, b, c: ");
	scanf("%lf%lf%lf", &a, &b, &c);
	
	// Kiem tra dieu kien tam giac ton tai
	if(a + b > c && a + c > b && c + b > a){
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		
		printf("Dien tich tam giac la: %.2lf", s);
	}else{
		printf("Tam giac khong ton tai.");
	}

	// Cau 6
//	int luong, thueThuNhap, thucLinh;
//	printf("Nhap luong cua ban: ");
//	scanf("%d", &luong);
//	
//	if(luong > 0){
//		if(luong > 15){
//			thueThuNhap = luong * 0.3;
//		}else if(luong >= 7){
//			thueThuNhap = luong * 0.2;
//		}else{
//			thueThuNhap = luong * 0.1;
//		}
//		
//		thucLinh = luong - thueThuNhap;
//		printf("Thue thu nhap la: %d \n", thueThuNhap);
//		printf("Thuc linh la: %d", thucLinh);
//	}else{
//		printf("Luong ban nhap khong hop le.");
//	}
	
	// Cau 8
//	int thang, nam;
//	printf("Nhap thang: ");
//	scanf("%d", &thang);
//	printf("Nhap nam: ");
//	scanf("%d", &nam);
//	
//	if(thang >= 1 && thang <= 12){
//		if(thang == 1 || thang == 3 || thang == 5 || thang == 7
//		|| thang == 8 || thang == 10 || thang == 12){
//			printf("Thang %d nam %d co 31 ngay", thang, nam);
//		}else if(thang == 4 || thang == 6 || thang == 9 
//		|| thang == 11){
//			printf("Thang %d nam %d nay co 30 ngay", thang, nam);
//		}else{
//			// Kiem tra nam nhuan
//			if(nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)){
//				printf("Thang %d nam %d co 29 ngay", thang, nam);
//			}else{
//				printf("Thang %d nam %d co 28 ngay", thang, nam);
//			}
//		}
//	}else{
//		printf("Thang ban nhap khong hop le.");
//	}
	
	
	// Cau 9
	int tienCuoc = 25000, soPhut;
	printf("Nhap so phut goi: ");
	scanf("%d", &soPhut);
	
	if(soPhut >= 0){
		if(soPhut <= 10){
			tienCuoc = tienCuoc + (soPhut * 600);
	//		tienCuoc += soPhut * 600;
		}else if(soPhut <= 60){
			tienCuoc = tienCuoc + (10 * 600) + ((soPhut - 10) * 400);
		}else{
			tienCuoc = tienCuoc + (10 * 600) + (50 * 400) + ((soPhut - 60) * 200);
		}
		printf("Tien cuoc ban phai tra la: %d", tienCuoc);
	}else{
		printf("So phut ban nhap khong hop le.");
	}
		
	// Viet chuong trinh nhap vao so va in ra thu tuong ung. 
	// VD: nhap so 2 => in 'thu 2' (dung switch)
	
//	int n;
//	printf("Nhap n: ");
//	scanf("%d", &n);
//	
//	switch(n){
//		case 2:
//			printf("thu 2");
//			break;
//		case 3:
//			printf("thu 3");
//			break;
//		case 4:
//			printf("thu 4");
//			break;
//		case 5:
//			printf("thu 5");
//			break;
//		case 6:
//			printf("thu 6");
//			break;
//		case 7:
//			printf("thu 7");
//			break;
//		default: // cac truong hop con lai
//			printf("chu nhat");
//	}
	
	// Cau 8 (dung switch)
	
	int thang, nam;
	printf("Nhap thang: ");
	scanf("%d", &thang);
	printf("Nhap nam: ");
	scanf("%d", &nam);
	
	if(thang >= 1 && thang <= 12){
		switch(thang){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				printf("Thang %d nam %d co 31 ngay", thang, nam);
				break;
			case 4: case 6: case 9: case 11:
				printf("Thang %d nam %d nay co 30 ngay", thang, nam);
				break;
			case 2:
				// Kiem tra nam nhuan
				if(nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)){
					printf("Thang %d nam %d co 29 ngay", thang, nam);
				}else{
					printf("Thang %d nam %d co 28 ngay", thang, nam);
				}
		}
	}else{
		printf("Thang ban nhap khong hop le.");
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
