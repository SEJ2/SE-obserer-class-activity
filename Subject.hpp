#pragma once
#include <vector>
#include <string>
#include "Observer.hpp"

class Subject
{
private:
    std::vector<Observer *> observers;
    std::string state;

public:
    void Register(Observer *observer);
    void Unregister(Observer *observer);
    void NotifyAll(const std::string &message);
    void SetState(const std::string &newState);
};