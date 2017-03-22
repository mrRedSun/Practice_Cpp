#include <iostream>
using std::cin;
using std::cout;

void bubble_sort (int &array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (*array[j] > *array[j + 1])
            {
                temp = array[j];
                *array[j] = *array[j + 1];
                *array[j + 1] = temp;
            }
        }
    }


}

int main(int argc, char const *argv[]) {

    int arr[5] = {1, 4, 5, 14, -4};
    bubble_sort(arr, sizeof(arr) / sizeof(int));

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}
