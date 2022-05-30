// this is where the preproccessor instructions go
// this is where the header files go

#include <stdio.h> //header function
// stdio stands for STandarD Input and Output stream
// allows us to use the printf function

#include <stdlib.h> //memory management functions
#include <string.h> //numerous string functions
//////////////////////////////////////////////////
// strlen(str): returns length string stored in str
// not including the null character.
//
// strcat(str1,str2): appends (concatenates) str2
// to the end of str1 and returns a pointer to str1
//
// strcpy(str1,str2): copies str2 to str1
// useful to assign newvalue to string
//
// there are numerous other string functions.
//////////////////////////////////////////////////

#define constPI 3.14 // preproccessing directive macro
// all mentions of constPI are replaced with 3.14
// macros dont use memory
// macros can redefine c standard commands
// eg #define printf p

/* function declarations occur above main
------function declarations / prototypes
main {
------function calls'
}
------function definitions

*/
// these are referred to as function prototypes

int factorial(int num);
void say_hello();
int square(int num);
// function square returns int and takes parameter num

int main()
{ // main entry to program

  printf("001|Hello, World!\n"); // print to output

  // prints size of variable types in bytes
  // note: no booleans... or strings which are arrays
  int sizeint = sizeof(int);

  printf("002|int: ");
  printf("%d bytes or %d bits\n", sizeint, sizeint * 8);
  printf("003|float: %ld bytes\n", sizeof(float));
  printf("004|double: %ld bytes\n", sizeof(double));
  printf("005|char: %ld bytes\n", sizeof(char));

  int num;  // initialize variable with identifier num
  num = 32; // assign num the value of 32
  printf("006|num: %d \n", num);
  num = 33; // reassign value to num
  printf("007|num: %d \n", num);

  int num0 = 33 + 1; // declare and initialize variable
  printf("008|num0: %d \n", num0);

  float const PI = 3.14; // constants cant be changed
  printf("009|PI is %f a constant \n", PI);
  printf("010|PI is %f by macro \n", constPI);
  printf("011|PI address is %p \n", &PI);

  /* Color: red, Number: 42, float: 3.14  */
  printf("012|Color: %s, Number: %d", "red", 42);
  printf(", float: %5.2f\n", 3.14159);

  /* Pi = 3.14 */
  printf("013|Pi = %3.2f \n", 3.14159);

  /* Pi = 3.14159 */
  printf("014|Pi =%8.5f \n", 3.14159);

  /* Pi = 3.14159 */
  printf("015|Pi = %-8.5f \n", 3.14159);

  /* There are 22 apples in the tree. */
  printf("016|There are %d", 22);
  printf(" %s in the tree.\n", "apples");

  /*////////////////Format Specifiers\\\\\\\\\\\\\\

  Format specifiers:
   %d: integer     %f: float
   %x: hexadecimal %e: scientific notation
   %d: decimal     %s:string
  %c: character

  >>>For Character
  %[*][max_field]conversion character

  >>>For String
  %[-][width].[precision]conversion_character:

  -optional - left alignment of the data in the string.
  -optional * will skip the input field.
  -optional max_width gives the maximum number
    of characters to assign to an input field.
  -optional precision
    number of decimal places for numeric data.
    If s is used as the conversion character,
    precision determines number of characters to print.
  -conversion char converts to type:,d,c,s,f,x

  Other Format Rules:
     & variable: address operator.
     -gives address/location in memory, of variable.

  /*/
  ///////////////Format Specifiers\\\\\\\\\\\\\*\\

  /////////////////String     Format\\\\\\\\\\\\\\\
// Escape sequences begin with a backslash \:
  // \n new line
  // \t horizontal tab
  // \\ backslash
  // \b backspace
  // \' single quote
  // \" double quote
  // To print the % symbol, use %% in format string.
  /////////////////String     Format\\\\\\\\\\\\\\\


  // operators in C self-explanatory
  // below code using %modulus and /division
  int i1 = 10;
  int i2 = 3;
  int quotient, remainder;

  float f1 = 4.2;
  float f2 = 2.5;
  float result;

  quotient = i1 / i2;  // 3
  remainder = i1 % i2; // 1
  result = f1 / f2;    // 1.68

  printf("017|%d \n", quotient);
  printf("018|%d \n", remainder);
  printf("019|%f \n", result);

  // know operator precedence and left associativity
  // 5 + 3 * 2 is 11, (5 + 3) * 2 is 16.
  // x*y*z will be evaluated as (x*y)*z not x*(y*z)

  //// TYPE CONVERSION
  // If expression has operands of different data types
  // they are automatically converted as necessary
  // eg a float devided by int result is float

  //// TYPE CASTING
  // You can force type conversion
  // declare result whatever type you want
  // eg average = (float) total / count;

  //// ASSIGNMENT OPERATORS
  // += -= /= %= etc

  ////// INCREMENT AND DECREMENT
  // ++ --
  //// prefix vs postfix
  // x = z--; assign 3 to x, then decrement z to 2
  // x = ++y; increment y to 4, then assign 4 to x

  // lets use our function we declared earlier
  int x, xsquared;
  x = 3;
  xsquared = square(x);
  printf("020|%d squared is %d \n", x, xsquared);

  x = 5;
  printf("021|The factorial of ");
  printf("%d is %d\n", x, factorial(x));

  int i;
  for (i = 0; i < 5; i++)
  {
    say_hello();
  }

  /////////////////Arrays\\\\\\\\\\\\\\\
 //array declaration
  int test_scores[25]; // array size 25
  // declare and initialise
  float prices[5] = {3.2, 6.55, 10.49, 1.25, 0.99};
  // access element
  float third_element = prices[2];
  printf("027|3rd element is %.2f\n", third_element);
  // reassign element
  prices[2] = 9.11;
  third_element = prices[2]; // need to reinitialise
  printf("028|3rd element now %.2f\n", third_element);

  // note: missing values set to zero
  /*note: array is stored in
     contiguous memory locations
     and cannot change size after being declared.
  */
  /////////////////Pointers\\\\\\\\\\\\\\\\\\\\\\\\\\\\
 Pointers are declared using * symbol and take form:
  // pointer_type *identifier

  int j = 63;
  int *p = NULL;
  p = &j;

  printf("029|address of j is %ls\n", &j);
  printf("030|value of j is %d\n", j);
  printf("031|p is pointing to the value %d\n", *p);

  // pointers can be used in expressions

  /////////////////Strings\\\\\\\\\\\\\\
// strings end in null char -> '\0'
  // null character ussually added by compiler
  // syntax: char str_name[str_length]="string"

  char str0[20] = "This is a string\n";
  printf("032|%s", str0);
  // str1 declared without length
  char str1[] = "This is a string\n";
  printf("033|%s", str1);

  // str can be declared as a set of characters
  // with this method include null or \0 at the end
  char str2[] = {'0', '3', '4', '|', 'S', 'T', 'R', '\0'};
  printf("%s->", str2);
  fputs(str0, stdout);
  str2[2] = '5';
  puts(str2);

  char info0[100];
  char dept[] = "HR";
  int emp = 75;
  sprintf(info0, "%s dept has %d employees", dept, emp);
  printf("036|");
  printf("%s\n", info0);

  char info1[] = "Snoqualmie WA 13190";
  char city[50];
  char state[50];
  int population;
  sscanf(info1, "%s %s %d", city, state, &population);
  printf("037|");
  printf("%d people in %s, %s.", population, city, state);
  printf("\n");

  /////String Output Function
  /*
  fputs()
    (1) requires name of string
    (2) pointer to where string should be printed
    (3) can use stout to refere to standard output

  putf()
    (1) takes only string argument
    (2) can be used to display output
    (3) adds newline to output

  sprintf()
    Useful from creating string from multiple inputs

  sscanf()
    The function reads values from a string and
    stores them at corresponding variable addresses.


  int atoi(str)    | ASCII to integer
  double atoi(str) | ASCII to double
  long atoi(str)   | ASCII to long int
  //0 is returned if no numbers encountered

  */

  char s1[] = "038|";
  char s2[] = "The grey fox";
  char s3[] = " jumped.\n";

  // check out my mad concatenation skills
  strcat(s1, s2);
  strcat(s1, s3);
  printf("%s", s1);

  // strlen function
  printf("039|Length of s1 is %ld\n", strlen(s1));

  strcpy(s1, s2); // string copy function
  printf("040|s1 is now %s \n", s1);

  // you can use multidimentional arrays
  char trip[3][15] = {
      "suitcase",
      "passport",
      "ticket"};

  printf("041|Bring the following:\n");
  printf("042|");
  for (int i = 0; i < 3; i++)
  {
    printf("%s ", trip[i]);
  }
  printf("\n");

  //////Next Section: Function Pointers////
  /*
  function pointer declaration syntax:
  return_type(*func_name)(parameters)

  similiar to how you declare normal pointers
  parantheses arounf *func_name important otherwise
   compiler will think it is a normal pointer
  */
  //////Next Section: Structures and Unions////////////
  // STRUCTURE:
  //  user-defined data type
  //  groups related variables of
  //  different data types

  // reminds me of a objects in JS
  // access using dot operator
  // here we define new data type course
  struct course
  { // note keyword
    int id;
    char title[40];
    float hours;
  };
  // the int, char and float are 3 members of struct

  /*
   * Need to put a semicolon after structure declaration
   * Also called a composite or aggregate data type
   * Some languages refer to structures as records
   * Stored in a continuous block of memory
   *
   * Typedef keyword creates type definition simplifies
   * code and makes a program easier to read.
   * typedef commonly used with structures, eliminates
   * the need for 'struct' when declaring variables.
   */

  typedef struct
  {
    int x;
    int y;
  } point;

  typedef struct
  {
    float radius;
    point center;
  } circle;

  circle c = {4.5, {1, 3}};
  printf("043|");
  printf("%3.1f %d,%d", c.radius, c.center.x, c.center.y);
  /* 4.5  1,3 */
  printf("\n");

  // Union:
  //  Store different data types,same memory location
  //  Like structure in that it has members however
  //  uses same memory location for all its members
  // only one member can occupy memory location at a time
  // Unions are used for memory management.
  // The largest member data type is used to determine
  // the size of the memory to share and then all members use this one location.
  // This process also helps limit memory fragmentation.
  // could also use . operator to access members

  union val
  {
    int int_num;
    float fl_num;
    char str[20];
  };

  /*   WORK IN PROGRESS

  Structures With Unions

  Unions are often used within structures because a structure can have a member to keep track of which union member stores a value.
  For example, in the following program, a vehicle struct uses either a vehicle identification number (VIN) or an assigned id, but not both:
  typedef struct {
    char make[20];
    int model_year;
    int id_type; /* 0 for id_num, 1 for VIN */
  //   union {
  //     int id_num;
  //     char VIN[20];
  //   } id;
  // } vehicle;

  // vehicle car1;
  // strcpy(car1.make, "Ford");
  // car1.model_year = 2017;
  // car1.id_type = 0;
  // car1.id.id_num = 123098;
  // Try It Yourself

  // Note that the union was declared inside the structure. When doing this, a union name was required at the end of the declaration.
  // A union with a union tag could have been declared outside the structure, but with such a specific use, the union within the struct provides easier to understand the code.

  // Note also the dot operator is used twice to access union members of struct members.

  // The id_type keeps track of which union member stores a value. The following statements display car1 data, using the id_type to determine which union member to read:
  // /* display vehicle data */
  // printf("Make: %s\n", car1.make);
  // printf("Model Year: %d\n", car1.model_year);
  // if (car1.id_type == 0)
  //   printf("ID: %d\n", car1.id.id_num);
  // else
  //   printf("ID: %s\n", car1.id.VIN);
  // Try It Yourself

  // A union can also contain a structure.

  ///////////////////// SYSTEM CALLS ///////////////////
  // you can call Unix or DOS commands within C
  // system("clear");
  /* COMMON UNIX COMMANDS:
  > 《redirection operator》        writes data to file
  >>《append operator》             appends data to file
  --help        view help info for some shell commands
  cd            changed directory
  chmod         changes file codes(permissions)
  cp            copies files
  echo          directs text to stout device (screen)
  history       show previous commands
  kill          terminates a process
  ls            lists content of directory
  man           view manual pages of shell some commands
  mkdir         creates a directory
  mv            moves or renames files
  ps            display process information
  pwd           prints working directory
  rm            removes file
  rmdir         removes a directory

  */

  ///////////////// MEMORY MANAGEMENT /////////////////

  /*
  malloc(ptr);
  calloc();
  realloc();
  free(ptr);
  */

  ///////////////// FILE MANAGEMENT //////////////////

  /*
  FILE -type
      yes in C a file is it's own type of pointer
  file stream
      tracks reading and writing last occurrences

  fopen(filename, mode)

      Returns a FILE pointer to file filename
      which is opened using mode.

      If a file cannot be opened, NULL is returned.

  Mode options are:
  - r open for reading (file must exist)
  - w open for writing (file need not exist)
  - a open for append (file need not exist)
  - r+ open for reading and writing from beginning
  - w+ open for reading and writing, overwriting file
  - a+ open for reading and writing, appending to file

  fclose(fp)
      Closes file opened with FILE fp,
      returning 0 if close was successful.
      EOF (end of file) returned if error in closing.

  //below opens file then closes it example:

  FILE *fptr; /file pointer

  fptr = fopen("myfile.txt", "w");

  if (fptr == NULL) {
      printf("Error opening file.");
      return -1;
  }

  fclose(fptr); //close file

  ** Good Programming Practie ***
  Closing a file when you are done using it

  Binary file mode options for the fopen() function are:
  - rb open for reading (file must exist)
  - wb open for writing (file need not exist)
  - ab open for append (file need not exist)
  - rb+ open for reading and writing from beginning
  - wb+ open for reading and writing, overwriting file
  - ab+ open for reading and writing, appending to file

  fwrite(ptr, item_size, num_items, fp)
  -Writes num_items items of item_size size
  -from pointer ptr to the file pointed to by file pointer fp.

  fread(ptr, item_size, num_items, fp)
  -Reads num_items items of item_size size from the
  -file pointed to by file pointer fp into memory pointed to by ptr.

  fclose(fp)
  -Closes file opened with file fp, returning 0 if close was successful.
  -EOF is returned if there is an error in closing.

  feof(fp)
  Returns 0 when the end of the file stream has been reached.


  */

  return 0; // apparently still works without line
  // 0 means program has successfully executed
} // between {} -> function or coding block

