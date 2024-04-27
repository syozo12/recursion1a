//print n to 1
#include<iostream>
using namespace std;
int print(int n){
    if(n==0) return;
    cout<<n;
    print(n-1);

}
int main(){
    int n;
    cout<<"enetr th";
    cin>>n;
    print(n);

}