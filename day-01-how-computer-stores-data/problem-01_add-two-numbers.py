# Problem: add two numbers entered by the user

# 1) read the input from the user (input() return text)
num1_text = input("Enter first number: ")
num2_text = input("Enter second number: ")

# 2) convert text into integer numbers
num1 = int(num1_text)
num2 = int(num2_text)

# 3) compute sum
result = num1 + num2

# 4) print the result
print("Sum is: ", result)