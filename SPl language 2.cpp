// C++ program to find factorial of a given number
#include <iostream> //these are include files that are needed in the file
using namespace std;
 
// function to find factorial of given number
int factorial(int n) // this declared the factorial function which passes a integer to the function
{
    if (n == 0) //this is the base case 
        return 1;
    return n * factorial(n - 1); // this is the equation/function to implement factorial
}
 
// Driver code
int main()
{
    cout<<"enter a number to find factorial  of"<<endl; // prints to tells the user to input any number they want to find factorial of
    int number; //declares the integer that will store the user input and the number that is used 
    cin>>number; // actually gets the number from the user
    cout << "Factorial of "<< number << " is " << factorial(number) << endl; // prints out the factorial of the nummber
    return 0;
}
