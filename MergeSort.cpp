#include <iostream>
using namespace std;

int arr[20], B[20];

int n;

void input() {
    while (true) {
        cout << "Masukkan Panjang element array: ";
        cin >> n;

        if (n<=20) {
            break;
        }
        else {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }

    cout << "\n===========================";
    cout << "\nInputkan Isi Element Array";
    cout << "\n===========================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Array index ke - " << i << ": ";
        cin >> arr[i];
    }
}

void mergesort (int low, int high) {
    //step 1
    if (low >= high) {
        return;//step 1.a
    }

    int mid = (low + high) / 2;//step 2

    //step 3
    mergesort(low,mid); //Step 3.a
    mergesort(mid + 1,high); ///step 3.b

    //step 4
    int i = low;
    int j = mid + 1; //step 4.a
    int k = low; //step 4.b

    while(i <= mid && j <= high) {//step 4.d
        if(arr[i] <= arr [j]) {//step 4.d.i
            B[k] = arr [i];
            i++;
        }else {
            B[k] = arr[j];
            j++;
        }
        k++; //step 4.d.ii
    }
}

void output() {
    cout << "\nData setelah diurutkan (MergeSort): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}