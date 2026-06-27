// ============================================
// JAVA SYNTAX CHEAT SHEET - BOILERPLATE
// ============================================

// ---------- 0. BASIC PROGRAM STRUCTURE ----------
// File must be named: Main.java (matches public class name)
package com.example;  // Optional package declaration

import java.util.*;     // Wildcard import
import java.util.List;  // Single class import
import java.util.ArrayList;
import static java.lang.Math.*;  // Static import (for methods)

public class Main {
    // Main method - entry point
    public static void main(String[] args) {
        System.out.println("Hello, World!");
    }
}

// ---------- 1. COMMENTS ----------
// Single-line comment

/*
 * Multi-line comment
 */

/**
 * Javadoc comment - used for documentation
 * @param name description
 * @return description
 */

// ---------- 2. VARIABLES & DATA TYPES ----------
public class Variables {
    public static void main(String[] args) {
        // Primitive data types
        byte b = 127;               // 1 byte, -128 to 127
        short s = 32767;            // 2 bytes, -32,768 to 32,767
        int i = 2147483647;         // 4 bytes
        long l = 9223372036854775807L; // 8 bytes, note 'L' suffix
        float f = 3.14f;            // 4 bytes, note 'f' suffix
        double d = 3.14159265359;   // 8 bytes
        char c = 'A';               // 2 bytes, Unicode
        boolean bool = true;        // true or false

        // Constants
        final int MAX_SIZE = 100;
        final double PI = 3.14159;

        // Type casting
        int x = (int) 3.14;         // Explicit (narrowing)
        double y = 10;              // Implicit (widening)

        // Wrapper classes (objects)
        Integer intObj = 42;        // Autoboxing
        int primitiveInt = intObj;   // Unboxing
        Double dObj = 3.14;
        Boolean bObj = true;
        Character cObj = 'A';
    }
}

// ---------- 3. OUTPUT & INPUT ----------
import java.util.Scanner;

public class IO {
    public static void main(String[] args) {
        // Output
        System.out.println("Hello");           // With newline
        System.out.print("Hello ");            // Without newline
        System.out.printf("%s is %d years old%n", "John", 25);

        // Formatted print
        System.out.printf("Integer: %d%n", 42);
        System.out.printf("Float: %.2f%n", 3.14159);  // 2 decimal places
        System.out.printf("String: %s%n", "text");

        // Input with Scanner
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter name: ");
        String name = scanner.nextLine();      // Whole line
        
        System.out.print("Enter age: ");
        int age = scanner.nextInt();           // Integer input
        
        System.out.print("Enter salary: ");
        double salary = scanner.nextDouble();  // Double input

        scanner.close();  // Close scanner when done
    }
}

// ---------- 4. STRINGS ----------
public class StringOperations {
    public static void main(String[] args) {
        String str = "Hello, World!";

        // String methods
        str.length();                          // Length: 13
        str.toUpperCase();                     // "HELLO, WORLD!"
        str.toLowerCase();                     // "hello, world!"
        str.trim();                            // Remove whitespace
        str.substring(0, 5);                   // "Hello" (start, end-1)
        str.substring(7);                      // "World!" (from index to end)
        str.replace("Hello", "Hi");            // Replace
        str.replaceAll("[aeiou]", "*");        // Regex replace
        str.charAt(0);                         // 'H'
        str.indexOf("World");                  // 7
        str.contains("Hello");                 // true
        str.startsWith("He");                  // true
        str.endsWith("!");                     // true
        str.equals("Hello, World!");           // true (content comparison)
        str.equalsIgnoreCase("hello, world!"); // true
        str.isEmpty();                         // false
        str.split(",");                        // ["Hello", " World!"]
        
        // String concatenation
        String combined = "Hello" + " " + "World";
        StringBuilder sb = new StringBuilder();
        sb.append("Hello");
        sb.append(" ");
        sb.append("World");
        String result = sb.toString();

        // String formatting
        String formatted = String.format("Name: %s, Age: %d", "John", 25);
        
        // String comparison (IMPORTANT!)
        // Use .equals() NOT == for content comparison
        String a = "hello";
        String b = "hello";
        a.equals(b);          // true (correct way)
        a == b;               // true ONLY because of string pool (unsafe)
        
        String c = new String("hello");
        a == c;               // false (different objects)
        a.equals(c);          // true (correct comparison)
    }
}

