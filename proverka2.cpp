#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;

//     double* arr = new double[n]; // create the dynamic array

//     // fill the array
//     for (int i = 0; i < n; i++) {
//         cout << "Enter element " << i+1 << ": ";
//         cin >> arr[i];
//     }

//     // output the array
//     cout << "The elements in the array are:" << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // free the dynamic memory
//     delete[] arr;

//     return 0;
// }


void fillArray(int a[], int n) {
    cout << "\nInput elements of massiv: \n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    int n, s = 0;
    int a[100];
    cout << "Input n: ";
    cin >> n;
    fillArray(a, n);
    for(int i = 0; i < n; i++) {
        s += a[i];
    }
    cout << '\n' << "summa= " << s;
}

