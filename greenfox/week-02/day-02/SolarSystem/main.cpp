#include <iostream>
#include <vector>

std::vector<std::string> putSaturn(std::vector<std::string>& planets)
{
    planets.push_back("Saturn");
    return planets;
}

int main() {
    std::vector<std::string> planets = {"Mercury","Venus","Earth","Mars","Jupiter","Uranus","Neptune"};

    // Saturn is missing from the planetList
    // Insert it into the correct position
    // Create a method called putSaturn() which has list parameter and returns the correct list.

    // Expected output: Mercury Venus Earth Mars Jupiter Uranus Neptune Saturn
    for(const auto& planet : putSaturn(planets))
    {
        std::cout << planet << " ";
    }

    return 0;
}