#pragma once
#include <string>

// Observer class
class Observer
{
private:
    std::string name;

public:
    Observer(const std::string &name);
    void OnUpdate(const std::string &message);
    std::string GetName() const;
};