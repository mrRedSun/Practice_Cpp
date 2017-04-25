#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void quickSort(int * arr, int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };

      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}

int binary_search(int * array, int size, int n) {
    int pos = size / 2;
    if (array[pos] == n) {
        return pos;
    }

    if (array[pos] < n) {
        binary_search(array, size + pos, n);
    }

    if (array[pos] > n) {
        binary_search(array, size - pos, n);
    }

}


int main()
{
    srand(time(NULL));

    int n; cin >> n;
    int * arr = new int [n];

    for(int i = 0; i < n; i++) {
        arr[i] = (int) rand() % 10;
    }

    quickSort(arr, 0, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";

    for(int i = 0; i < binary_search(arr, n, 3); i++) {
        cout << "  ";
    }
    cout << "^";

    delete [] arr;
    return 0;
}
