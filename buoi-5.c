#include <stdio.h>

int main(){
	
//	int a, b, tam;
//	printf("Nhap a: ");
//	scanf("%d", &a);
//	printf("Nhap b: ");
//	scanf("%d", &b);
	
//	printf("Nhap a, b: ");
//	scanf("%d%d", &a, &b);
//	
//	if(a > b){
//		tam = a;
//		a = b;
//		b = tam;
//	}
//	
//	printf("Gia tri cua a la: %d, b la: %d", a, b);
	
	
//	int a, b;
//	printf("Nhap a, b: ");
//	scanf("%d%d", &a, &b);
//	
//	if(a == b){
//		printf("a bang b");
//	}else{
//		printf("a khac b");
//	}

//	char c;
//	printf("Nhap ky tu c: ");
//	scanf("%c", &c);
//	
//	if(c >= 'a' && c <= 'z'){
////		c = c - 32;
//		c -= 32;
//		printf("Ky tu viet hoa cua c la %c", c);
//	}else{
//		printf("Ky tu chung ta vua nhap la %c", c);
//	}

	
//	char c;
//	printf("Nhap ky tu c: ");
//	scanf("%c", &c);
//	
//	if(c >= 'a' && c <= 'z'){
//		c -= 32;
//		printf("Ky tu viet hoa cua c la %c", c);
//	}else if(c >= 'A' && c <= 'Z'){
//		c += 32;
//		printf("Ky tu viet thuong cua c la %c", c);
//	}else if(c >= '0' && c <= '9'){
//		printf("Ky tu chung ta vua nhap la so %c", c);
//	}else{
//		printf("Chung ta da nhap ky tu %c", c);
//	}
	
	// viet ten bien theo cu phap lac da (camel case)
//	int giaVe = 50000, tuoi;
//	printf("Nhap tuoi: ");
//	scanf("%d", &tuoi);
//	
//	if(tuoi < 6){
//		giaVe -= giaVe * 0.5;
//	}else if(tuoi <= 10){
//		giaVe -= giaVe * 0.3;
//	}else if(tuoi <= 15){
//		giaVe -= giaVe * 0.15;
//	}
//	
//	printf("Tien ve cua ban la: %d", giaVe);
	
	float diem;
	printf("Nhap diem: ");
	scanf("%f", &diem);
	
	if(diem >= 0 && diem <= 10){
		if(diem >= 9){
			printf("Xuat sac");
		}else if(diem > 8){
			printf("Gioi");
		}else if(diem > 7){
			printf("Kha");
		}else if(diem > 6){
			printf("Trung binh kha");
		}else if(diem >= 5){
			printf("Trung binh");
		}else{
			printf("Yeu");
		}
	}else{
		printf("Diem nhap vao khong hop le!");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
