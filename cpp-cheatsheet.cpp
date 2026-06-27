// ============================================
// C++ SYNTAX CHEAT SHEET - BOILERPLATE
// ============================================

// ---------- 0. BASIC PROGRAM STRUCTURE ----------
#include <iostream>      // Input/output stream
#include <vector>        // Dynamic array
#include <string>        // String class
#include <algorithm>     // Algorithms (sort, find, etc.)
#include <memory>        // Smart pointers
#include <map>           // Map container
#include <set>           // Set container

using namespace std;     // Use standard namespace (convenient but not always recommended)

// Alternatively, use specific declarations:
// using std::cout;
// using std::cin;
// using std::string;
// using std::vector;

// Main function - entry point
int main() {
    cout << "Hello, World!" << endl;
    return 0;  // 0 = success
}

// ---------- 1. COMMENTS ----------
// Single-line comment

/*
 * Multi-line comment
 */

/**
 * Documentation comment (used by Doxygen)
 * @param name description
 * @return description
 */

// ---------- 2. VARIABLES & DATA TYPES ----------
// Primitive types
int age = 25;                   // Integer (4 bytes typically)
short s = 100;                  // Short integer (2 bytes)
long l = 100000L;               // Long integer (8 bytes)
long long ll = 999999999LL;     // Very long integer
unsigned int positive = 50;     // Unsigned integer
float height = 5.9f;            // Float (4 bytes)
double pi = 3.14159;            // Double precision (8 bytes)
long double ld = 3.141592653L;  // Extended precision
char grade = 'A';               // Character (1 byte)
bool is_valid = true;           // Boolean (true/false)
void* ptr = nullptr;            // Null pointer (C++11)

// Auto type deduction (C++11)
auto x = 10;                    // int
auto y = 3.14;                  // double
auto z = "Hello"s;              // std::string (C++14 with s suffix)

// Constants
const int MAX_SIZE = 100;
constexpr int SQUARE(int x) { return x * x; }  // Compile-time constant (C++11)

// Type casting
double d = 3.14;
int i = static_cast<int>(d);    // C++ style cast (preferred)
int j = (int)d;                 // C-style cast

// ---------- 3. STRINGS ----------
#include <string>

string str = "Hello, World!";
string str2("Constructor initialization");
string str3 = R"(Raw string with \n and "quotes")";  // Raw string literal (C++11)

// String operations
str.length();                   // or str.size()
str.empty();                    // Check if empty
str[0];                         // Access character
str.at(0);                      // Access with bounds checking
str.front();                    // First character (C++11)
str.back();                     // Last character (C++11)

// String methods
str.append(" Extra");           // Append
str.insert(0, "Start: ");       // Insert at position
str.erase(0, 5);                // Erase characters
str.replace(0, 5, "Hi");        // Replace substring
str.substr(0, 5);               // Substring
str.find("World");              // Find substring (returns position or npos)
str.rfind("l");                 // Find last occurrence
str.compare("Hello");           // Compare (returns 0 if equal)

// String conversion
int num = stoi("123");          // String to int
double dnum = stod("3.14");     // String to double
string s = to_string(123);      // Number to string

// ---------- 4. I/O STREAMS ----------
#include <iostream>
#include <iomanip>   // For setw, setprecision

// Output
cout << "Text" << endl;                     // With newline
cout << "Text" << '\n';                     // With newline (faster)
cout << "Number: " << 42 << endl;           // Multiple outputs
cout << "Formatted: " << fixed << setprecision(2) << 3.14159;  // 3.14

// Input
int age;
cout << "Enter age: ";
cin >> age;                                 // Integer input

string name;
cout << "Enter name: ";
getline(cin, name);                         // Full line input

// Flush output buffer
cout << "Processing..." << flush;

// ---------- 5. ARRAYS ----------
// C-style arrays
int arr[5] = {1, 2, 3, 4, 5};
int arr2[] = {1, 2, 3};                     // Size determined automatically
int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

// std::array (C++11) - fixed size with bounds checking
#include <array>
array<int, 5> std_arr = {1, 2, 3, 4, 5};
std_arr.size();                              // Get size
std_arr.fill(0);                             // Fill all elements
std_arr.front();                             // First element
std_arr.back();                              // Last element

