#include  <bits/stdc++.h>
using namespace std;

void selection_brute(vector <int>&arr){  //select minimum and then swap
    int n = arr.size();

    for(int i = 0 ; i<n-1 ; i++){
        int minIndex = i;
        // find min element
        for(int j = i+1 ; j<n ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    } 
    
    
}

void bubble_sort(vector <int>&arr){  //pushes max to last by use of adjacent swapping
    int n = arr.size();
    for (int i = n-1 ; i>=0 ; i--){
        int didSwap = 0;
        for(int j = 0; j <= i- 1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                didSwap = 1;
            }
        }
        if (didSwap==0){
            break;
        }

    }
}

void quicksort(vector<int )

void Insertion_sort(vector <int>&arr){
    int n = arr.size();
    for(int i = 0 ; i < n-1 ; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
        
    }

}



int main() {
    vector <int> arr = {1,3,2,34,5652,23423};
    arr = sort(arr);
    Insertion_sort(arr);
    for(auto p : arr){
        cout << p << endl;
    }
    return 0;
}