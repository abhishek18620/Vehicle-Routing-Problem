#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

class Customer {
public:
  Customer()
      : c_demand(0)
      , c_time_window(std::make_pair(0, 24)) {}

  int GetDemand() const { return c_demand; }

  int GetDistanceFromCustomer(int dest_customer) const {
    return c_distance[dest_customer];
  }

private:
  int c_demand;    // quantity this customer needs
  int c_delivered; // quantity delivered

  std::vector<int> c_distance; // -1 for no path

  std::pair<int, int> c_time_window;

  // TODO: Not sure if this is needed
  std::vector<int> split_deliveries;
};