// std::vector - dynamic array
#include <vector>
vector<int> vec = {1, 2, 3, 4, 5};
vec.push_back(6);                            // Add to end
vec.pop_back();                              // Remove last
vec.size();                                  // Current size
vec.capacity();                              // Allocated capacity
vec.reserve(100);                            // Reserve memory
vec.clear();                                 // Remove all elements
vec.empty();                                 // Check if empty
vec.front();                                 // First element
vec.back();                                  // Last element
vec.at(0);                                   // Access with bounds checking
vec.insert(vec.begin() + 2, 10);            // Insert at position
vec.erase(vec.begin() + 2);                 // Erase at position

// ---------- 6. CONTAINERS ----------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <deque>
#include <stack>
#include <queue>

// Vector (dynamic array)
vector<int> v = {1, 2, 3};

// List (doubly linked list)
list<int> lst = {1, 2, 3};
lst.push_front(0);   // Add to front
lst.push_back(4);    // Add to back

// Map (ordered key-value pairs, Red-Black tree)
map<string, int> scores;
scores["Alice"] = 95;                        // Insert/update
scores.insert({"Bob", 87});                  // Insert
scores.at("Alice");                          // Access with bounds checking
scores.find("Alice");                        // Returns iterator (or end() if not found)
scores.count("Alice");                       // Count occurrences (0 or 1 for map)
scores.erase("Alice");                       // Remove by key

// Unordered map (hash table)
unordered_map<string, int> hash_map;
hash_map["key"] = 42;

// Set (ordered unique elements)
set<int> s = {1, 2, 3, 4, 5};
s.insert(6);
s.erase(3);
s.count(4);                                  // Check existence

// Deque (double-ended queue)
deque<int> dq = {1, 2, 3};
dq.push_front(0);
dq.push_back(4);

// Stack (LIFO)
stack<int> stk;
stk.push(1);
stk.top();                                   // View top
stk.pop();                                   // Remove top

// Queue (FIFO)
queue<int> q;
q.push(1);
q.front();                                   // View front
q.pop();                                     // Remove front

// Priority Queue (sorted queue, max-heap by default)
priority_queue<int> pq;
pq.push(10);
pq.push(5);
pq.push(20);
pq.top();                                    // 20 (largest)

// Min-heap priority queue
priority_queue<int, vector<int>, greater<int>> min_pq;

// ---------- 7. ITERATORS ----------
vector<int> vec = {1, 2, 3, 4, 5};

// Iterator basics
auto it = vec.begin();                       // Points to first element
auto end = vec.end();                        // Points past last element

// Iterating
for (auto it = vec.begin(); it != vec.end(); ++it) {
    cout << *it << " ";                      // Dereference iterator
}

// Range-based for loop (C++11)
for (int val : vec) {
    cout << val << " ";
}

// With reference to modify
for (int& val : vec) {
    val *= 2;  // Modifies original
}

// Const reference for read-only
for (const int& val : vec) {
    cout << val << " ";
}

// Auto in range-based for
for (const auto& val : vec) {
    cout << val << " ";
}

// Algorithms with iterators
#include <algorithm>
sort(vec.begin(), vec.end());                // Sort ascending
sort(vec.begin(), vec.end(), greater<int>()); // Sort descending
auto find_it = find(vec.begin(), vec.end(), 3); // Find element
int count = count_if(vec.begin(), vec.end(), [](int x) { return x > 3; });

// ---------- 8. OPERATORS ----------
int a = 10, b = 3;

// Arithmetic
int sum = a + b;
int diff = a - b;
int prod = a * b;
int quot = a / b;        // Integer division
int mod = a % b;         // Modulus
double div = (double)a / b; // Floating-point division

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

// Bitwise
a & b;     // AND
a | b;     // OR
a ^ b;     // XOR
~a;        // NOT
a << 1;    // Left shift
a >> 1;    // Right shift

// Assignment shortcuts
a += 5;    // a = a + 5
a -= 5;
a *= 5;
a /= 5;
a %= 5;
a++;       // Post-increment
++a;       // Pre-increment
a--;       // Post-decrement
--a;       // Pre-decrement

// Ternary operator
int max = (a > b) ? a : b;

// sizeof
size_t size = sizeof(int);  // Size of type in bytes

// ---------- 9. CONDITIONALS ----------
int age = 18;

// If-else
if (age >= 18) {
    cout << "Adult" << endl;
} else if (age >= 13) {
    cout << "Teenager" << endl;
} else {
    cout << "Child" << endl;
}

