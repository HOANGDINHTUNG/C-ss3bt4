#include<stdio.h>
int main(){
	float toan, van, anh, dtb, tong;
	printf("moi nhap vao diem toan: ");
	scanf("%f",&toan);
	printf("moi nhap vao diem van: ");
	scanf("%f",&van);
	printf("moi nhap vao diem toan: ");
	scanf("%f",&anh);
	dtb=(toan+van+anh)/3;
	tong=toan+van+anh;
	printf("tong diem cua ban la : %.2f\n",tong);
	printf("diem trung binh cua ban la : %.2f",dtb);
	return 0;
	
	
}
