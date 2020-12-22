#include <iostream>
#include <math.h>

using namespace std;

void nhaptamgiac(string s, int a[9]) {
	cout << "	Ten tam giac:";
	cin >> s;
	cout << "	ten Diem 1:" << s[0] << endl;
	cout << "	x: "; cin >> a[0];
	cout << "	y: "; cin >> a[1];
	cout << "	z: "; cin >> a[2];
	cout << "	ten Diem 2:" << s[1] << endl;
	cout << "	x: "; cin >> a[3];
	cout << "	y: "; cin >> a[4];
	cout << "	z: "; cin >> a[5];
	cout << "	ten Diem 3:" << s[2] << endl;
	cout << "	x: "; cin >> a[6];
	cout << "	y: "; cin >> a[7];
	cout << "	z: "; cin >> a[8];
	cout << endl;
}

void xuattamgiac(string s, int a[9]) {
	cout << "Tam giac:" << s << endl;
	cout << "Diem " << s[0] << "(" << a[0] << ", " << a[1] << ", " << a[2] << ")" << endl;
	cout << "Diem " << s[1] << "(" << a[3] << ", " << a[4] << ", " << a[5] << ")" << endl;
	cout << "Diem " << s[2] << "(" << a[6] << ", " << a[7] << ", " << a[8] << ")" << endl;
}

void tinhdodaicanh(int a1, int b1, int c1, int a2, int b2, int c2) {
	float x = sqrt(a1*a2 + b1*b2 + c1*c2);
	cout << x << endl;
}

void trongtam(int a[9]) {
	float ttx = (a[0] + a[3] + a[6]) / 3;
	float tty = (a[1] + a[4] + a[7]) / 3;
	float ttz = (a[2] + a[5] + a[8]) / 3;
	cout << "G(" << ttx << ", " << tty << ", " << ttz << ")" << endl;
}

int main() {
	string tr1, tr2;
	int A[9], B[9];
	int choice;
	cout << "Ho va ten: Le Ha Hung - MSSV: 20183757" << endl;
	cout << "Chuong trinh quan ly cac tam giac:" << endl;
	cout << "Nhan 1 va 2 de thuc hien yeu cau" << endl;
	cout << "Nha 0 de thoat" << endl;
	cout << "***********************************" << endl;
	do {
		cout << "Nhap lua chon cua ban: " << endl;
		cin >> choice;
		if (choice == 1) {
			cout << "Ban da chon nhap ds tam giac:" << endl;
			cout << "Nhap thong tin tam giac thu nhat:" << endl;
			nhaptamgiac(tr1, A);
			cout << "Nhap thong tin tam giac thu hai:" << endl;
			nhaptamgiac(tr2, B);
			cout << "Ban da nhap thanh cong, nhan phim bat ky de tiep tuc!" << endl;
			system("pause");
		}
		else if (choice == 2) {
			cout << "Ban chon xuat DS tam giac:" << endl;
			xuattamgiac(tr1, A);
			trongtam(A);
			cout << "Do dai canh AB: ";
			tinhdodaicanh(A[0], A[1], A[2], A[3], A[4], A[5]);

			xuattamgiac(tr2, B);
			tinhdodaicanh(B[0], B[1], B[2], B[3], B[4], B[5]);
			trongtam(B);

		}
	} while (choice != 0);
}