// Switch statement
int day = 3;
switch (day) {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
    case 4:
        cout << "Wednesday or Thursday" << endl;
        break;
    default:
        cout << "Other day" << endl;
}

// ---------- 10. LOOPS ----------
// For loop
for (int i = 0; i < 5; i++) {
    cout << i << " ";
}
// Output: 0 1 2 3 4

// Range-based for (C++11)
vector<int> numbers = {1, 2, 3, 4, 5};
for (int num : numbers) {
    cout << num << " ";
}

// While loop
int count = 0;
while (count < 5) {
    cout << count << " ";
    count++;
}

// Do-while loop
int i = 0;
do {
    cout << i << " ";
    i++;
} while (i < 5);

// Loop control
break;      // Exit loop
continue;   // Skip to next iteration

// ---------- 11. FUNCTIONS ----------
// Basic function
int add(int a, int b) {
    return a + b;
}

// Default parameters
void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

// Function overloading
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

// Inline function (hint to compiler)
inline int square(int x) {
    return x * x;
}

// Variadic template (C++11) - variable arguments
template<typename... Args>
void print(Args... args) {
    (cout << ... << args) << endl;  // Fold expression (C++17)
}

// Lambda function (C++11)
auto add_lambda = [](int a, int b) -> int {
    return a + b;
};

// Lambda with capture
int multiplier = 2;
auto times = [multiplier](int x) { return x * multiplier; };

// Lambda capture by reference
int counter = 0;
auto increment = [&counter]() { counter++; };

// ---------- 12. CLASSES & OOP ----------
class Person {
private:  // Private members (default for class)
    string name;
    int age;
    
public:
    // Constructor
    Person() : name("Unknown"), age(0) {
        // Default constructor with initializer list
    }
    
    // Parameterized constructor
    Person(string n, int a) : name(n), age(a) {
        // Initializer list is preferred
    }
    
    // Destructor
    ~Person() {
        // Cleanup code
    }
    
    // Copy constructor
    Person(const Person& other) : name(other.name), age(other.age) {
        // Deep copy
    }
    
    // Copy assignment operator
    Person& operator=(const Person& other) {
        if (this != &other) {
            name = other.name;
            age = other.age;
        }
        return *this;
    }
    
    // Move constructor (C++11)
    Person(Person&& other) noexcept 
        : name(move(other.name)), age(other.age) {
        other.age = 0;
    }
    
    // Move assignment operator (C++11)
    Person& operator=(Person&& other) noexcept {
        if (this != &other) {
            name = move(other.name);
            age = other.age;
            other.age = 0;
        }
        return *this;
    }
    
    // Getters (const methods don't modify object)
    string getName() const { return name; }
    int getAge() const { return age; }
    
    // Setters
    void setName(const string& n) { name = n; }
    void setAge(int a) { age = a; }
    
    // Method
    void introduce() const {
        cout << "Hi, I'm " << name << ", " << age << " years old." << endl;
    }
    
    // Static method
    static string species() { return "Homo sapiens"; }
    
    // Operator overloading
    bool operator<(const Person& other) const {
        return age < other.age;
    }
    
    // Friend function (can access private members)
    friend ostream& operator<<(ostream& os, const Person& p);
};

// Friend function implementation
ostream& operator<<(ostream& os, const Person& p) {
    os << p.name << " (" << p.age << ")";
    return os;
}

// Inheritance
class Student : public Person {
private:
    string studentId;
    double gpa;
    
public:
    // Constructor calling base class constructor
    Student(string name, int age, string id, double g) 
        : Person(name, age), studentId(id), gpa(g) {}
    
    // Method overriding
    void introduce() const override {  // 'override' keyword (C++11)
        Person::introduce();  // Call base class method
        cout << "I'm a student with ID: " << studentId << endl;
    }
    
    string getStudentId() const { return studentId; }
    double getGpa() const { return gpa; }
};

// Abstract class (interface)
class Shape {
public:
    virtual double area() const = 0;  // Pure virtual function
    virtual void draw() const = 0;
    virtual ~Shape() {}  // Virtual destructor
};

// Implementing abstract class
class Circle : public Shape {
private:
    double radius;
    
public:
    Circle(double r) : radius(r) {}
    
    double area() const override {
        return 3.14159 * radius * radius;
    }
    
    void draw() const override {
        cout << "Drawing a circle" << endl;
    }
};

