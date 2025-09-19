//
// Created by Sameer on 18-09-2025.
//
#include<iostream>
#include<ctime>
using namespace std;

int main() {
    srand(time(nullptr));
    int minVal = 1;
    int maxVal = 6;
    long first_random_num = (rand() % (maxVal - minVal +1)) + minVal;
    long second_random_num = (rand() % (maxVal - minVal +1)) + minVal;
    cout << first_random_num << " " << second_random_num << endl;
    return 0;
}