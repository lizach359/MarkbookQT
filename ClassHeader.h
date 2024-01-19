#ifndef CLASSHEADER_H
#define CLASSHEADER_H

#endif // CLASSHEADER_H

#pragma once
#include <vector>
#include <string>


using namespace std;

class Evaluation
{
protected:
    float mark;
    string name;
public:
    Evaluation(float setMark, string setName)
    {
        mark = setMark;
        name = setName;
    }
};
class Student
{
protected:
    vector <Evaluation> marks;
    string name;
public:
    Student(string setName, vector <Evaluation>setMarks)
    {
        name = setName;
        marks = setMarks;
    }
    string getName()
    {
        return name;
    }
};
class Teacher
{
protected:
    vector <Student> classList;
    string username;
    string password;
public:
    Teacher(string setUsername, string setPassword, vector <Student> setClassList = {})
    {
        username = setUsername;
        password = setPassword;
        classList = setClassList;
    }
    string getUsername()
    {
        return username;
    }
    string getPassword()
    {
        return password;
    }
    vector <Student> getClassList()
    {
        return classList;
    }
};

vector <Evaluation> marks = { Evaluation(100, "Math"), Evaluation(100, "Math") };
vector <Student> classList = { Student("Zach", { Evaluation(100, "Math"), Evaluation(100, "Math") }) };
Teacher teacher1("gayden", "Jason123", classList);
vector <Teacher> teachers = { teacher1 };
int teacherSelection;

