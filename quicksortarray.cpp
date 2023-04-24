#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right);

int main() {
    int arr[] = {5, 2, 8, 4, 9, 3, 1, 6, 7 ,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    //cout << "Ongesorteerde array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    quickSort(arr, 0, n - 1);

    //cout << "Gesorteerde array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

void quickSort(int arr[], int left, int right) {
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];

    // verdelen
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
    }

    // herhalen
    
    if (left < j)
    {
        quickSort(arr, left, j);
        //cout << "Subarray gesorteerd: ";
        for (int k = left; k <= j; k++)
            cout << arr[k] << " ";
        cout << endl;
    }
        
    if (i < right)
    {
        quickSort(arr, i, right);
        //cout << "Subarray gesorteerd: ";
        for (int k = i; k <= right; k++)
            cout << arr[k] << " ";
        cout << endl;
    }
        
}

