#include<stdio.h>
#include<conio.h>
struct Ngay {
	int ngay;
	int thang;
	int nam;
};
struct Hopsua {
	char nhanhieu[20];
	float trongluong;
	Ngay HSD;
};
void nhap(Hopsua& s) {
	printf("Nhan Hieu:");
	scanf("%[A-z a-z]", &s.nhanhieu);
	rewind(stdin);
	printf("Trong luong");
	scanf("%f", &s.trongluong);
	printf("hay nhap han su dung:");
	scanf("%d%d%d", &s.HSD.ngay, &s.HSD.thang, &s.HSD.nam);
}
void xuatthonhtin() {
	printf("\nNhan Hieu   Trong luong   Han su dung");

}
void xuat(Hopsua s) {
	printf("\n%s\t%10.3f kg\t%3d/%d/%d", s.nhanhieu, s.trongluong, s.HSD.ngay, s.HSD.thang, s.HSD.nam);

}
int main() {
	Hopsua s;
	nhap(s);
	xuatthonhtin();
	xuat(s);

	return 0;
}