/****************************************************************************
 * Copyright (C) 2020 by Matthew Krueger                                    *
 *                                                                          *
 * This file is part of GraceNote-Submission-Formatter (GSF.                *
 *                                                                          *
 *   GSF is free software: you can redistribute it and/or modify it         *
 *   under the terms of the GNU General Public License as published         *
 *   by the Free Software Foundation, either version 3 of the License, or   *
 *   (at your option) any later version.                                    *
 *                                                                          *
 *   GSF is distributed in the hope that it will be useful,                 *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *   GNU General Public License for more details.                           *
 *                                                                          *
 *   You should have received a copy of the GNU General Public              *
 *   License along with GSF.                                                *
 *   If not, see <http://www.gnu.org/licenses/>.                            *
 ****************************************************************************/

#include <iostream>
#include <cstring>

#include "utils.hpp"

int main(int argc, char ** argv){

    // test parameters
    if(argc < 3){
        std::cerr << "This application requires you to pass the flag -o ${output_file_name} to it\n";
        return 1;
    }

    std::string * outputFile = nullptr;
    std::string * locationID = nullptr;

    for(int argvPos = 1; argvPos < argc; ++argvPos){

        // test if outputFile
        if(std::strcmp(argv[argvPos], "-o") == 0){
            std::cerr << argvPos;
            // the next param is outputFile
            if(!safeAdd(argvPos, argc)){
                std::cout << "Option -o not followed with output file name\n";
                return 1;
            }

            // there is an output file. Verify correct format later
            outputFile = new std::string(argv[argvPos]);

        }

        // test if outputFile
        if(std::strcmp(argv[argvPos], "-l") == 0){
            std::cerr << argvPos;
            // the next param is outputFile
            if(!safeAdd(argvPos, argc)){
                std::cout << "Option -l not followed with location ID\n";
                return 1;
            }

            // there is an output file. Verify correct format later
            locationID = new std::string(argv[argvPos]);

        }

    }

}