#include <iostream>
#include <string>

int main() {
  auto forecast = [](const std::string& w) {
    if (w == "Sunny")
      return "Cloudy";
    else if (w == "Cloudy")
      return "Rainy";
    else
      return "Sunny";
  };

  std::string weather;
  std::cin >> weather;
  std::cout << forecast(weather) << std::endl;
}