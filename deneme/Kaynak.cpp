#include <iostream>

using namespace std;
int main() {
	int sayi1, sayi2, sayi3, sonuc;
	
	sayi1 = 20;
	sayi2 = 10;

	sonuc = sayi1 + sayi2;
	cout << "Toplam: " << sonuc << endl;

	sonuc = sayi1 - sayi2;
	cout << "Cikarma: " << sonuc << endl;

	sonuc = sayi1 * sayi2;
	cout << "Carpma: " << sonuc << endl;

	sonuc = sayi1 / sayi2;
	cout << "Bolme : " << sonuc << endl;


	string isim, soyisim;
	isim = "ceren";
	soyisim = "akg�l";
	cout << "Ad�n�z : " << isim + " " + soyisim << endl;

	return 0;

}

