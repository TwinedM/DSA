#include <bits/stdc++.h>
using namespace std;

/* 
we make another array known as visited which has been initialised as false array initially
as we traverse the normal array and check the element in the whole array after that we update the visited array to true
and we repeat this process while also keeping a count of the number of element we get in the array */
 
void Highest_occuring_brute(int arr[] , int n){  // Time - O(N*N) Space = O(Ns)

    vector<bool> visited(n,false);
    vector<pair<int,int>>arrcount;
    int maxFreq = 0;
    int element = -1;
    for(int i = 0 ; i < n ; i++){
        if(visited[i] == true)
        continue;

        int count = 1;
        for(int j = i+ 1 ; j<n ; j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }

        arrcount.push_back({arr[i],count});
    }  
    for(auto p: arrcount){
        if(p.second > maxFreq){
            maxFreq = p.second;
            element = p.first;
        }
    }
    cout << "Element: "<< element << endl;
    cout << "Frequency "<< maxFreq << endl;
    
}


void Hashing_optimised(int arr[] , int n){
    unordered_map<int , int> mpp;
    for (int i = 0 ;  i < n ; i++)
        mpp[arr[i]]++;
    for (auto it : mpp){
        cout << it.first << " " << it.second<< endl;
    }
}

void Hashing_brute(int arr[]){
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <bool> visited(n , false);
    for(int i = 0 ; i < n ; i++){
        if(visited[i] = true)
        continue;

        int count = 1;
        for(int j = i+1 ; j < n ; j++){
            if(arr[i] == arr[j])
            visited[j] = true;
            count++;

        }
    cout << arr[i] << count << endl;
    }
     

}


void Highest_occuring_optim(vector <int>&arr){ // Time complexity = O(N) , Space Complexity = O(N)
    unordered_map <int , int> mpp;
    int maxFreq = 0;
    int element = -1;
    for(int i = 0 ; i < arr.size() ; i++){
        mpp[arr[i]]++;
    }
    for(auto p:mpp){
        if(p.second > maxFreq){
            maxFreq = p.second;
            element = p.first;
        }
    }
    cout << "Element " << element << endl;
    cout << "Frequency" << maxFreq << endl;
}



int main() {
    vector <int> arr = {5,15,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    Highest_occuring_optim(arr);
    
    return 0;
}