// ---------- 5. ARRAYS ----------
public class ArraysDemo {
    public static void main(String[] args) {
        // Array declaration and initialization
        int[] numbers = new int[5];              // [0,0,0,0,0]
        int[] nums = {1, 2, 3, 4, 5};           // Initialized
        String[] names = {"Alice", "Bob", "Charlie"};
        
        // Access and modify
        nums[0] = 10;
        int first = nums[0];
        int last = nums[nums.length - 1];
        
        // Multi-dimensional arrays
        int[][] matrix = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        matrix[1][2] = 10;  // Row 1, Column 2
        
        // Array utility methods
        int[] arr = {3, 1, 4, 1, 5};
        Arrays.sort(arr);                      // Sort in place
        int[] copy = Arrays.copyOf(arr, 3);    // Copy first 3 elements
        int[] range = Arrays.copyOfRange(arr, 1, 4); // Copy range
        boolean equal = Arrays.equals(arr, copy); // Compare
        String arrStr = Arrays.toString(arr);  // [1, 1, 3, 4, 5]
        int index = Arrays.binarySearch(arr, 3); // Search sorted array
        Arrays.fill(arr, 0);                   // Fill with 0
    }
}

// ---------- 6. ARRAYLIST & COLLECTIONS ----------
import java.util.ArrayList;
import java.util.List;
import java.util.LinkedList;
import java.util.HashMap;
import java.util.HashSet;

public class CollectionsDemo {
    public static void main(String[] args) {
        // ArrayList (dynamic array)
        List<String> fruits = new ArrayList<>();
        fruits.add("Apple");          // Add to end
        fruits.add(0, "Mango");       // Add at index
        fruits.get(0);                // Access by index
        fruits.set(0, "Banana");      // Update element
        fruits.remove("Apple");       // Remove by value
        fruits.remove(1);             // Remove by index
        fruits.size();                // Size
        fruits.contains("Apple");     // Check existence
        fruits.clear();               // Remove all
        fruits.isEmpty();             // Check if empty
        
        // Iteration
        for (String fruit : fruits) {       // Enhanced for loop
            System.out.println(fruit);
        }
        
        fruits.forEach(fruit ->             // Lambda
            System.out.println(fruit)
        );
        
        // LinkedList (faster insertions/deletions)
        List<Integer> linkedList = new LinkedList<>();
        
        // HashMap (key-value pairs)
        HashMap<String, Integer> scores = new HashMap<>();
        scores.put("Alice", 95);             // Add/Update
        scores.get("Alice");                 // Get value (null if not found)
        scores.getOrDefault("Bob", 0);       // Get with default
        scores.containsKey("Alice");         // Check key exists
        scores.containsValue(95);            // Check value exists
        scores.remove("Alice");              // Remove entry
        scores.size();                       // Number of entries
        
        // HashMap iteration
        for (Map.Entry<String, Integer> entry : scores.entrySet()) {
            System.out.println(entry.getKey() + ": " + entry.getValue());
        }
        
        scores.forEach((key, value) ->       // Lambda iteration
            System.out.println(key + ": " + value)
        );
        
        // HashSet (unique elements, no order)
        Set<String> uniqueNames = new HashSet<>();
        uniqueNames.add("Alice");
        uniqueNames.add("Bob");
        uniqueNames.add("Alice");            // Duplicate, won't be added
        uniqueNames.contains("Alice");       // Check existence
    }
}

// ---------- 7. OPERATORS ----------
public class Operators {
    public static void main(String[] args) {
        int a = 10, b = 3;
        
        // Arithmetic
        int sum = a + b;
        int diff = a - b;
        int prod = a * b;
        int quot = a / b;        // Integer division
        int mod = a % b;         // Modulus
        double div = (double) a / b; // Floating-point division
        
        // Comparison
        a == b;    // Equal
        a != b;    // Not equal
        a < b;     // Less than
        a > b;     // Greater than
        a <= b;    // Less than or equal
        a >= b;    // Greater than or equal
        
        // Logical
        (a > 5) && (b < 10);    // AND
        (a > 5) || (b > 10);    // OR
        !(a > 5);               // NOT
        
        // Assignment shortcuts
        a += 5;    // a = a + 5
        a -= 5;    // a = a - 5
        a *= 5;    // a = a * 5
        a /= 5;    // a = a / 5
        a %= 5;    // a = a % 5
        a++;       // Increment by 1
        a--;       // Decrement by 1
        
        // Ternary operator
        int max = (a > b) ? a : b;
        
        // Bitwise
        a & b;     // AND
        a | b;     // OR
        a ^ b;     // XOR
        ~a;        // NOT
        a << 1;    // Left shift
        a >> 1;    // Right shift
        
        // instanceof
        String str = "Hello";
        boolean isString = str instanceof String;  // true
    }
}

