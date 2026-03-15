#include <iostream>
using namespace std;

int main() {
    int n=12345,sum=0,i;
    for (i=n;i>0;i=i/10) {
        sum=sum+(i%10);
    }
    cout<<"Sum of digits: "<<sum<<endl;
    return 0;
}