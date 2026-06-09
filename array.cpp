/*  #include<iostream>
using namespace std;
int main(){
    int a[5]={1,3,8,0,5};
    int b[3];
    for(int i=1;i<=5;i++){
        cout<<a[i]<<endl;

    }
}  */

#include<iostream>
using namespace std;
int main(){
    int a[5];
    for(int i=1;i<=5;i++){
        cout<<"enter number "<<i<<":"<<endl;
        cin>>a[i];
        }
    cout<<"the elements of array are this : "<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i];
    }
    
}