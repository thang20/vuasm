#pragma once

#include <iostream>
#include <string>

#define BASIC 1000
using namespace std;
class Employee
{
protected :
    int id;
    double rate;
    static int count;
    string name;
public:
    Employee();
    Employee(const string &name, const double &rate);
    virtual double salary() const = 0;
    virtual void display() const;
    void setRate(const double &rate);
    virtual ~Employee();
};


