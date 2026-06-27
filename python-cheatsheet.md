# ============================================
# PYTHON SYNTAX CHEAT SHEET - BOILERPLATE
# ============================================

# ---------- 1. BASIC SYNTAX & OUTPUT ----------
# This is a single-line comment
"""
This is a
multi-line comment/docstring
"""

print("Hello, World!")                    # Basic output
print("Name:", "John", "Age:", 25)       # Multiple items
print(f"Formatted: {2 + 2}")             # f-string (Python 3.6+)
print("Formatted: {}".format("value"))   # .format() method

# ---------- 2. VARIABLES & DATA TYPES ----------
# Dynamic typing - no declaration needed
name = "John"              # String
age = 25                   # Integer
height = 5.9              # Float
is_student = True          # Boolean
nothing = None             # NoneType (null)

# Type checking and conversion
print(type(name))          # <class 'str'>
print(int("123"))          # 123 (string to int)
print(str(456))            # "456" (int to string)
print(float("3.14"))       # 3.14 (string to float)
print(bool(1))             # True (int to bool)

# Multiple assignment
x, y, z = 1, 2, 3         # Unpacking
a = b = c = 0              # Same value to multiple variables

# ---------- 3. NUMBERS & MATH ----------
import math

# Basic operations
result = 10 + 3            # Addition
result = 10 - 3            # Subtraction
result = 10 * 3            # Multiplication
result = 10 / 3            # Division (float)
result = 10 // 3           # Floor division (int)
result = 10 % 3            # Modulus (remainder)
result = 10 ** 3           # Exponentiation

# Math module
math.sqrt(16)              # Square root
math.ceil(4.2)             # Round up
math.floor(4.8)            # Round down
abs(-5)                    # Absolute value
round(3.14159, 2)          # Round to 2 decimal places

# ---------- 4. STRINGS ----------
text = "Hello, World!"

# String methods
text.upper()               # "HELLO, WORLD!"
text.lower()               # "hello, world!"
text.capitalize()          # "Hello, world!"
text.title()               # "Hello, World!"
text.strip()               # Remove whitespace
text.replace("Hello", "Hi") # Replace substring
text.split(",")            # ['Hello', ' World!']
" ".join(['a', 'b', 'c']) # "a b c"
text.startswith("Hello")   # True
text.endswith("!")         # True
len(text)                  # String length
"Hello" in text            # True (check substring)
text[0]                    # 'H' (indexing)
text[-1]                   # '!' (negative indexing)
text[0:5]                  # 'Hello' (slicing)

# String formatting
name = "Alice"
f"My name is {name}"       # f-string
"My name is {}".format(name) # format method
"My name is %s" % name     # % formatting

# ---------- 5. LISTS ----------
fruits = ["apple", "banana", "cherry"]

# List operations
fruits.append("orange")    # Add item to end
fruits.insert(1, "mango")  # Insert at position
fruits.remove("banana")    # Remove by value
fruits.pop()               # Remove last item
fruits.pop(0)              # Remove item at index
fruits.index("cherry")     # Find index of value
fruits.count("apple")      # Count occurrences
fruits.sort()              # Sort in place
fruits.reverse()           # Reverse in place
sorted_fruits = sorted(fruits) # Return sorted copy

# List slicing
fruits[0:2]                # First 2 items
fruits[-2:]                # Last 2 items
fruits[::-1]               # Reverse the list

# List comprehension
numbers = [x for x in range(10)]           # [0,1,2,...,9]
squares = [x**2 for x in range(10)]        # [0,1,4,9,...,81]
evens = [x for x in range(10) if x % 2 == 0] # [0,2,4,6,8]

# ---------- 6. TUPLES (Immutable) ----------
coordinates = (10, 20)
single_tuple = (1,)        # Need comma for single item
mixed = (1, "hello", 3.14)

# Tuple unpacking
x, y = coordinates         # x=10, y=20

# ---------- 7. DICTIONARIES ----------
person = {
    "name": "John",
    "age": 30,
    "city": "New York"
}

