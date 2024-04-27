//a raised b
#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==1) return a;//b==0 reyurn 1;
    return a*power(a,b-1);

}
int main(){
    int a;
    cout<<"enetr a";
    cin>>a;
    int b;
    cout<<"enetr b";
    cin>>b;
    cout<<power(a,b);

}
