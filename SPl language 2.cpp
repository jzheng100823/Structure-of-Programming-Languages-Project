// C++ program to find factorial of a given number
#include <iostream>
using namespace std;
 
// function to find factorial of given number
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
 
// Driver code
int main()
{
    cout<<"enter a number to find factorial  of"<<endl;
    int number;
    cin>>number;
    cout << "Factorial of "<< number << " is " << factorial(number) << endl;
    return 0;
}
