#include<iostream>
using namespace std;
int main(){
    int n;
    int a=0,b=1,c;
  
    cout<<"enter the number=";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
        

    }
}