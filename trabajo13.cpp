#include "iostream"
using namespace std;
int main()
{
    int n,menor,i;
    for ( i = 0; i < 5; i++)
    {
        cout<<"ingrese el numero "<<i+1<<endl;
        cin>>n;
        if (n<menor)
        {
            menor=n;
        }
    }
    cout<<"el numero menor es: "<<menor;
    return 0;
}