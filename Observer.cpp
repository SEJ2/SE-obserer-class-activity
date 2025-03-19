#include "Observer.hpp"
#include <iostream>

Observer::Observer(const std::string &name) : name(name) {}

void Observer::OnUpdate(const std::string &message)
{
    std::cout << name << " received: " << message << std::endl;
}

std::string Observer::GetName() const
{
    return name;
}