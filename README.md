## Experiment 2

# Aim-
To study and implement C++ program(Data types)

# Theory-
Understanding the size of various data types is crucial for memory management and optimization in programming. Different data types (e.g., int,short int,long int,float, double,long double,bool,char,auto,register) occupy different amounts of memory. and checking of size of some data types given by user.

Int data type:-
In programming, the int data type is used to represent integer values, which are whole numbers without a fractional part.

For example:

In Python, the int type can represent arbitrarily large numbers, limited only by the amount of available memory, as Python automatically handles larger integers with its built-in int type.
The int type is fundamental in programming for performing arithmetic operations, loops, indexing arrays, and more.

Float data type:-
The float data type is used to represent real numbers with fractional parts, allowing for the representation of both whole and decimal numbers.

The range of values for a 32-bit float is roughly from (1.4 \times 10^{-45}) to (3.4 \times 10^{38}).

Floats support arithmetic operations like addition, subtraction, multiplication, and division.

Floats are widely used in scientific calculations, graphics, simulations, and any application requiring real-number arithmetic.

Double data type:-
The double data type is used to represent double-precision floating-point numbers. It provides greater precision and a larger range than the float data type. Double-precision floating-point format is also based on the IEEE 754 standard, typically using 64 bits.

The range of values for a 64-bit double is roughly from (5 \times 10^{-324}) to (1.7 \times 10^{308}).

Doubles support all the same arithmetic operations as floats (addition, subtraction, multiplication, division).

Char dat type:-
The char data type is used to represent single characters.

Generally, a char is 1 byte (8 bits), capable of representing 256 different values (0-255).

Characters are often used as the building blocks of strings, with arrays or sequences of char values representing strings.

The char data type is fundamental for text processing, file I/O operations, and any context where individual characters need to be manipulated or analyzed.

Auto data type:-
The auto keyword is a feature in C++ (introduced in C++11) that allows the compiler to automatically deduce the type of a variable from its initializer.

The compiler determines the type of the variable based on the expression used to initialize it.

It Reduces the verbosity of code, especially with complex type declarations.

The auto keyword is a powerful tool in C++ that can lead to cleaner, more maintainable code when used judiciously.

Register data type:-
The register keyword in C and C++ is used to suggest to the compiler that a particular variable should be stored in a CPU register, if possible, for faster access.

## Code -
1.
```
//Soham
//23070123084
//entc B1
//experiment 2
#include<iostream>
using namespace std;
int main() {
    cout<<"size of char:"<<"sizeof(char)"<< "byte(s)"<<endl;
    cout<<"size of int:"<<"sizeof(int)"<< "byte(s)"<<endl;
    cout<<"size of short int:"<<"sizeof(short int)"<<"byte(s)"<<endl;
    cout<<"size of long int:"<<"size of (long int)"<<"byte(s)"<<endl;
    cout<<"size of float:"<<"size of(float)"<<"byte(s)"<<endl;
    cout<<"size of double:"<<"size of(double)"<<"byte(s)"<<endl;
    cout<<"size of long double:"<<"size of(long double)"<<endl;
    cout<<"size of bool:"<<"size of(bool)"<<endl;
    return 0;
}
```
2.
```
//Soham
//23070123084
//entc b1
//experiment 2B
#include<iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter any integer:";
    cin>>a;
    cout<<"\ninteger="<<a<<" and "<<sizeof(a)<< "bytes";
    float b;
    cout<<"Enter a number:";
    cin>>b;
    cout<<"\nfloat="<<b<<" and "<<sizeof(b)<< "bytes";
    short int c;
    cout<<"Enter an integer:";
    cin>>c;
    cout<<"\nshort integer"<<c<<" and "<<sizeof(c)<< "bytes";
    return 0;
}
```
2.
```
//Soham
//23070123084
//entc b1
//experiment 2C
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter any integer:";
    cin>>a;
    cout<<"integer ="<<a<<" and size is"<<sizeof(a)<<"bytes";
    register int b;
    cout<<"Enter a number:";
    cin>>b;
    cout<<"register ="<<b<<" and size is "<<sizeof(b)<<"bytes";
    auto c =0;
    cout<<"Enter an integer:";
    cin>>c;
    cout<<"auto ="<<c<<"size is"<<sizeof(c)<<"bytes";
    return 0;
}

```
## Explanation -
The program uses the sizeof operator to determine and display the size of various data types in bytes. It includes common data types such as int, float, double, char,bool,register,auto,short int,long int,long double and others.

## Output-
1.![image](https://github.com/user-attachments/assets/394e92df-bb97-438f-a993-8cf48639d642)


2.
![image](https://github.com/user-attachments/assets/9b7dd1d5-8931-41a4-bfe7-00f3522cb32e)



3.
![image](https://github.com/user-attachments/assets/1a54e879-3768-4047-9d67-f140a13d5afd)



# Conclusion -
This program helps in understanding how much memory is allocated for different data types, which is important for writing efficient and optimized code.
