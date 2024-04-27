//print 1 to n
#include<iostream>
using namespace std;
int print(int n){
    if(n==0){
        return 0;
    }
    else  print(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enetr th";
    cin>>n;
    print(n);
}