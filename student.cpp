#include "student.h"
#include <iostream>

// Реалізація конструктора
Student::Student(std::string name, int age, double gpa)
        : name(name), age(age), gpa(gpa) {}

// Реалізація методів для отримання інформації про студента
std::string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

double Student::getGPA() const {
    return gpa;
}

// Реалізація методу для виведення інформації про студента
void Student::displayInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "GPA: " << gpa << std::endl;
}
