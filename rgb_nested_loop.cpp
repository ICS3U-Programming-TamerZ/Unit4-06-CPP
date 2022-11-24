// Copyright (c) Tamer Zreg All rights reserved.
//
// Created by: Tamer Zreg
// Date: November 23rd 2022
// This program prints different RGB colour codes
// to the console using nested for loops.
#include <iostream>

int main() {
    // initialize the colours
    int red = 0;
    int green = 0;
    int blue = 0;

    // display opening message
    std::cout << "Here are RGB colour variations up to 50:";
    std::cout << std::endl;
    std::cout << std::endl;

    // determines the different colour codes
    // displays results to the console
    for (blue = 0; blue < 51; blue++) {
        std::cout << "RGB (" << red << ", " << green << ", " << blue << ")\n";
        if (blue == 50) {
            std::cout << std::endl;
            for (green = 1; green < 51; green++) {
                blue = 0;
                std::cout << "RGB (" << red << ", ";
                std::cout << green << ", " << blue << ")\n";
                if (green == 50) {
                    std::cout << std::endl;
                    for (red = 1; red < 51; red++) {
                        int newG = green * 0;
                        std::cout << "RGB (" << red << ", ";
                        std::cout << newG << ", " << blue << ")\n";
                    }
                }
            }
            break;
        }
    }
}
