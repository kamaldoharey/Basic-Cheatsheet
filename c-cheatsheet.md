// ============================================
// C LANGUAGE SYNTAX CHEAT SHEET - BOILERPLATE
// ============================================

// ---------- 0. BASIC PROGRAM STRUCTURE ----------
#include <stdio.h>      // Standard input/output
#include <stdlib.h>     // Standard library (malloc, free, etc.)
#include <string.h>     // String functions
#include <math.h>       // Math functions
#include <stdbool.h>    // Boolean type (C99+)
#include <ctype.h>      // Character functions
#include <time.h>       // Time functions

// Function prototype/declaration
void greet(void);
int add(int a, int b);

// Main function - entry point
int main() {
    printf("Hello, World!\n");
    return 0;  // 0 = success
}

// ---------- 1. COMMENTS ----------
// This is a single-line comment

/*
 * This is a
 * multi-line comment
 */

// ---------- 2. BASIC DATA TYPES ----------
int age = 25;               // Integer (4 bytes typically)
float height = 5.9f;        // Float (4 bytes)
double pi = 3.14159;        // Double precision (8 bytes)
char grade = 'A';           // Single character (1 byte)
bool is_valid = true;       // Boolean (C99, requires stdbool.h)

// Type modifiers
short int small_num = 100;  // Short integer (2 bytes)
long int big_num = 100000L; // Long integer (8 bytes)
unsigned int positive = 50; // Unsigned (only positive)
long long int huge = 999LL; // Very large integer

// Constants
const int MAX_SIZE = 100;
#define PI 3.14159          // Preprocessor constant

// ---------- 3. PRINTF & SCANF ----------
// Output
printf("Hello\n");
printf("Integer: %d\n", 42);
printf("Float: %f\n", 3.14);
printf("Double: %lf\n", 3.14159);
printf("Char: %c\n", 'A');
printf("String: %s\n", "world");
printf("Pointer: %p\n", (void*)&age);
printf("Hexadecimal: %x\n", 255);
printf("Multiple: %d + %d = %d\n", 10, 20, 30);

// Input
int num;
printf("Enter a number: ");
scanf("%d", &num);

char name[50];
printf("Enter name: ");
scanf("%s", name);  // Note: no & for arrays

// ---------- 4. OPERATORS ----------
// Arithmetic
int sum = a + b;        // Addition
int diff = a - b;       // Subtraction
int prod = a * b;       // Multiplication
int quot = a / b;       // Division
int mod = a % b;        // Modulus
int power = pow(a, b);  // Power (requires math.h)

// Comparison
a == b;                 // Equal to
a != b;                 // Not equal to
a < b;                  // Less than
a > b;                  // Greater than
a <= b;                 // Less than or equal
a >= b;                 // Greater than or equal

// Logical
a && b;                 // AND
a || b;                 // OR
!a;                     // NOT

// Bitwise
a & b;                  // AND
a | b;                  // OR
a ^ b;                  // XOR
~a;                     // NOT
a << 1;                 // Left shift
a >> 1;                 // Right shift

// Assignment shortcuts
x += 5;  // x = x + 5
x -= 5;  // x = x - 5
x *= 5;  // x = x * 5
x /= 5;  // x = x / 5
x %= 5;  // x = x % 5
x++;     // Increment
x--;     // Decrement

// Ternary operator
int max = (a > b) ? a : b;

// ---------- 5. ARRAYS ----------
// Declaration and initialization
int numbers[5];                      // Uninitialized array
int nums[5] = {1, 2, 3, 4, 5};     // Initialized array
int partial[5] = {1, 2};            // Rest are 0
int auto_size[] = {1, 2, 3};        // Size determined automatically

// Accessing elements
nums[0] = 10;                        // First element
int first = nums[0];                 // Get first element
int last = nums[4];                  // Last element

// Multi-dimensional arrays
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

// String as character array
char str[6] = "Hello";              // Note: needs space for '\0'
char str2[] = "World";              // Size determined automatically
char str3[20];                      // Buffer for input

// ---------- 6. STRINGS ----------
#include <string.h>

char str1[20] = "Hello";
char str2[20] = "World";
char result[40];

// String functions
strlen(str1);                       // Length (excludes \0)
strcpy(result, str1);               // Copy str1 to result
strcat(result, str2);               // Concatenate str2 to result
strcmp(str1, str2);                 // Compare: 0 if equal
strncpy(result, str1, 3);          // Copy n characters
strchr(str1, 'e');                  // Find character
strstr(str1, "ell");               // Find substring
strlwr(str1);                       // Convert to lowercase
strupr(str1);                       // Convert to uppercase

// String input
fgets(name, 50, stdin);            // Safe string input
name[strcspn(name, "\n")] = 0;     // Remove newline

// ---------- 7. CONDITIONALS ----------
int age = 18;

// If-else
if (age >= 18) {
    printf("Adult\n");
} else if (age >= 13) {
    printf("Teenager\n");
} else {
    printf("Child\n");
}