// ---------- 8. CONDITIONALS ----------
public class Conditionals {
    public static void main(String[] args) {
        int age = 18;
        
        // If-else
        if (age >= 18) {
            System.out.println("Adult");
        } else if (age >= 13) {
            System.out.println("Teenager");
        } else {
            System.out.println("Child");
        }
        
        // Switch statement
        String day = "Monday";
        switch (day) {
            case "Monday":
                System.out.println("Start of week");
                break;
            case "Friday":
                System.out.println("TGIF!");
                break;
            case "Saturday":
            case "Sunday":
                System.out.println("Weekend!");
                break;
            default:
                System.out.println("Midweek");
        }
        
        // Switch expression (Java 14+)
        String dayType = switch (day) {
            case "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" 
                -> "Weekday";
            case "Saturday", "Sunday" -> "Weekend";
            default -> "Invalid";
        };
    }
}

// ---------- 9. LOOPS ----------
public class Loops {
    public static void main(String[] args) {
        // For loop
        for (int i = 0; i < 5; i++) {
            System.out.print(i + " ");
        }
        // Output: 0 1 2 3 4
        
        // Enhanced for loop (for-each)
        int[] numbers = {1, 2, 3, 4, 5};
        for (int num : numbers) {
            System.out.print(num + " ");
        }
        
        // While loop
        int count = 0;
        while (count < 5) {
            System.out.print(count + " ");
            count++;
        }
        
        // Do-while loop (always executes at least once)
        int i = 0;
        do {
            System.out.print(i + " ");
            i++;
        } while (i < 5);
        
        // Loop control
        break;      // Exit loop
        continue;   // Skip to next iteration
    }
}

// ---------- 10. METHODS ----------
public class Methods {
    // Method definition
    public static int add(int a, int b) {
        return a + b;
    }
    
    // Void method (no return)
    public static void greet(String name) {
        System.out.println("Hello, " + name + "!");
    }
    
    // Method with varargs
    public static int sum(int... numbers) {
        int total = 0;
        for (int num : numbers) {
            total += num;
        }
        return total;
    }
    
    // Method overloading (same name, different parameters)
    public static int multiply(int a, int b) {
        return a * b;
    }
    
    public static double multiply(double a, double b) {
        return a * b;
    }
    
    public static void main(String[] args) {
        int result = add(5, 3);           // 8
        greet("Alice");                    // Hello, Alice!
        int total = sum(1, 2, 3, 4);      // 10
    }
}

// ---------- 11. CLASSES & OOP ----------
public class OOP {
    public static void main(String[] args) {
        // Creating objects
        Person person = new Person("John", 30);
        person.greet();
        
        // Inheritance example
        Dog dog = new Dog("Rex", 5, "Golden Retriever");
        dog.makeSound();  // Overridden method
        dog.fetch();      // Dog-specific method
    }
}

// Base class
class Animal {
    // Instance variables
    protected String name;
    protected int age;
    
    // Constructor
    public Animal(String name, int age) {
        this.name = name;
        this.age = age;
    }
    
    // Method
    public void makeSound() {
        System.out.println("Some generic sound");
    }
    
    // Getters and setters
    public String getName() {
        return name;
    }
    
    public void setName(String name) {
        this.name = name;
    }
    
    public int getAge() {
        return age;
    }
    
    public void setAge(int age) {
        this.age = age;
    }
    
    // toString method
    @Override
    public String toString() {
        return "Animal{name='" + name + "', age=" + age + "}";
    }
}

// Derived class (Inheritance)
class Dog extends Animal {
    private String breed;
    
    public Dog(String name, int age, String breed) {
        super(name, age);  // Call parent constructor
        this.breed = breed;
    }
    
    // Method overriding
    @Override
    public void makeSound() {
        System.out.println("Woof! Woof!");
    }
    
