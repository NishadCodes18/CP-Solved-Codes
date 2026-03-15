#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=1,c=0,i;
    cout<<"Fibonacci series: ";
    for (i=0;i<=n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;           
    }
    cout<<endl;
    return 0;
}