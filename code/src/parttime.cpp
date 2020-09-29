#include"../include/parttime.h"
Parttime::Parttime():Employee(){}
Parttime::Parttime(const string &name , const double &rate):Employee(name , rate){}
double Parttime::salary() const{
    return rate*BASIC*0.5;
}