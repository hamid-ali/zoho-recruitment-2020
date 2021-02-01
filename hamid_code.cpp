#include<bits/stdc++.h>
using namespace std;


void print(int n) 
{ 
    bool flag = false;
    int x = 0;
    for (int i = 0; i < n; i++) { 
        for(int k = 0 ; k< n-i-1 ; k++)
            cout<<" ";
        // if (i % 2 == 0) { 
            for (int j = 1; j <= n && !flag; j++) 
                cout << j+x ; 
  
        // } 
        // else { 
            for (int j = n; j > 0 &&  flag; j--) 
                cout <<j+x ; 
        // }
        cout<<endl; 
        x = x+n;
        flag = !flag ;
    } 
}  


int main(){
    int n ;
    cin>>n;
    print(n);
    return 0;
}
