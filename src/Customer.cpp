//
// Created by liad on 11/5/18.
//
#include "../include/Customer.h"
#include <iostream>
using namespace std;


Customer :: Customer(std::string c_name, int c_id): name(c_name), id(c_id){}
std::string Customer :: getName() const{return name;};
int Customer :: getId() const{return id;}


