#include <iostream>
#include "Observer.hpp"
#include "Subject.hpp"

int main()
{
    // Create a subject
    Subject weatherStation;

    // Create observers
    Observer observer1("Weather App");
    Observer observer2("News Service");
    Observer observer3("Weather Display");

    // Register observers
    weatherStation.Register(&observer1);
    weatherStation.Register(&observer2);
    weatherStation.Register(&observer3);

    // Notify all observers
    weatherStation.SetState("Temperature: 72°F, Sunny");

    // Unregister an observer
    weatherStation.Unregister(&observer2);

    // Notify remaining observers
    weatherStation.SetState("Temperature: 68°F, Cloudy");

    return 0;
}