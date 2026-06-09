/* #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum;
}  */


/*  #include<iostream>//factorial of number
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
} */



/* #include<iostream>  //count digits of a number
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int count=0;
    while(n>0){
        n=n/10;
        count=count+1;
    }
    cout<<count;
} */

/* #include<iostream>  //rev a number
using namespace std;
int main(){
    int n;
    int n2=n;
    cout<<"Enter n:";
    cin>>n;
    int rev=0;
    while(n>0){
       int  digit=n%10;
        rev = digit+rev*10;
        n=n/10;
        
    }
    cout<<rev;
}  */


 #include<iostream>  // check if it is a palindrome or not
using namespace std;
int main(){
    int n;

    cout<<"Enter n:";
    cin>>n;
    int n2=n;
    int rev=0;
    while(n>0){
       int  digit=n%10;
        rev = digit+rev*10;
        n=n/10;
    }
    cout<<rev<<endl;
    if(rev==n2){
        cout<<"it is a palindrome "<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
} 
//doubt