    // Dog-specific method
    public void fetch() {
        System.out.println(name + " is fetching the ball!");
    }
    
    // Getter and setter for breed
    public String getBreed() {
        return breed;
    }
    
    public void setBreed(String breed) {
        this.breed = breed;
    }
}

// Person class with various features
class Person {
    // Instance variables
    private String name;
    private int age;
    private String email;
    
    // Static variable (shared across all instances)
    private static int personCount = 0;
    
    // Constructor
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
        personCount++;
    }
    
    // Constructor overloading
    public Person(String name, int age, String email) {
        this(name, age);  // Call other constructor
        this.email = email;
    }
    
    // Method
    public void greet() {
        System.out.println("Hi, I'm " + name);
    }
    
    // Static method
    public static int getPersonCount() {
        return personCount;
    }
    
    // Getters and Setters (Encapsulation)
    public String getName() {
        return name;
    }
    
    public void setName(String name) {
        this.name = name;
    }
    
    public int getAge() {
        return age;
    }
    
    public void setAge(int age) {
        if (age >= 0) {  // Validation
            this.age = age;
        }
    }
    
    public String getEmail() {
        return email;
    }
    
    public void setEmail(String email) {
        this.email = email;
    }
}

// ---------- 12. INTERFACES & ABSTRACT CLASSES ----------
// Interface
interface Flyable {
    void fly();                    // Abstract method
    default void land() {          // Default method (Java 8+)
        System.out.println("Landing...");
    }
    static void check() {          // Static method (Java 8+)
        System.out.println("Checked");
    }
}

// Another interface
interface Swimmable {
    void swim();
}

// Implementing interfaces
class Bird implements Flyable {
    @Override
    public void fly() {
        System.out.println("Bird is flying");
    }
}

// Multiple interface implementation
class Duck implements Flyable, Swimmable {
    @Override
    public void fly() {
        System.out.println("Duck is flying");
    }
    
    @Override
    public void swim() {
        System.out.println("Duck is swimming");
    }
}

// Abstract class
abstract class Shape {
    protected String color;
    
    public Shape(String color) {
        this.color = color;
    }
    
    // Abstract method (no implementation)
    abstract double getArea();
    
    // Concrete method
    public String getColor() {
        return color;
    }
}

// Extending abstract class
class Circle extends Shape {
    private double radius;
    
    public Circle(String color, double radius) {
        super(color);
        this.radius = radius;
    }
    
    @Override
    double getArea() {
        return Math.PI * radius * radius;
    }
}

