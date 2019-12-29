#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

class Vehicle {
public:
  int GetMaxFuel() const { return c_max_fuel; }

  int GetFuelLeft() const { return c_fuel_left; }

private:
  int c_max_fuel;  // fuel limit of the vehicle
  int c_fuel_left; // fuel left in gas tank

  std::unordered_set<int> c_route; // route of the vehicle
};
