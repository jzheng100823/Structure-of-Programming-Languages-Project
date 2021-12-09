def factorial(n): #creates the factorial function
      
    if n == 0:   #this is the base case 
        return 1
     
    return n * factorial(n-1)  # this is what actually calculates the factorial 
  
num = int(input("Enter your value: ")); # this gets the user input 
print("Factorial of", num, "is", #this prints out the result to the user
factorial(num)) # this is what actually calls the factorial function
