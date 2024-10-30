#include <iostream>

using namespace std;

void swap (int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

void selectionSort (int arr[], int length){
    for (int i = 0; i < length - 1; i++){
        int minIdx = i;
        for (int j = i + 1 ; j < length; j++){
            if (arr[minIdx] > arr[j]){
                minIdx = j;
                swap(arr[minIdx], arr[i]);
            }
        }
    }
}

void printArray (int arr[], int length){
    for (int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int myArray[5];

    for (int i = 0; i < 5; i++){
        cout<<"Input your " << i + 1 << " number:";cin>>myArray[i];
    }
    
    int length = sizeof(myArray) / sizeof(myArray[0]);

    int sum;
    for (int num : myArray){
        sum += num;
    }

    int avg = sum / length;

    cout << "Sum of the array is: " << sum << ", the average is: " << avg << endl;

    selectionSort(myArray, length);
    printArray(myArray, length);

}