# Dictionary operations
person["name"]             # Access value
person["email"] = "john@example.com" # Add/Update key
person.get("phone", "Not found") # Get with default
person.keys()              # All keys
person.values()            # All values
person.items()             # All key-value pairs
person.pop("age")          # Remove key
"name" in person           # Check key exists

# Dictionary comprehension
squares = {x: x**2 for x in range(5)} # {0:0, 1:1, 2:4, 3:9, 4:16}

# ---------- 8. SETS ----------
my_set = {1, 2, 3, 4, 5}
my_set.add(6)              # Add element
my_set.remove(3)           # Remove (raises error if not found)
my_set.discard(3)          # Remove (no error if not found)

# Set operations
a = {1, 2, 3}
b = {3, 4, 5}
a | b                      # Union: {1,2,3,4,5}
a & b                      # Intersection: {3}
a - b                      # Difference: {1,2}
a ^ b                      # Symmetric difference: {1,2,4,5}

# ---------- 9. CONDITIONALS ----------
age = 18

if age >= 18:
    print("Adult")
elif age >= 13:
    print("Teenager")
else:
    print("Child")

# Ternary operator
status = "Adult" if age >= 18 else "Minor"

# Logical operators
if age >= 18 and is_student:
    print("Adult student")
if age < 18 or age > 65:
    print("Not working age")
if not is_student:
    print("Not a student")

# ---------- 10. LOOPS ----------
# For loop
for i in range(5):         # 0,1,2,3,4
    print(i)

for i in range(2, 5):     # 2,3,4
    print(i)

for i in range(0, 10, 2): # 0,2,4,6,8 (step)
    print(i)

for fruit in fruits:       # Iterate over list
    print(fruit)

for key, value in person.items(): # Iterate dictionary
    print(f"{key}: {value}")

for index, fruit in enumerate(fruits): # With index
    print(f"{index}: {fruit}")

# While loop
count = 0
while count < 5:
    print(count)
    count += 1

# Loop control
break                      # Exit loop immediately
continue                   # Skip to next iteration
pass                       # Do nothing (placeholder)

# ---------- 11. FUNCTIONS ----------
def greet(name, greeting="Hello"):
    """This is a docstring."""
    return f"{greeting}, {name}!"

# Function calls
greet("Alice")             # Uses default greeting
greet("Bob", "Hi")         # Custom greeting
greet(greeting="Hey", name="Charlie") # Keyword arguments

# *args and **kwargs
def sum_all(*args):        # Variable positional arguments
    return sum(args)

sum_all(1, 2, 3, 4)       # 10

def print_info(**kwargs):  # Variable keyword arguments
    for key, value in kwargs.items():
        print(f"{key}: {value}")

print_info(name="John", age=30)

# Lambda functions
square = lambda x: x ** 2
add = lambda x, y: x + y

# ---------- 12. CLASSES & OOP ----------
class Dog:
    # Class attribute
    species = "Canis familiaris"
    
    def __init__(self, name, age):  # Constructor
        self.name = name            # Instance attribute
        self.age = age
    
    def bark(self):                 # Instance method
        return f"{self.name} says woof!"
    
    @classmethod                    # Class method
    def get_species(cls):
        return cls.species
    
    @staticmethod                   # Static method
    def is_good_boy():
        return True

# Inheritance
class Puppy(Dog):
    def __init__(self, name, age, toy):
        super().__init__(name, age)
        self.toy = toy
    
    def play(self):
        return f"{self.name} plays with {self.toy}"

# Creating instances
my_dog = Dog("Rex", 5)
print(my_dog.bark())

# ---------- 13. FILE HANDLING ----------
# Reading files
with open("file.txt", "r") as f:
    content = f.read()             # Read entire file
    # line = f.readline()          # Read one line
    # lines = f.readlines()        # Read all lines into list

# Writing files
with open("output.txt", "w") as f:
    f.write("Hello, World!\n")
    f.write("Second line\n")

# Appending to files
with open("output.txt", "a") as f:
    f.write("Appended line\n")

