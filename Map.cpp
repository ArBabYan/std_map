#include <iostream>
#include <map>
#include <string>


void CountryMap(std::map<std::string, std::string>& countryMap) {
    countryMap.insert(std::make_pair("Armenia", "Yerevan"));
    countryMap.insert(std::make_pair("Australia", "Canberra")); 
    countryMap.insert(std::make_pair("Brazil", "Brasilia"));
    countryMap.insert(std::make_pair("China", "Beijing"));
    countryMap.insert(std::make_pair("France", "Paris"));
    countryMap.insert(std::make_pair("Germany", "Berlin"));
    countryMap.insert(std::make_pair("India", "New Delhi"));
    countryMap.insert(std::make_pair("Japan", "Tokyo"));
    countryMap.insert(std::make_pair("Russia", "Moscow"));
    countryMap.insert(std::make_pair("USA", "Washington, District of Colombia"));

}
int main()
{
    std::map<std::string, std::string> countries;
    CountryMap(countries);
    for (const auto& pair : countries) {
        std::cout << pair.first << "  " << pair.second << std::endl;
    }
}
