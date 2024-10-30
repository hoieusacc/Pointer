#include <iostream>
using namespace std;

struct people{
    string name;
    string dateOfBirth;
    int age;
    string school;
};

int main(){
    people student;
    student.name = "Hoang Trung Hieu";
    student.dateOfBirth = "05/09/2006";
    student.age = 18;
    student.school = "University of Engineering and Tecnology";
    cout << "I am " << student.name << ", I was born in " << student.dateOfBirth << ", I am " << student.age << " and I study in " << student.school << endl;
    return 0;
}