#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter any 2 number:";
    cin>>a>>b;

    char op;
    cout<<"Enter any operator:";
    cin>>op;

    switch(op)
    {
        case'+':
        cout<<a+b<<endl;
        break;

        case'-':
        cout<<a-b<<endl;
        break;

        case'*':
        cout<<a*b<<endl;
        break;
        
        case'/':
        cout<<a/b<<endl;
        break;

        default:
        cout<<"Enter any valid operator";
        break;
        }
        return 0;
}