// ---------- 13. POINTERS & REFERENCES ----------
// Pointers
int x = 10;
int* ptr = &x;               // Pointer to x
*ptr = 20;                   // Dereference and modify
cout << *ptr << endl;        // Access value

// Null pointer (C++11)
int* null_ptr = nullptr;

// Dynamic memory
int* dynamic_int = new int(42);  // Allocate and initialize
delete dynamic_int;              // Free memory

int* arr = new int[5];           // Allocate array
delete[] arr;                    // Free array

// Smart pointers (C++11) - automatic memory management
#include <memory>

// Unique pointer (exclusive ownership)
unique_ptr<int> uptr = make_unique<int>(42);  // C++14
// unique_ptr<int> uptr(new int(42));  // C++11
*uptr = 100;  // Use like regular pointer

// Shared pointer (shared ownership)
shared_ptr<int> sptr1 = make_shared<int>(42);
shared_ptr<int> sptr2 = sptr1;  // Both share ownership
// Auto-deleted when last shared_ptr is destroyed

// Weak pointer (non-owning reference to shared_ptr)
weak_ptr<int> wptr = sptr1;
if (auto shared = wptr.lock()) {  // Lock to access
    cout << *shared << endl;
}

// References (aliases, cannot be null)
int value = 10;
int& ref = value;            // Reference to value
ref = 20;                    // Modifies value
// int& invalid_ref; // Error: must be initialized

// Const reference
const int& const_ref = value;  // Cannot modify through this reference

// Pass by reference (modify original)
void increment(int& num) {
    num++;
}

// Pass by const reference (efficient, no copy)
void print(const string& str) {
    cout << str << endl;
}

// ---------- 14. TEMPLATES ----------
// Function template
template<typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

// Usage
int max_int = maximum(10, 20);
double max_double = maximum(3.14, 2.71);

// Class template
template<typename T>
class Container {
private:
    T data;
    
public:
    Container(T value) : data(value) {}
    
    T getData() const { return data; }
    void setData(T value) { data = value; }
};

// Template specialization
template<>
class Container<bool> {
private:
    bool data;
    
public:
    Container(bool value) : data(value) {}
    bool getData() const { return data; }
    // Special behavior for bool
};

// Variadic templates (C++11)
template<typename T>
void print(T value) {
    cout << value << endl;
}

template<typename T, typename... Args>
void print(T first, Args... rest) {
    cout << first << " ";
    print(rest...);  // Recursive call
}

// ---------- 15. EXCEPTION HANDLING ----------
#include <stdexcept>

// Try-catch
try {
    throw runtime_error("Something went wrong");
} catch (const runtime_error& e) {
    cout << "Runtime error: " << e.what() << endl;
} catch (const exception& e) {
    cout << "Standard exception: " << e.what() << endl;
} catch (...) {
    cout << "Unknown exception" << endl;
}

// Function that throws
double divide(double a, double b) {
    if (b == 0) {
        throw invalid_argument("Division by zero");
    }
    return a / b;
}

// noexcept specifier (C++11)
void no_except_func() noexcept {
    // This function promises not to throw
}

// ---------- 16. FILE I/O ----------
#include <fstream>
#include <sstream>

// Writing to file
ofstream outfile("output.txt");
if (outfile.is_open()) {
    outfile << "Hello, File!" << endl;
    outfile << "Number: " << 42 << endl;
    outfile.close();
}

// Reading from file
ifstream infile("input.txt");
string line;
if (infile.is_open()) {
    while (getline(infile, line)) {
        cout << line << endl;
    }
    infile.close();
}

// Append mode
ofstream append_file("output.txt", ios::app);
append_file << "Appended line" << endl;
append_file.close();

// Binary I/O
ofstream bin_out("data.bin", ios::binary);
int num = 42;
bin_out.write(reinterpret_cast<const char*>(&num), sizeof(num));
bin_out.close();

ifstream bin_in("data.bin", ios::binary);
int read_num;
bin_in.read(reinterpret_cast<char*>(&read_num), sizeof(read_num));
bin_in.close();

// String stream (string as stream)
stringstream ss;
ss << "Name: " << "John" << ", Age: " << 25;
string result = ss.str();
cout << result << endl;

// ---------- 17. STL ALGORITHMS ----------
#include <algorithm>
#include <numeric>

vector<int> v = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