/////////////////////////|
///// END OF main() /////|
/////////////////////////|

/////////////////////////////////////////
/* here we define functions after main */
////////////////////////////////////////

int square(int num)
{
  int y;
  y = num * num;
  return (y);
}

// below we use recursion
// repeatedly calculating num*(num -1) until num is 1
int factorial(int num)
{
  if (num == 1) /* base case */
    return (1);
  else
    return (num * factorial(num - 1));
  // called factorial in factorial definition
}

// void means function returns nothing
void say_hello()
{
  static int num_calls = 1;
  /*  if we didnt use static
        we would only return
      'Hello number 1' 5 times   */
  printf("02%d|", num_calls + 1);
  printf("Hello number %d\n", num_calls);
  num_calls++;
}

//////////////////////////////////////////////////////

// extra info/topics not discussed etc appendum //
/*

VARIABLE SCOPE
    means the visibility of variables within program
    local vs global scope
STATIC VARIABLES
    they have local scope but arent destroyed after
    leaving the scope use keyword prefix "static"
VOID RETURN TYPE
    A function is not required to return a value,
    but a return type must still be in declaration.
    In this case, the keyword void is used.

//FORMAL PARAMETERS
The parameters in a function declaration
//ACTUAL PARAMETERS
The values passed to these parameters as arguments















POINTERS

Pointers allow you to easily work with memory locations.
Used for arrays, strings, and other data structures and algorithms.
A pointer is a variable that contains the address of another variable.
it "points" to the location assigned to a variable
and can indirectly access the variable.


pointer_type is the type of data the pointer will be pointing to. The actual pointer data type is a hexadecimal number, but when declaring a pointer, you must indicate what type of data it will be pointing to.
Asterisk * declares a pointer and should appear next to the identifier used for the pointer variable.

There are several things to notice about this program:
• Pointers should be initialized to NULL until they are assigned a valid location.
• Pointers can be assigned the address of a variable using the ampersand & sign.
• To see what a pointer is pointing to, use the * again, as in *p. In this case the * is called the indirection or dereference operator. The process is called dereferencing.

Some algorithms use a pointer to a pointer. This type of variable declaration uses **, and can be assigned the address of another pointer
*/