#include "iostream"
using namespace std;
int main()
{
    int n=5,t;
    t= ++n * --n;
    cout<<"n="<<n; cout<<" t="<<t<<endl;
    cout<<++n<<endl; 
    cout<<++n<<endl; 
    cout<<++n<<endl;
    return 0;
}