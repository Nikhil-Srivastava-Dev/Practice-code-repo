#include<iostream>
using namespace std;

int Fibonacci(int n){
    if (n < 2){
        return 1;
    }
    
    else{ 
        return (Fibonacci(n-2)+Fibonacci(n-1));
    }
}

int main()
{

	int n;
        cout<<"Enter the n-th no."<<endl;
    	cin>>n;
    	cout<<"The n-th term is "<<Fibonacci(n)<<endl;
	return 0;
}
