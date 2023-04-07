// 1. algoritma dapat memungkinkan progammer untuk memecahkan masalah menjadi langkah langkah yang lebih kecil dan mudah dikelola, sehingga mereka dapat merancang program yang lebih terstruktur dan mudah dipelihara
// 2. linier dan non-linier atau statis dan dinamis
// 3. ukuran input, algoritma yang dipakai, struktur data, bahasa pemrograman,optimisasi kode
// 4. insertion sort karena  ketika mengurutkan data yang ukurannya kecil, insertion sort membutuhkan jumlah iterasi yang relatif sedikit dibandingkan dengan algoritma pengururutan lainnya
// 5. quadratic (bubble sort, selection sort, insertion sort), loglinear ( merge sort, quick sort) 

#include <iostream>
using namespace std;

const int MAX_DATA = 47;
void input(int data[], int n) {
	cout << "masukkan" << n << "bilangan bulat:\n";
	for (int i = 0; i < n; i++) {
		cin >> data[i];
	}
}

void selectionsort(int data[], int n) {
	
}
	