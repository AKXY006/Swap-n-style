#include<iostream>
using namespace std;
int main (){

    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(b>c){
            cout<<"b"<<endl;
        }
        else if(c>b){
            cout<<"c"<<endl;
        }
        else
        {
            cout<<"a"<<endl;
        }
    }
}