// Sorting
sort(v.begin(), v.end());                    // Ascending
sort(v.begin(), v.end(), greater<int>());    // Descending
stable_sort(v.begin(), v.end());             // Stable sort

// Finding
auto it = find(v.begin(), v.end(), 4);       // Find value
auto if_it = find_if(v.begin(), v.end(), [](int x) { return x > 5; });

// Counting
int cnt = count(v.begin(), v.end(), 3);      // Count occurrences
int cnt_if = count_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; });

// Min/Max
int min_val = *min_element(v.begin(), v.end());
int max_val = *max_element(v.begin(), v.end());
auto minmax = minmax_element(v.begin(), v.end());  // Returns pair

// Modifying
reverse(v.begin(), v.end());
rotate(v.begin(), v.begin() + 3, v.end());  // Rotate left by 3
random_shuffle(v.begin(), v.end());          // Random shuffle

// Remove duplicates (requires sorted range)
sort(v.begin(), v.end());
auto last = unique(v.begin(), v.end());
v.erase(last, v.end());

// Numeric operations (include <numeric>)
int sum = accumulate(v.begin(), v.end(), 0);  // Sum
int product = accumulate(v.begin(), v.end(), 1, multiplies<int>());

// Copy
vector<int> v2(v.size());
copy(v.begin(), v.end(), v2.begin());
copy_if(v.begin(), v.end(), v2.begin(), [](int x) { return x > 3; });

// Transform (map)
vector<int> result(v.size());
transform(v.begin(), v.end(), result.begin(), [](int x) { return x * 2; });

// For each
for_each(v.begin(), v.end(), [](int& x) { x *= 2; });

// Binary search (requires sorted range)
bool exists = binary_search(v.begin(), v.end(), 4);
auto lower = lower_bound(v.begin(), v.end(), 4);  // First >= 4
auto upper = upper_bound(v.begin(), v.end(), 4);  // First > 4

// ---------- 18. MODERN C++ FEATURES ----------
// Auto type deduction (C++11)
auto x = 42;                    // int
auto y = 3.14;                  // double
auto z = "Hello"s;              // string (C++14 with s literal)

// Range-based for loop (C++11)
vector<int> vec = {1, 2, 3, 4, 5};
for (const auto& item : vec) {
    cout << item << " ";
}

// Lambda expressions (C++11)
auto square = [](int x) { return x * x; };
auto add = [](auto a, auto b) { return a + b; };  // Generic lambda (C++14)

// Smart pointers (C++11)
auto uptr = make_unique<int>(42);   // C++14
auto sptr = make_shared<int>(42);

// nullptr (C++11)
int* ptr = nullptr;  // Instead of NULL

// Enum class (C++11) - scoped enum
enum class Color { Red, Green, Blue };
Color c = Color::Red;
// int x = Color::Red;  // Error: no implicit conversion

// Struct initialization (C++11)
struct Point {
    int x;
    int y;
};
Point p = {10, 20};  // Brace initialization

// std::initializer_list
class MyClass {
public:
    MyClass(initializer_list<int> list) {
        for (int val : list) {
            // process val
        }
    }
};

MyClass obj = {1, 2, 3, 4, 5};

// std::tuple (C++11)
#include <tuple>
auto t = make_tuple("John", 25, 3.14);
string name = get<0>(t);  // Get by index
int age = get<1>(t);

// Structured bindings (C++17)
auto [name2, age2, pi2] = t;  // Unpack tuple

// Optional (C++17)
#include <optional>
optional<int> maybe_value = 42;
if (maybe_value.has_value()) {
    cout << maybe_value.value() << endl;
}

// String view (C++17) - lightweight string reference
#include <string_view>
void process(string_view sv) {
    cout << sv << endl;
}
process("Hello");  // No string copy

// ============================================
// COMMON PATTERNS
// ============================================

// RAII (Resource Acquisition Is Initialization)
class FileHandler {
private:
    FILE* file;
    
public:
    FileHandler(const char* filename) {
        file = fopen(filename, "r");
    }
    
    ~FileHandler() {
        if (file) {
            fclose(file);
        }
    }
    
    // Delete copy constructor and assignment
    FileHandler(const FileHandler&) = delete;
    FileHandler& operator=(const FileHandler&) = delete;
};

// Singleton pattern
class Singleton {
private:
    static Singleton* instance;
    Singleton() {}  // Private constructor
    
public:
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }
    
    // Delete copy/move operations
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};