// ---------- 13. EXCEPTION HANDLING ----------
public class ExceptionHandling {
    public static void main(String[] args) {
        // Try-catch
        try {
            int result = 10 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Error: " + e.getMessage());
            e.printStackTrace();  // Print stack trace
        }
        
        // Multiple catches
        try {
            int[] arr = new int[5];
            arr[10] = 50;  // ArrayIndexOutOfBoundsException
        } catch (ArithmeticException e) {
            System.out.println("Math error: " + e.getMessage());
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array index error: " + e.getMessage());
        } catch (Exception e) {  // Catch all (use last)
            System.out.println("General error: " + e.getMessage());
        }
        
        // Try-catch-finally
        try {
            // Risky code
        } catch (Exception e) {
            System.out.println("Error occurred");
        } finally {
            System.out.println("This always executes");
        }
        
        // Try-with-resources (auto-close)
        try (Scanner scanner = new Scanner(System.in)) {
            String input = scanner.nextLine();
        }  // Scanner automatically closed
        
        // Throw exception
        try {
            validateAge(15);
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
    
    // Method that throws exception
    public static void validateAge(int age) throws IllegalArgumentException {
        if (age < 18) {
            throw new IllegalArgumentException("Age must be 18+");
        }
    }
}

// Custom exception
class InvalidAgeException extends Exception {
    public InvalidAgeException(String message) {
        super(message);
    }
}

// ---------- 14. FILE HANDLING ----------
import java.io.*;
import java.nio.file.*;
import java.util.Scanner;

public class FileHandling {
    public static void main(String[] args) {
        // Writing to file
        try (PrintWriter writer = new PrintWriter("output.txt")) {
            writer.println("Hello, World!");
            writer.printf("Name: %s, Age: %d%n", "John", 25);
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
        
        // Reading with Scanner
        try (Scanner scanner = new Scanner(new File("input.txt"))) {
            while (scanner.hasNextLine()) {
                String line = scanner.nextLine();
                System.out.println(line);
            }
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
        
        // Reading with BufferedReader
        try (BufferedReader reader = new BufferedReader(
                new FileReader("input.txt"))) {
            String line;
            while ((line = reader.readLine()) != null) {
                System.out.println(line);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        
        // Writing with BufferedWriter
        try (BufferedWriter writer = new BufferedWriter(
                new FileWriter("output.txt", true))) {  // true = append
            writer.write("Appended text");
            writer.newLine();
        } catch (IOException e) {
            e.printStackTrace();
        }
        
        // Java NIO (Java 7+) - Read all lines
        try {
            List<String> lines = Files.readAllLines(Paths.get("file.txt"));
            for (String line : lines) {
                System.out.println(line);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        
        // Check if file exists
        File file = new File("test.txt");
        if (file.exists()) {
            System.out.println("File exists");
        }
        
        // Delete file
        file.delete();
    }
}

// ---------- 15. GENERICS ----------
public class Generics {
    public static void main(String[] args) {
        // Generic class
        Box<Integer> intBox = new Box<>(42);
        Box<String> strBox = new Box<>("Hello");
        
        int value = intBox.getContent();
        String text = strBox.getContent();
        
        // Generic method
        Integer[] intArray = {1, 2, 3};
        String[] strArray = {"A", "B", "C"};
        
        printArray(intArray);
        printArray(strArray);
    }
    
    // Generic method
    public static <T> void printArray(T[] array) {
        for (T item : array) {
            System.out.print(item + " ");
        }
        System.out.println();
    }
}

// Generic class
class Box<T> {
    private T content;
    
    public Box(T content) {
        this.content = content;
    }
    
    public T getContent() {
        return content;
    }
    
    public void setContent(T content) {
        this.content = content;
    }
}

// ---------- 16. LAMBDAS & FUNCTIONAL INTERFACES ----------
import java.util.function.*;

public class Lambdas {
    public static void main(String[] args) {
        // Lambda expression (functional interface required)
        // (parameters) -> expression
        // (parameters) -> { statements; }
        
        Runnable run = () -> System.out.println("Running");
        
        // Consumer (takes one argument, returns nothing)
        Consumer<String> printer = (s) -> System.out.println(s);
        printer.accept("Hello");
        
        // Supplier (takes no arguments, returns value)
        Supplier<Double> random = () -> Math.random();
        double value = random.get();
        
        // Function (takes one argument, returns value)
        Function<Integer, Integer> square = (x) -> x * x;
        int result = square.apply(5);  // 25
        
        // Predicate (takes one argument, returns boolean)
        Predicate<Integer> isEven = (x) -> x % 2 == 0;
        boolean test = isEven.test(10);  // true
        
        // BiFunction (takes two arguments, returns value)
        BiFunction<Integer, Integer, Integer> add = (a, b) -> a + b;
        int sum = add.apply(5, 3);  // 8
        
        // Method reference
        List<String> names = Arrays.asList("Alice", "Bob", "Charlie");
        names.forEach(System.out::println);  // Method reference
        
        // Stream with lambda
        List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
        List<Integer> evenSquares = numbers.stream()
            .filter(n -> n % 2 == 0)        // Keep even numbers
            .map(n -> n * n)                // Square them
            .collect(Collectors.toList());   // Collect to list
    }
}

// Functional interface
@FunctionalInterface
interface MathOperation {
    int operate(int a, int b);
    // Only one abstract method allowed
}

// ---------- 17. ENUMS ----------
// Simple enum
enum Day {
    MONDAY, TUESDAY, WEDNESDAY, THURSDAY, 
    FRIDAY, SATURDAY, SUNDAY
}

// Enum with fields and methods
enum Planet {
    MERCURY(3.303e+23, 2.4397e6),
    VENUS(4.869e+24, 6.0518e6),
    EARTH(5.976e+24, 6.37814e6);
    
    private final double mass;
    private final double radius;
    
    Planet(double mass, double radius) {
        this.mass = mass;
        this.radius = radius;
    }
    
    public double surfaceGravity() {
        final double G = 6.67300E-11;
        return G * mass / (radius * radius);
    }
}

// ---------- 18. DATE & TIME ----------
import java.time.*;
import java.time.format.DateTimeFormatter;

public class DateTime {
    public static void main(String[] args) {
        // Current date/time
        LocalDate date = LocalDate.now();
        LocalTime time = LocalTime.now();
        LocalDateTime dateTime = LocalDateTime.now();
        
        // Creating specific dates
        LocalDate specificDate = LocalDate.of(2023, 12, 25);
        LocalTime specificTime = LocalTime.of(14, 30, 0);
        
        // Date operations
        LocalDate tomorrow = date.plusDays(1);
        LocalDate nextWeek = date.plusWeeks(1);
        LocalDate lastMonth = date.minusMonths(1);
        
        // Parsing strings
        LocalDate parsed = LocalDate.parse("2023-12-25");
        
        // Formatting
        DateTimeFormatter formatter = 
            DateTimeFormatter.ofPattern("dd/MM/yyyy");
        String formatted = date.format(formatter);
        
        // Date comparison
        date.isBefore(tomorrow);
        date.isAfter(lastMonth);
        date.equals(specificDate);
        
        // Period between dates
        Period period = Period.between(
            LocalDate.of(2000, 1, 1), 
            LocalDate.now()
        );
        period.getYears();
        period.getMonths();
    }
}

// ---------- 19. ACCESS MODIFIERS ----------
public class AccessModifiers {
    public int publicVar;        // Accessible everywhere
    private int privateVar;      // Accessible only in same class
    protected int protectedVar;  // Same package + subclasses
    int defaultVar;             // Package-private (no modifier)
}

// ---------- 20. COMMON PATTERNS ----------
public class CommonPatterns {
    // Singleton pattern
    public static class Singleton {
        private static Singleton instance;
        
        private Singleton() {}  // Private constructor
        
        public static Singleton getInstance() {
            if (instance == null) {
                instance = new Singleton();
            }
            return instance;
        }
    }
    
    // Builder pattern
    public static class Person {
        private String name;
        private int age;
        private String email;
        
        public static class Builder {
            private String name;
            private int age;
            private String email;
            
            public Builder name(String name) {
                this.name = name;
                return this;
            }
            
            public Builder age(int age) {
                this.age = age;
                return this;
            }
            
            public Builder email(String email) {
                this.email = email;
                return this;
            }
            
            public Person build() {
                return new Person(this);
            }
        }
        
        private Person(Builder builder) {
            this.name = builder.name;
            this.age = builder.age;
            this.email = builder.email;
        }
    }
}

// ============================================
// COMPLETE EXAMPLE PROGRAM
// ============================================
import java.util.*;

public class CompleteExample {
    public static void main(String[] args) {
        // List of students
        List<Student> students = new ArrayList<>();
        students.add(new Student("Alice", 95));
        students.add(new Student("Bob", 87));
        students.add(new Student("Charlie", 92));
        
        // Sort by score
        students.sort((s1, s2) -> Integer.compare(s2.score, s1.score));
        
        // Print top performer
        System.out.println("Top student: " + students.get(0));
        
        // Calculate average
        double average = students.stream()
            .mapToInt(s -> s.score)
            .average()
            .orElse(0.0);
        
        System.out.printf("Average score: %.2f%n", average);
        
        // Filter passing students
        students.stream()
            .filter(s -> s.score >= 90)
            .forEach(System.out::println);
    }
}

class Student {
    String name;
    int score;
    
    Student(String name, int score) {
        this.name = name;
        this.score = score;
    }
    
    @Override
    public String toString() {
        return String.format("%s: %d", name, score);
    }
}

// ============================================
// QUICK REFERENCE: Common Imports
// ============================================
/*
 * java.util.*           - Collections, Scanner, Date
 * java.io.*             - File I/O
 * java.util.stream.*    - Streams API
 * java.time.*           - Date and Time API
 * java.util.function.*  - Functional interfaces
 * static java.lang.Math.* - Math functions
 */

// ============================================
// QUICK REFERENCE: Naming Conventions
// ============================================
/*
 * Classes:      PascalCase  (MyClass, StudentRecord)
 * Methods:      camelCase   (calculateTotal, getUserName)
 * Variables:    camelCase   (firstName, maxValue)
 * Constants:    UPPER_SNAKE (MAX_SIZE, PI)
 * Packages:     lowercase   (com.example.myapp)
 * Interfaces:   PascalCase  (Runnable, Serializable)
 */