// Switch statement
char grade = 'A';
switch (grade) {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Good!\n");
        break;
    case 'C':
        printf("Average\n");
        break;
    default:
        printf("Invalid grade\n");
}

// ---------- 8. LOOPS ----------
// For loop
for (int i = 0; i < 5; i++) {
    printf("%d ", i);
}
// Output: 0 1 2 3 4

// While loop
int count = 0;
while (count < 5) {
    printf("%d ", count);
    count++;
}

// Do-while loop (always executes at least once)
int num = 0;
do {
    printf("%d ", num);
    num++;
} while (num < 5);

// Loop control
break;      // Exit loop immediately
continue;   // Skip to next iteration

// ---------- 9. FUNCTIONS ----------
// Function definition
int add(int a, int b) {
    return a + b;
}

void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

// Function with no return value
void print_line() {
    printf("-------------------\n");
}

// Call by value (default)
void modify_value(int x) {
    x = 100;  // Won't affect original variable
}

// Call by reference (using pointers)
void modify_reference(int *x) {
    *x = 100;  // Will affect original variable
}

// Usage
int value = 50;
modify_value(value);     // value still 50
modify_reference(&value); // value now 100

// ---------- 10. POINTERS ----------
int x = 10;
int *ptr = &x;           // Pointer declaration and initialization

// Pointer operations
*ptr = 20;               // Dereference: change value at address
int y = *ptr;            // Get value through pointer
ptr++;                   // Move to next memory location
ptr--;                   // Move to previous location

// NULL pointer
int *null_ptr = NULL;

// Pointer to array
int arr[5] = {1, 2, 3, 4, 5};
int *arr_ptr = arr;      // Points to first element
*(arr_ptr + 2) = 30;     // Modify third element

// Pointer to pointer
int **double_ptr = &ptr;

// Function pointers
int (*func_ptr)(int, int) = &add;
int result = func_ptr(5, 3);

// ---------- 11. DYNAMIC MEMORY ALLOCATION ----------
#include <stdlib.h>

// Allocate memory
int *single = (int*)malloc(sizeof(int));           // Single int
int *array = (int*)malloc(5 * sizeof(int));        // Array of 5 ints
int *calloc_arr = (int*)calloc(5, sizeof(int));    // Initialized to 0

// Check if allocation succeeded
if (array == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
}

// Use allocated memory
for (int i = 0; i < 5; i++) {
    array[i] = i * 10;
}

// Resize memory
array = (int*)realloc(array, 10 * sizeof(int));    // Resize to 10 ints

// Free memory (CRITICAL!)
free(single);
free(array);
free(calloc_arr);

// Set pointer to NULL after freeing (good practice)
array = NULL;

// ---------- 12. STRUCTURES ----------
// Structure definition
struct Person {
    char name[50];
    int age;
    float height;
};

// Using typedef for cleaner syntax
typedef struct {
    char name[50];
    int age;
    float height;
} Person;

// Creating and initializing structures
struct Person p1 = {"John", 30, 5.9};
Person p2 = {"Alice", 25, 5.5};  // With typedef

// Accessing members
printf("Name: %s\n", p1.name);
p1.age = 31;

// Pointer to structure
Person *p_ptr = &p1;
printf("Name: %s\n", p_ptr->name);    // Arrow operator
p_ptr->age = 32;

// Array of structures
Person people[3] = {
    {"Bob", 20, 6.0},
    {"Carol", 22, 5.4},
    {"Dave", 21, 5.8}
};

// ---------- 13. ENUMS ----------
// Basic enum
enum Day {
    MONDAY,     // 0
    TUESDAY,    // 1
    WEDNESDAY,  // 2
    THURSDAY,   // 3
    FRIDAY,     // 4
    SATURDAY,   // 5
    SUNDAY      // 6
};

// Enum with custom values
enum Status {
    SUCCESS = 0,
    ERROR = -1,
    PENDING = 100
};

// Using typedef with enum
typedef enum {
    RED,
    GREEN,
    BLUE
} Color;

// Usage
enum Day today = MONDAY;
Color my_color = BLUE;

// ---------- 14. UNIONS ----------
// Union (all members share same memory)
union Data {
    int i;
    float f;
    char str[20];
};

union Data data;
data.i = 10;              // Now contains integer
data.f = 3.14;            // Now contains float (overwrites int)

// ---------- 15. FILE HANDLING ----------
FILE *file;

// Writing to file
file = fopen("output.txt", "w");
if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
}
fprintf(file, "Hello, World!\n");
fprintf(file, "Number: %d\n", 42);
fputs("Another line\n", file);
fclose(file);

// Reading from file
file = fopen("output.txt", "r");
if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
}

char buffer[100];
while (fgets(buffer, sizeof(buffer), file) != NULL) {
    printf("%s", buffer);
}

// Alternatively, read entire file
fseek(file, 0, SEEK_END);
long file_size = ftell(file);
fseek(file, 0, SEEK_SET);
char *content = (char*)malloc(file_size + 1);
fread(content, 1, file_size, file);
content[file_size] = '\0';

fclose(file);
free(content);

