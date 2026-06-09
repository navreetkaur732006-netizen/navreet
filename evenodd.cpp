#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter n:"<<endl;
cin>>n;

/*   if(n%2==0){
    cout<<n<<"is even"<<endl;
}
else if(n%2!=0){
    cout<<n<<"is odd"<<endl;
}   */

if(n%5==0){
    cout<<n <<"is divisible by 5"<<endl;
}
else{
    cout<<n <<"is not divisible by 5";
}
}