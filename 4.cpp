//sum 1 to n
#include<iostream>
using namespace std;
int sum(int n){
    if(n==1) return 1;
    return n+sum(n-1);

}
int sum2(int sum,int n){
    if(n==0) return sum;
    return sum2(sum+n,n-1);
}
int main(){
     int n;
    cout<<"enetr th";
    cin>>n;
    cout<<sum(n);
    cout<<sum2(0,n);

}