// File modes:
// "r"  - Read
// "w"  - Write (create/truncate)
// "a"  - Append
// "r+" - Read and write
// "w+" - Read and write (create/truncate)
// "a+" - Read and append
// "rb", "wb", etc. - Binary modes

// ---------- 16. PREPROCESSOR DIRECTIVES ----------
#include <filename>        // Include system header
#include "filename"        // Include local header

#define MAX 100            // Define constant
#define SQUARE(x) ((x)*(x)) // Define macro

#undef MAX                 // Undefine

#ifdef DEBUG               // If defined
    printf("Debug mode\n");
#endif

#ifndef HEADER_H          // If not defined (header guards)
#define HEADER_H
    // Header content
#endif

#if defined(WIN32) || defined(_WIN32)
    // Windows-specific code
#elif defined(__linux__)
    // Linux-specific code
#endif

// ---------- 17. TYPE CASTING ----------
// Implicit casting
int a = 10;
double b = a;  // int to double (automatic)

// Explicit casting
double c = 3.14;
int d = (int)c;  // C-style cast (truncates to 3)

// For pointers
void *ptr = malloc(100);
int *int_ptr = (int*)ptr;

// ---------- 18. COMMON FUNCTIONS ----------
// Character checks (ctype.h)
isalpha(c);        // Is letter?
isdigit(c);        // Is digit?
isalnum(c);        // Is alphanumeric?
isspace(c);        // Is whitespace?
toupper(c);        // Convert to uppercase
tolower(c);        // Convert to lowercase

// Math functions (math.h)
pow(x, y);         // x to power y
sqrt(x);           // Square root
abs(x);            // Absolute value (int)
fabs(x);           // Absolute value (float/double)
ceil(x);           // Round up
floor(x);          // Round down
sin(x); cos(x); tan(x);  // Trigonometry

// Random numbers (stdlib.h, time.h)
srand(time(NULL)); // Seed random number generator
int random = rand() % 100;  // Random number 0-99

// System commands
system("clear");   // Clear screen (Linux/Mac)
system("cls");     // Clear screen (Windows)

// ---------- 19. COMMON PATTERNS & IDIOMS ----------
// Swap two variables
int temp = a;
a = b;
b = temp;

// Find min/max
int max = (a > b) ? a : b;
int min = (a < b) ? a : b;

// Iterate array
for (int i = 0; i < ARRAY_SIZE; i++) {
    // Do something with array[i]
}

// Copy string safely
strncpy(dest, src, sizeof(dest) - 1);
dest[sizeof(dest) - 1] = '\0';

// Check if memory allocation succeeded
if (ptr == NULL) {
    perror("Memory allocation failed");
    exit(1);
}

// Clear input buffer
while (getchar() != '\n');

// ---------- 20. ERROR HANDLING ----------
// errno and perror
#include <errno.h>

file = fopen("nonexistent.txt", "r");
if (file == NULL) {
    perror("Error opening file");
    printf("Error code: %d\n", errno);
}

// Assert for debugging
#include <assert.h>
assert(ptr != NULL);  // Program aborts if false

// ---------- COMPLETE EXAMPLE PROGRAM ----------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int score;
} Student;

void print_student(Student s) {
    printf("Name: %s, Score: %d\n", s.name, s.score);
}

int main() {
    // Dynamic array of students
    int count = 3;
    Student *students = (Student*)malloc(count * sizeof(Student));
    
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Initialize
    strcpy(students[0].name, "Alice");
    students[0].score = 95;
    
    strcpy(students[1].name, "Bob");
    students[1].score = 87;
    
    strcpy(students[2].name, "Charlie");
    students[2].score = 92;
    
    // Print all students
    for (int i = 0; i < count; i++) {
        print_student(students[i]);
    }
    
    // Clean up
    free(students);
    students = NULL;
    
    return 0;
}

// ============================================
// QUICK REFERENCE: Format Specifiers
// ============================================
/*
 * %d or %i  - int
 * %f        - float
 * %lf       - double
 * %c        - char
 * %s        - string
 * %p        - pointer
 * %x        - hexadecimal (lowercase)
 * %X        - hexadecimal (uppercase)
 * %o        - octal
 * %e        - scientific notation
 * %u        - unsigned int
 * %ld       - long int
 * %lld      - long long int
 * %lu       - unsigned long
 * %zu       - size_t
 * %%        - literal percent sign
 */

// ============================================
// QUICK REFERENCE: Operator Precedence
// ============================================
/*
 * Highest to Lowest:
 * () [] -> .           (function call, array, member access)
 * ! ~ ++ -- + - * &    (unary operators)
 * * / %                (multiplication, division, modulus)
 * + -                  (addition, subtraction)
 * << >>                (bitwise shift)
 * < <= > >=           (comparison)
 * == !=               (equality)
 * &                    (bitwise AND)
 * ^                    (bitwise XOR)
 * |                    (bitwise OR)
 * &&                   (logical AND)
 * ||                   (logical OR)
 * ?:                   (ternary)
 * = += -= etc.         (assignment)
 * ,                    (comma)
 */