#pragma once
#include "MyForm.h"
#include <fstream>
#include <string>
#include <ctime>
#include <msclr/marshal_cppstd.h>

#ifndef SEARCH_H
#define SEARCH_H


using namespace System;
using namespace System::Windows::Forms;


class Search {
private:
    static const int arraySize = 10;
    int array[arraySize];
public:
   
    int sequentialSearch(int value);
    int fibonacciSearch(int value);
    int interpolationSearch( int value);
    int hashFunction(int value);
    int hashSearch(int value);
    static const int GetArraySize() { return arraySize; }
    int* GetArray() { return array; }

private:
    //static void writeToFile(const std::string& filename, const std::string& content);
};

#endif

void generateRandomArray(Search& search);
void insertionSort(Search& search);
bool validateSearchValue(String^ input);
int checkValueInArray(Search& search, int searchValue);
void writeToFile(const std::string& filename, RichTextBox^ richTextBox1, RichTextBox^ richTextBox2);