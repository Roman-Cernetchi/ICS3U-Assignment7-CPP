// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Roman Cernetchi
// Created on: January 2021
// This program returns the odd numbers in a list

#include <iostream>
#include <array>


int oddIndices(float (&list_U)) {
    // This program returns the odd numbers in a list

    int list2 = [];
    int count = 0;
    int loopCounter = 0;

    // process
    for (single_element in listU) {
        if (loop_counter % 2 == 1)
            total += array_2D[rowElement][columnElement];
    }
    for single_element in list_U:
        if loop_counter % 2 == 1:
            list2.append(single_element)
        loop_counter += 1
    return list2;
}


int main() {
    // This program returns the odd numbers in a list

    // variables
    std::string amountString;
    int amount;
    std::string numberString;
    int number;
    int loop_counter = 0;
    float list_U = [];

    // creating 2D array
    while (true) {
        std::cout << "Enter how many numbers you will use: ";
        std::cin >> amountString;
        std::cout << "" << std::endl;


        try {
            amount = std::stof(amountString);
            if (amount < 0) {
                throw std::invalid_argument("This wasn't an integer");
            }

            break;
        } catch (std::invalid_argument) {
                // output
                std::cout << "That was not a valid integer" << std::endl;
        }
    }

    while (loop_counter < amount) {
        loop_counter = loop_counter + 1;

        while (true) {
                // input
                std::cout << "Enter a chosen number: ";
                std::cin >> numberString;
            try {
                number = std::stof(numberString);
                if (number < 0) {
                    throw std::invalid_argument("This wasn't an integer");
                }

                break;
            } catch (std::invalid_argument) {
                // output
                std::cout << "That was not a valid integer" << std::endl;
            }
        }
    }


    list2 = odd_indices(list_U);

    std::cout << "" << std::endl;
    std::cout << listU << std::endl;
    std::cout << "The odd elements in the list are: {0} " << list2
              << std::endl;
}
