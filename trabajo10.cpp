#include <iostream>
using namespace std;
int main()
{
    int m=99,n;
    n= ++m;
    cout<<"m="<<m; cout<<" n="<<n<<endl;
    n= ++m;
    cout<<"m="<<m; cout<<" n="<<n<<endl;
    cout<<"m="<<m++<<endl; 
    cout<<"m="<<++m<<endl;
    return 0;
}