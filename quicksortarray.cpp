#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right);

int main() {
    int arr[] = {98,78,84,58,83,50,10,70,13,91,25,74,38,72,12,59,23,19,9,64,49,99,20,67,53,52,53,89,27,36,19,43,85,1,77,95,74,35,57,29,28,81,17,87,70,94,91,0,93,64,1,2,91,7,47,2,18,51,92,88,67,88,26,40,91,85,21,24,87,14,63,3,24,98,0,1,42,41,87,61,16,47,56,81,15,40,84,29,59,40,41,22,32,54,59,85,34,24,16,37,83,69,14,28,65,34,67,87,7,32,17,32,17,88,52,25,92,64,53,78,49,60,75,47,20,99,17,7,96,75,7,82,61,98,8,94,64,53,55,20,32,35,58,78,78,81,95,9,93,32,85,36,85,12,87,90,98,46,6,51,78,95,48,92,6,98,34,32,78,82,99,68,16,92,41,11,87,76,13,76,2,17,90,36,45,35,83,3,30,68,13,55,27,20,88,63,38,62,88,6,6,62,35,99,15,54,77,24,62,68,35,74,27,44,83,87,21,8,74,28,19,90,82,4,45,52,17,57,63,99,7,30,39,63,83,3,22,10,5,80,39,38,43,81,68,79,54,66,39,15,22,39,42,66,25,13,25,74,72,33,47,32,88,38,61,10,41,1,17,45,92,80,1,80,30,25,48,53,20,14,88,72,99,76,89,90,77,15,90,83,93,48,92,18,81,39,45,60,49,8,73,10,12,59,25,78,71,76,57,8,96,96,79,53,45,13,1,76,6,8,28,51,15,27,66,21,7,2,93,86,84,86,29,23,20,56,94,13,24,96,92,16,56,66,75,10,70,93,3,61,10,100,81,48,49,78,87,0,92,75,18,31,73,65,71,43,75,97,76,97,41,54,35,59,85,13,36,53,65,54,13,52,56,65,27,23,38,6,38,15,47,65,76,40,100,50,30,68,22,83,77,21,26,83,34,99,55,66,17,32,63,0,38,70,37,42,48,56,48,42,55,65,64,50,3,33,39,57,15,26,77,100,34,81,0,53,99,67,70,56,33,35,95,89,42,20,6,17,50,89,34,74,35,52,0,35,25,60,100,91,62,99,41,82,6,27,56,84,7,97,57,28,45,81,85,32,14,70,49,44,14,92,42,12,56,88,21,55,69,79,33,9,49,60,9,60,26,18,15,20};
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

