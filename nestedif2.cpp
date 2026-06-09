#include<iostream>
using namespace std;
int main(){
    string n;
    cout<<"enter name of student: "<<endl;
    cin>>n;
    int marks ;
    cout<<"enter first sem marks: "<<endl;
    cin>>marks;
    if(marks>=60){
        int m2;
        cout<<"enter second sem marks: "<<endl;
        cin>>m2;
        int result=marks+m2;
    
    if(result>70){
        cout<<"merit "<<endl;
    }
     else{
        cout<<"not a merit "<<endl;
    }
    }
    else{
        cout<<"you cannot go for sem 2 marks"<<endl;
    }
    
}