# Structure-of-Programming-Languages-Project
For this these file to run you can use visual studio code to run them
This project compares 3 different concepts from two different multiparadigm languages
The two languages are C++ and python 
The two programs both tells the user to enter a number and it will calculate the factorial of that number

The 3 different concepts that I will be comparing is the 
1) The dfferent implementation models they use
2) The different garbage collection methods
3)The different of parameter passing methods used in the program 

1) C++ is a compiled language and Python is an interpreted language and their implementation model is different  For example in a typical C++ file you need to include other files and libraries 
to use the functions like how you have to include the iostream to get user inputs and to write to other files like in the factorial program where it gets the user input so you need
to include those files to use it. In python there are alot of less restriction such as being able to print without using files and libraries such as that of C++. Also the data types
that are in C++ are bounded to variables that are checked at compile time so it reduces errors at runtime and in Python the data types are bounded to the values so they are checked at runtime so there is more error-prone in 
python programming. To run a typical C++ program the compiler generates a object code from the source code which then is executed and in Python all you need to do is pass the code to
the interpreter which will then run the code.

2)Python uses reference count garabage collection as its garbage collection method. Basically every time a object or instance of a function is referenced 
the reference count is incremented and every time the object is dereferenced the reference count is decremented. Whereas C++ does not have a automatic garbage collecting method
you would need to keep track of memory in the heap and the stack that is why things such as dangling pointers can often occur in C++ programs in C++ you would new to use keywords
such as new and delete to keep track of memory.


3) Between Python and C++ they have quite similar and different parameter passing methods in C++. C++ parameter passing can be pass by reference or pass by value. 
while in Python usuallly mostly uses pass by reference. In python we pass parameters by passing arguments for example in the factorial we pass num to the function factorial hence
factorial(num). In C++ in order to pass by reference is is very important that you use the key symbol & next to the variable which implies pass by reference and then you would be
able to use that function u passed the variable to in your function.There alot of restrictions on the type of parameters in funtion and in Python there are little to no restrictions
on the type of parameters used in a function.
