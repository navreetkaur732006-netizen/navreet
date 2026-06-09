#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age : " <<endl;
    cin>>age;
    if(age>=18){
        string result;
        cout<<"enter result: ";
        cin>>result;
        if(result=="p"){
            cout<<"eligible ";

        }else{
                cout<<"not eligible ";
            }
    }else{
        cout<<"you are underage";
    }
    return 0;
}