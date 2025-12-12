#include <stdio.h>

/*
	Global variable (bien toan cuc)
*/

int x = 5, y = 10;

/*
	Function prototype
*/
int tinhTong(int, int);

// Dinh nghia ham truoc khi no duoc goi
// TH1: ham co tra ve du lieu
// a, b duoc goi la tham so (parameters)
int tinhTong(a, b){
	return a + b;
}

// TH2: ham khong co tra ve du lieu
void sayHello(){
	printf("Hello");
}

// Thong thuong, nguoi ta su dung function prototype (nguyen mau ham)
// giup cho code c de quan ly hon. 

// Chung ta co the goi ham khac o trong ham hien hanh

// Doi so khi truyen vao trong ham luc goi ham co 2 hinh thuc:
/*
	1. Truyen tham tri (pass by value)
	Khi chuong trinh chay, cac doi so duoc truyen vao trong ham se duoc copy thanh
	1 ban rieng biet. Va hanh vi tinh toan tren doi so nay se khong anh huong den gia
	tri cua bien truyen vao.
	
	2. Truyen tham chieu (pass by reference)
	Trong c khong co khai niem nay. Co the gia lap truyen tham chieu bang cach dung 
	con tro
*/

void truyenThamTri(int a, int b){
	a = 5;
	b = 10;
	
	printf("a trong ham co gia tri la: %d \n", a);
	printf("b trong ham co gia tri la: %d \n", b);
}

// *a la con tro tro den dia chi luu tru gia tri cua a trong bo nho RAM
void truyenThamChieu(int *a, int *b){
	*a = 5;
	*b = 10;
}

void viDu(){
	printf("x la: %d", x);
	printf("y la: %d", y);
}

int main(){
	
//	int a = 1, b = 2;
//	// khi goi ham, du lieu truyen vao ham duoc goi la doi so cua ham (arguments)
//	tinhTong(a, b); 

	// Vi du truyen tham tri
//	int a = 1, b = 2;
//	truyenThamTri(a, b);
//	
//	printf("Gia tri cua a la: %d\n", a);
//	printf("Gia tri cua b la: %d\n", b);

	
	// Vi du truyen tham chieu bang con tro
//	int a = 1, b = 2;
//	truyenThamChieu(&a, &b); // truyen vao dia chi cua a, b
//	
//	printf("gia tri cua a: %d \n", a);
//	printf("gia tri cua b: %d \n", b);

	// Scope of variable (pham vi cua bien)
	/*
		Neu khai bao bien trong 1 code block {} thi bien do se co pham vi cuc bo
		(local variable): chu trinh song cua no se chi ton tai khi thuc thi block code
		
		Neu khai bao bien tren dau tap lenh thi bien do se co pham vi toan cuc
		(global variable):  chu trinh song cua no se bat dau khi chuong trinh duoc
		chay den khi ket 
	*/

//	printf("x la: %d \n", x);
//	printf("y la: %d", y);


	/*
		Mang (array)
	*/
	
	// khai bao mang a co 100 phan tu kieu so nguyen
//	int a[100];
	
	// khoi tao mang
//	int a[15] = {0};
//	
//	printf("a[0] = %d \n", a[0]); // index/vi tri/chi muc
//	printf("a[1] = %d \n", a[1]);
//	printf("a[2] = %d \n", a[2]);
//	printf("a[3] = %d \n", a[3]);
//	printf("a[4] = %d \n", a[4]);

	/*
		1. Khong thao tac tinh toan den cac phan tu trong mang khi chung chua co gia tri
		2. Neu gan gia tri cho phan tu thu 0 ma khong gan gia tri cac phan tu con lai
		thi chung mac dinh se bi gan bang 0
		
	*/
	
//	int n;
//	printf("Nhap so luong phan tu cua mang: ");
//	scanf("%d", &n);
//	
//	// Khoi tao mang a co n phan tu la kieu so nguyen
//	int a[n]; // cap phat dong
	
//	a[0] = 100;
//
//	printf("a[0] = %d \n", a[0]);
//	printf("size of: %d", sizeof a);

	// Nhap mang bang vong lap for
//	int i;
//	for(i = 0; i < n; i++){
//		printf("Nhap phan tu thu %d \n", i);
//		scanf("%d", &a[i]);
//	}
//
//	// Xuat mang
//	for(i = 0; i < n; i++){
//		printf("a[%d] = %d \n", i, a[i]);
//	}

	// Bai tap: tinh tong cac phan tu trong mang. Biet rang mang co 5 phan tu 
	// la kieu so nguyen. Gia tri cua cac phan tu nguoi dung tu nhap tu ban phim

//	int a[5], i, tong = 0;
//	// nhap mang
//	for(i = 0; i < 5; i++){
//		printf("a[%d] = ", i);
//		scanf("%d", &a[i]);
//		
//		tong += a[i];
//	}
//	printf("Tong la: %d", tong);

	// Bai tap: tinh tong cac phan tu co vi tri chan trong mang. Biet rang mang co 5 phan tu 
	// la kieu so nguyen. Gia tri cua cac phan tu nguoi dung tu nhap tu ban phim

//	int a[5], i, tong = 0;
//	// nhap mang
//	for(i = 0; i < 5; i++){
//		printf("a[%d] = ", i);
//		scanf("%d", &a[i]);
//		
//		if(i % 2 == 0 && i != 0){
//			tong += a[i];	
//		}
//	}
//	printf("Tong la: %d", tong);
	
	// Bai tap: tinh tong cac phan tu co gia tri la so chan trong mang. Biet rang mang co 5 phan tu 
	// la kieu so nguyen. Gia tri cua cac phan tu nguoi dung tu nhap tu ban phim
	
	int a[5], i, tong = 0;
	// nhap mang
	for(i = 0; i < 5; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
		
		if(a[i] % 2 == 0){
			tong += a[i];	
		}
	}
	printf("Tong la: %d", tong);

	
	
	
	
	
	
	return 0;
}


