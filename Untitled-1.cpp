#include <bits/stdc++.h>
using namespace std;

bool primenum(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i ==0){
            return false; 
        }
    }
    return true;
}

int uocsomax(int n){
    int tempp;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            tempp = i;
        }
    }
    return tempp;
}

int main (){
    int n, arr[100];
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++){
        if (primenum(uocsomax(arr[i]))){
            temp = uocsomax(arr[i]);
        }
        cout<<temp;
    }
    
    return 0;
}