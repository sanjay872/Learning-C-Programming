#include <iostream>

int sum(int n1, int n2){
    return n1+n2;
}

int main() {
    int result=sum(1,2);
    std::string name, full_name;
    int year, age;

    std::cout << "Enter full name: " << std::endl;
    std::getline(std::cin,full_name);
    std::cout << "Enter name: " << std::endl;
    std::cin >> name;
    std::cout << "Enter Year of birth and age: " << std::endl;
    std::cin >> year >> age;
    std::cout << "Hello " << full_name << std::endl;
    std::cout << "Born in " << year << " and age is " << age <<std::endl;
    std::cout << "Result: " << result << std::endl;
    std::cout << "Result: " << sum(2,3) << std::endl;
    return 0;
}