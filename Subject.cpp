#include "Subject.hpp"
#include "Observer.hpp"
#include <iostream>
#include <algorithm>

void Subject::Register(Observer *observer)
{
    observers.push_back(observer);
    std::cout << "Registered: " << observer->GetName() << std::endl;
}

void Subject::Unregister(Observer *observer)
{
    auto it = std::find(observers.begin(), observers.end(), observer);
    if (it != observers.end())
    {
        observers.erase(it);
        std::cout << "Unregistered: " << observer->GetName() << std::endl;
    }
}

void Subject::NotifyAll(const std::string &message)
{
    std::cout << "\nNotifying all observers:" << std::endl;
    for (auto observer : observers)
    {
        observer->OnUpdate(message);
    }
}

void Subject::SetState(const std::string &newState)
{
    state = newState;
    NotifyAll(state);
}