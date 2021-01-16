// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Roman Cernetchi
// Created on: January 2021
// This program returns the odd numbers in a list

#include <iostream>
#include <array>

template<size_t N>
std::array<int, 10> odd_indices(std::array<int, N> input_array) {
    // This program returns the odd numbers in a list

    std::array<int, 10> returned_array;
    int loop_counter = 0;

    // process
    for (int single_element : input_array) {
        if (loop_counter % 2 == 1) {
            returned_array[loop_counter] = single_element;
        }

        loop_counter++;
    }
    return returned_array;
}


int main() {
    // This program returns the odd numbers in a list

    const int AMOUNT = 10;
    int number;
    int loop_counter = 0;
    std::string number_string;
    std::array<int, 10> input_array;
    std::array<int, 10> returned_array;


    for (int loop_counter = 0; loop_counter < AMOUNT; loop_counter++) {
        while (true) {
            // input
            std::cout << "Enter a chosen number: ";
            std::cin >> number_string;
            try {
                number = std::stoi(number_string);
                if (number < 0) {
                    throw std::invalid_argument("This wasn't an integer");
                }
                input_array[loop_counter] = number;
                break;
            } catch (std::invalid_argument) {
                // output
                std::cout << "That was not a valid integer" << std::endl;
            }
        }
    }

    returned_array = odd_indices(input_array);

    for (int single_element : returned_array) {
        if (loop_counter % 2 == 1) {
            std::cout << returned_array[loop_counter] << ", ";
        }

        loop_counter++;
    }
}
