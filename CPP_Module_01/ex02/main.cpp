# include <iostream>
# include <string.h>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string& stringREF = string;
    std::string* stringPTR = &string;

    std::cout << "The memory address of the string variable is " << &string << std::endl;
    std::cout << "The memory address held by stringPTR is " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF is " << &stringREF << std::endl;

    std::cout << "The value of the string variable is " << string << std::endl;
    std::cout << "The value pointed to by stringPTR is " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF is " << stringREF << std::endl;
    return (0);
}