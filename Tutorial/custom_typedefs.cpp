//
// Created by Sameer Siddiqui on 18-09-2025.
//
#include <iostream>
#include <vector>
#include <string>
#include <tuple>

using namespace std;

// Default approach
// typedef vector<tuple<string, int, string>> userdata_t;

// More Advanced and better approach
using userdata_t = vector<tuple<string, int, string>> ;

int main() {

    userdata_t users = {{"Sameer",10, "Delhi"},{"Siddiqui",20, "London"}};
    std::cout << "Default Initialise Size: " << users.size() << std::endl;
    users.push_back(make_tuple("Peter", 30, "New York"));
    std::cout << "New Size after inserting a value: " << users.size() << std::endl;
    for (const auto& user : users) {
        std::cout << get<0>(user) << " " << get<1>(user) << " " << get<2>(user) <<std::endl;
    }
    return 0;
}