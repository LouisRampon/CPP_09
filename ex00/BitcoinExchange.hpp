#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <ctype.h>
#include <algorithm>

std::vector<std::string>    splitLine(std::string &line, char delim);
void                        saveData(std::vector <std::pair<std::string, float> > &data);
int                         checkInput(char *inputFile, std::vector <std::pair<std::string, float> > &data);
bool                        checkCharactersDate(std::string date);
int                         checkDate(std::string date);
int                         checkValue(std::string value);

#endif