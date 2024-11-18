/*
* w3schools - C++
* Linguagem orientada a objetos
* Suporta objetos e classes
* 
*/

#include <iostream>
#include <string>
using namespace std;

class MyClass{
  public:
    int myNum;
    string myString;
  
  public:
  void sayHello(){
    cout << "Hello!" << endl;
  }
};



int main() {
  // cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example, it will output "Hello World!".
  cout << "Hello world! \n";
  // if "useing namespace std" is omitted, use std::
  std::cout << 4*4;

  // Another way to insert a new line, is with the endl manipulator
  cout << "\nendl is another way to insert a new line" << endl;

  //\t creates a horizontal tab
  cout <<"1 \t 2 \t 3 \n";

/*----------------------------------------------------------------------------------------------------------------------*/
/* 
* Variables
* int - stores integers (whole numbers), without decimals, such as 123 or -123
* double - stores floating point numbers, with decimals, such as 19.99 or -19.99
* char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
* string - stores text, such as "Hello World". String values are surrounded by double quotes
* bool - stores values with two states: true or false
* int myNum = 5;               // Integer (whole number without decimals)
* double myFloatNum = 5.99;    // Floating point number (with decimals)
* char myLetter = 'D';         // Character
* string myText = "Hello";     // String (text)
* bool myBoolean = true;       // Boolean (true or false)
*/


int myage = 44;
cout << "My age is " << myage <<" years old\n";

/*----------------------------------------------------------------------------------------------------------------------*/
/*
* Declare many variables
*/
int a = 5, b = 6, c = 50;
cout << a + b + c << endl;

int x,y,z;
x = y = z = 100;
cout << x + y + z << endl;


/*----------------------------------------------------------------------------------------------------------------------*/
/* 
* C++ Identifiers (variable names)
* Names can contain letters, digits and underscores
* Names must begin with a letter or an underscore (_)
* Names are case-sensitive (myVar and myvar are different variables)
* Names cannot contain whitespaces or special characters like !, #, %, etc.
* Reserved words (like C++ keywords, such as int) cannot be used as names
*/
/*----------------------------------------------------------------------------------------------------------------------*/

/* 
* When you declare a constant variable, it must be assigned with a value:
const int minutesPerHour;
minutesPerHour = 60; // error

*/

/*----------------------------------------------------------------------------------------------------------------------*/
/* 
* USER INPUT 
* cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).


*/
// string name;
// cout << "Tell me your name: ";
// cin >> name;
// cout << "Hello, " << name;

/*----------------------------------------------------------------------------------------------------------------------*/
/*
* Complete <iostream> Reference
* Tip: Both cin and cout belongs to the <iostream> library, which is short for standard input / output streams. For a complete reference of <iostream> * objects along with detailed information, go to our C++ iostream Reference.
*/


/*----------------------------------------------------------------------------------------------------------------------*/
/*
* float vs. double

* The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore it is safer to use double for most calculations.
*/


/*----------------------------------------------------------------------------------------------------------------------*/
/*
* Strings
* To use strings, you must include an additional header file in the source code, the <string> library:

*/
string greeting = "Hello\n";
cout << greeting;
cout << greeting.length() << endl;

// *Atenção para o fato de que o "\n" é contado como caracter

/*
* The at() function
* The <string> library also has an at() function that can be used to access characters in a string:
*/

cout << greeting.at(0) << endl;


// * Referencias

string food = "lasanha";
string &meal = food;

cout << food << endl;
cout << meal << endl;

// Memory Address
// In the example from the previous page, the & operator was used to create a reference variable. But it can also be used to get the memory address of a variable; which is the location of where the variable is stored on the computer.

// When a variable is created in C++, a memory address is assigned to the variable. And when we assign a value to the variable, it is stored in this memory address.

// To access it, use the & operator, and the result will represent where the variable is stored:

cout << &meal << endl;
cout << &food << endl;

/*
* A pointer however, is a variable that stores the memory address as its value.
* A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer:

* Tip: There are three ways to declare pointer variables, but the first way is preferred:

* string* mystring; // Preferred
* string *mystring;
* string * mystring;

* Get Memory Address and Value
* In the example from the previous page, we used the pointer variable to get the memory address of a variable (used together with the & reference operator). However, you can also use the pointer to get the value of the variable, by using the * operator (the dereference operator):


*/

string car = "honda";
string *car_ptr = &car;

cout << car << endl;
cout << *car_ptr << endl;

car = "toyota";
cout << *car_ptr << endl; //Create an object called "myObj" and access the attributes:


/*
* Create an object called "myObj" and access the attributes:
*/

MyClass myobj;
myobj.myNum = 5;
myobj.myString = "five";

cout << myobj.myNum << endl;
cout << myobj.myString << endl;
myobj.sayHello();

// * C++ Access Specifiers

  return 0;
}