# ---------- 14. EXCEPTION HANDLING ----------
try:
    result = 10 / 0
    # Risky code
except ZeroDivisionError as e:
    print(f"Error: {e}")
except (TypeError, ValueError) as e:
    print(f"Type or Value error: {e}")
except Exception as e:     # Catch all (use sparingly)
    print(f"Unexpected error: {e}")
else:
    print("No errors occurred")
finally:
    print("This always runs")

# Raising exceptions
def divide(a, b):
    if b == 0:
        raise ValueError("Cannot divide by zero")
    return a / b

# ---------- 15. IMPORTS ----------
import math                 # Import entire module
from math import sqrt       # Import specific function
from math import *          # Import everything (not recommended)
import numpy as np          # Import with alias

# ---------- 16. LIST/DICT/SET COMPREHENSIONS ----------
# List comprehension
evens = [x for x in range(20) if x % 2 == 0]
matrix = [[j for j in range(3)] for i in range(3)]

# Dict comprehension
word_lengths = {word: len(word) for word in ["hi", "hello", "hey"]}

# Set comprehension
unique_lengths = {len(word) for word in ["hi", "hello", "hey"]}

# ---------- 17. ENUMERATE & ZIP ----------
fruits = ["apple", "banana", "cherry"]
prices = [1.0, 0.5, 2.0]

# Enumerate
for i, fruit in enumerate(fruits):
    print(f"{i}: {fruit}")

# Zip
for fruit, price in zip(fruits, prices):
    print(f"{fruit}: ${price}")

# ---------- 18. COMMON BUILT-IN FUNCTIONS ----------
len([1, 2, 3])             # Length: 3
sum([1, 2, 3])             # Sum: 6
max([1, 2, 3])             # Maximum: 3
min([1, 2, 3])             # Minimum: 1
sorted([3, 1, 2])          # [1, 2, 3]
reversed([1, 2, 3])        # Iterator: 3,2,1
any([True, False, True])   # True (at least one)
all([True, True, False])   # False (all must be True)
enumerate([1, 2, 3])       # Iterator: (0,1),(1,2),(2,3)
zip([1, 2], ['a', 'b'])    # Iterator: (1,'a'),(2,'b')
map(str, [1, 2, 3])        # Iterator: '1','2','3'
filter(bool, [0, 1, 0, 2]) # Iterator: 1,2

# ---------- 19. DECORATORS ----------
def timer_decorator(func):
    def wrapper(*args, **kwargs):
        import time
        start = time.time()
        result = func(*args, **kwargs)
        end = time.time()
        print(f"{func.__name__} took {end-start:.4f} seconds")
        return result
    return wrapper

@timer_decorator
def slow_function():
    import time
    time.sleep(1)
    print("Done!")

# ---------- 20. GENERATORS ----------
def count_up_to(n):
    count = 0
    while count < n:
        yield count
        count += 1

# Using generator
for num in count_up_to(5):
    print(num)  # 0,1,2,3,4

# Generator expression
squares = (x**2 for x in range(10))  # Similar to list comp but lazy

# ============================================
# QUICK REFERENCE: Common Patterns
# ============================================

# Pattern 1: Safe dictionary access
value = my_dict.get(key, default_value)

# Pattern 2: Flatten list of lists
flat = [item for sublist in list_of_lists for item in sublist]

# Pattern 3: Remove duplicates from list while preserving order
unique = list(dict.fromkeys(my_list))

# Pattern 4: Count frequencies
from collections import Counter
counts = Counter(my_list)

# Pattern 5: Default dictionary
from collections import defaultdict
d = defaultdict(list)  # Default value is empty list

# Pattern 6: Named tuple for simple classes
from collections import namedtuple
Point = namedtuple('Point', ['x', 'y'])
p = Point(10, 20)

# Pattern 7: Check if file exists
import os
if os.path.exists("file.txt"):
    print("File exists")

# ============================================
print("Python Cheat Sheet Loaded Successfully!")
# ============================================