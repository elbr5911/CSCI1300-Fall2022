#include <iostream>

using namespace std;

// Rules to follow when you work with variables

int main()
{
    // Rules for variable names/identifiers and initial value:
    // Error #1: name must start with a character or _


    // Error #2: you cannot use a reserved word as a variable name
    // float, int, new, class, if, main, cout are a few of the reserved words we cannot use for variable names
 


    // Error #3: some symbols are not allowed. cannot have spaces in the name
    // . / are few symbols that we can't use for variable names
    

    /* 
    c++ style guide:  https://google.github.io/styleguide/cppguide.html
    Naming convention: https://google.github.io/styleguide/cppguide.html#Naming
    */

    // MEANINGFUL NAMES!!!
    int we_can_do_this;  // I will use this naming convention for variables
    int weCanDoThis; //eg: camel case naming convention; for functions


    // Error #4: the initial value MUST MATCH the declared type. All the time?
    // Answer: 
    int num10 = 105.7;  
    
    // A warning displayed in the console and c++ implicity casts 105 to variable
    
    
    
    // Typecasting: int to double, double to int, int to char, char to int
    // implicit vs. explicit



    // static_cast <data_type> (variable_name) or (data_type)variable_name
   


    // explicitly casting a decimal value to an integer
    

    
    

    return 0;
}