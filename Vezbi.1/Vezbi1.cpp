#include <iostream>
#include <string>
using namespace std;

void quicksort(int arr[], int left, int right);
int partition(int arr[], int left, int right);

int main() {
    string input = "Natalija Stefanovska INKI1004";
    int n = input.length();

    int myarray[n];
    for (int i = 0; i < n; i++) {
        myarray[i] = (int)input[i];
    }

    quicksort(myarray, 0, n-1);

    cout << "Sorted ASCII code array: ";
    for (int i = 0; i < n; i++) {
        cout << myarray[i] << " ";
    }

    return 0;
}

void quicksort(int arr[], int left, int right) {
    if (left < right) {
        int pivotIndex = partition(arr, left, right);
        quicksort(arr, left, pivotIndex-1);
        quicksort(arr, pivotIndex+1, right);
    }
}

int partition(int arr[], int left, int right) {
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j < right; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[right]);
    return i+1;
    cout<<"Natalija Stefanovska";
}
//ovoj algoritam raboti so rekurzivno delenje na vleznata niza na dve particii i tie se delat vrz osnova na pivot elementot
//taka shto site elementi vo edniot del se pomali ili ednakvi na pivot elementot a vo drugiot del se pogolemi od pivot
//potoa pivotot se stava vo pravilnata pozicija i algoritmot se primenuva na dvete particii dodeka ne se podredi nizata
//Natalija Stefanovska
