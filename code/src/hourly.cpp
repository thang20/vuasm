#include"../include/hourly.h"
Hourly::Hourly():Employee()
{
    this->hours = 0.0;
}
Hourly::Hourly(const string &name , const double &rate , const double &hours):Employee(name, rate){
    this->hours = hours;
}
double Hourly::salary() const{
    return rate*BASIC*hours/160;
}
void Hourly::setHours(const double &hours){
    this->hours = hours;
}
