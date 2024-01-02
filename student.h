#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    // Конструктор
    Student(std::string name, int age, double gpa);

    // Методи для отримання інформації про студента
    std::string getName() const;
    int getAge() const;
    double getGPA() const;

    // Метод для виведення інформації про студента
    void displayInfo() const;

private:
    // Змінні-члени класу
    std::string name;
    int age;
    double gpa;
};

#endif // STUDENT_H
