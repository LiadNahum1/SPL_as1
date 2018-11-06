//
// Created by USER on 11/5/2018.
//
#include "../include/Action.h"
BaseAction::BaseAction() {}
void BaseAction::complete() {status = COMPLETED; }
void BaseAction::error(std::string errorMsg) {
    status = ERROR;
    std::cout << errorMsg;
}
std::string BaseAction::getErrorMsg() const { return errorMsg;}
ActionStatus BaseAction::getStatus() const {return status;}