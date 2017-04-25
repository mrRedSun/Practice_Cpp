#include <iostream>
#include <stdlib.h>

void quickSort(long arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      /* partition */
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

      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}

int main()
{
    int quantity;
    std::cin >> quantity;

    long * A_arr = new long [quantity];
    long * B_arr = new long [quantity];
    long * C_arr = new long [quantity];


    for (int i = 0; i < quantity; i++)
    {
        std::cin >> A_arr[i] >> B_arr[i] >> C_arr[i];
    }

    quickSort(A_arr, 0, quantity - 1);
    quickSort(B_arr, 0, quantity - 1);
    quickSort(C_arr, 0, quantity - 1);

    int medium_A  =  A_arr[quantity / 2];
    int medium_B  =  B_arr[quantity / 2];
    int medium_C  =  C_arr[quantity / 2];


    unsigned long long distrust = 0;

    for (int i = 0; i < quantity; i++)
    {
        distrust += llabs(A_arr[i] - medium_A);
        distrust += llabs(B_arr[i] - medium_B);
        distrust += llabs(C_arr[i] - medium_C);
    }

    std::cout << distrust;

    return 0;
}
