def factorial(n):
      
    if n == 0:
        return 1
     
    return n * factorial(n-1)
  
num = int(input("Enter your value: "));
print("Factorial of", num, "is",
factorial(num))
