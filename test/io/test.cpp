#include <iostream>

#include "gtest/gtest.h"


using namespace std;


char* getLine(char* line)
{
    int idx = 0;
    char chr = cin.get();
    while (chr != '\n' && !feof(stdin))
    {
        line[idx++] = chr;
        chr = cin.get();
    }
    line[idx] = '\0';
    return line;
}


TEST(REF, io)
{
    char line[100] = "";
    while (*getLine(line))
        cout << line << endl;
}
