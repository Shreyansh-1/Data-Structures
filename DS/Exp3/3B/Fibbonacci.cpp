#include<iostream>
using namespace std;


int fib(int n)
{
    if(n<=1)
    {
        return(1);
    }
    else{
        return((fib(n-1)+fib(n-2)));
    }
}




int main()
{
    int n,x;
    cout<<"Enter the sequence end range : ";
    cin>>n;
    x = fib((n-1));
    cout<<"Fibonacci digit is : "<<x;
}


