#include<bits/stdc++.h>
using namespace std;

int main (){
    int n; cin>>n;
    if(n==1){
    int a= 2;
    int b= 3;
    cout<<a+b<<endl;
    }
    /*if(n==2){
        cout<<"hello sohan"<<endl;
    }*/
   /* else{
        cout<<"hello ami sohan"<<endl;
    }*/
    if(n >=18){
        cout<<"You are eligible for voting!!"<<endl;
    }
    if(n<=18){
        cout<<"You are not eligible for voting!! So, wait!!"<<endl;
    }
    if(n >=60){
        cout<<"Now you are senior citizen!!"<<endl;
    }
    if(n>=80){
        cout<<"You are very old, please keep yourself safe!!God bless you!!"<<endl;
    }
    return 0;

}
