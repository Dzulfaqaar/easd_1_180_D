// 1. algoritma dapat memungkinkan progammer untuk memecahkan masalah menjadi langkah langkah yang lebih kecil dan mudah dikelola, sehingga mereka dapat merancang program yang lebih terstruktur dan mudah dipelihara
// 2. linier dan non-linier atau statis dan dinamis
// 3. ukuran input, algoritma yang dipakai, struktur data, bahasa pemrograman,optimisasi kode
// 4. insertion sort karena  ketika mengurutkan data yang ukurannya kecil, insertion sort membutuhkan jumlah iterasi yang relatif sedikit dibandingkan dengan algoritma pengururutan lainnya
// 5. quadratic (bubble sort, selection sort, insertion sort), loglinear ( merge sort, quick sort) 

#include <iostream>
using namespace std;

int fikri[100]; 
int n;

void input() {
     while (true) {
         cout << " Masukkan jumlah data array : ";
            cin >> n;
            if (n <= 100)
                break;
            else
                cout << "\narray yang anda masukkan maksimal 80 elemen.\n";

     }
    cout << "\n_______________________" << endl;
    cout << "\nEnter Array element" << endl;
    cout << " \n______________________" << endl;
    for (int i = 0; i < n; i++){
        cout << " Data ke-" << (i + 1) << " : ";
        cin >> fikri[i];
    }
}

void swap(int x, int y)
{
    int temp;
    temp = fikri[x];
    fikri[x] = fikri[y];
    fikri[y] = temp;
}

void selectionsort() {
    int j;
    int min_idx;

    for (j = 0; j < n - 2;j++) {
        min_idx = j;
        for (j = j + 1; j < n - 1; j++) {
            min_idx = j;
            if (fikri[j] < fikri[j])
                min_idx = j;
        }
        if (min_idx = j)
            swap(fikri[j], fikri[min_idx]);
    }
}

void display() {
    cout << endl;
    cout << "\ntotal element movement = " << n - 1 << endl;
    cout << "\n====================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "====================================" << endl;
    for (int j = 0; j < n; j++)
    {
        cout << fikri[j] << "";
    }
    cout << endl;
}

int main()
{
    input();
    selectionsort();
    display();
    system("Pause");

    return 0;
}