Singleton* Singleton::instance = nullptr;

// Factory pattern
class Product {
public:
    virtual void use() = 0;
    virtual ~Product() {}
};

class ConcreteProduct : public Product {
public:
    void use() override {
        cout << "Using product" << endl;
    }
};

class Factory {
public:
    unique_ptr<Product> createProduct() {
        return make_unique<ConcreteProduct>();
    }
};

// ============================================
// COMPLETE EXAMPLE PROGRAM
// ============================================
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <memory>
#include <map>

using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;
    
public:
    Employee(string n, int i, double s) 
        : name(move(n)), id(i), salary(s) {}
    
    string getName() const { return name; }
    int getId() const { return id; }
    double getSalary() const { return salary; }
    
    void giveRaise(double percentage) {
        salary *= (1 + percentage / 100);
    }
    
    void display() const {
        cout << "Employee{name='" << name 
             << "', id=" << id 
             << ", salary=" << fixed << setprecision(2) << salary 
             << "}" << endl;
    }
};

class EmployeeManager {
private:
    vector<unique_ptr<Employee>> employees;
    
public:
    void addEmployee(string name, int id, double salary) {
        employees.push_back(make_unique<Employee>(name, id, salary));
    }
    
    void giveRaiseToAll(double percentage) {
        for (auto& emp : employees) {
            emp->giveRaise(percentage);
        }
    }
    
    void sortBySalary() {
        sort(employees.begin(), employees.end(),
            [](const auto& a, const auto& b) {
                return a->getSalary() > b->getSalary();
            });
    }
    
    void displayAll() const {
        cout << "\n=== Employee List ===" << endl;
        for (const auto& emp : employees) {
            emp->display();
        }
    }
    
    auto findById(int id) const {
        auto it = find_if(employees.begin(), employees.end(),
            [id](const auto& emp) {
                return emp->getId() == id;
            });
        return it;
    }
    
    double averageSalary() const {
        if (employees.empty()) return 0.0;
        
        double total = accumulate(employees.begin(), employees.end(), 0.0,
            [](double sum, const auto& emp) {
                return sum + emp->getSalary();
            });
        return total / employees.size();
    }
};

int main() {
    EmployeeManager manager;
    
    manager.addEmployee("Alice", 1001, 75000);
    manager.addEmployee("Bob", 1002, 65000);
    manager.addEmployee("Charlie", 1003, 85000);
    manager.addEmployee("Diana", 1004, 70000);
    
    manager.displayAll();
    
    cout << "\nAverage salary: $" 
         << fixed << setprecision(2) 
         << manager.averageSalary() << endl;
    
    cout << "\nGiving 10% raise..." << endl;
    manager.giveRaiseToAll(10);
    
    cout << "\nAfter raise:" << endl;
    manager.displayAll();
    
    cout << "\nSorted by salary:" << endl;
    manager.sortBySalary();
    manager.displayAll();
    
    return 0;
}

// ============================================
// QUICK REFERENCE: Common Headers
// ============================================
/*
 * <iostream>      - Console I/O
 * <fstream>       - File I/O
 * <sstream>       - String streams
 * <string>        - String class
 * <vector>        - Dynamic array
 * <list>          - Doubly linked list
 * <map>           - Ordered map
 * <unordered_map> - Hash map
 * <set>           - Ordered set
 * <algorithm>     - STL algorithms
 * <numeric>       - Numeric algorithms
 * <memory>        - Smart pointers
 * <utility>       - pair, move, forward
 * <functional>    - function objects
 * <thread>        - Multithreading
 * <mutex>         - Mutual exclusion
 * <chrono>        - Time utilities
 * <regex>         - Regular expressions
 * <random>        - Random number generation
 */

// ============================================
// QUICK REFERENCE: Naming Conventions
// ============================================
/*
 * Classes:       PascalCase     (MyClass, StudentRecord)
 * Functions:     camelCase      (calculateTotal, getUserName)
 * Variables:     snake_case     (first_name, max_value)
 * Constants:     kPascalCase    (kMaxSize) or UPPER_SNAKE (MAX_SIZE)
 * Members:       m_ or _ prefix (m_name, _age) - varies by style
 * Namespaces:    lowercase      (std, mynamespace)
 * Templates:     PascalCase     (T, Container, ValueType)
 * Macros:        UPPER_SNAKE    (MAX_BUFFER_SIZE)
 */