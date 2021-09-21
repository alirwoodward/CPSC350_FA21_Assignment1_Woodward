// Ali Woodward
// 2385718
// alwoodward@chapman.edu
// CPSC 350-03
// Assignment 1

// FileProcessor.h
// This is a header file for FileProcessor.cpp that defines three public methods and includes iostream

#include <iostream>
#include <fstream>

using namespace std;

class FileProcessor{

public:
  FileProcessor(); //default constructor
  ~FileProcessor(); //destructor
  void processFile(string inputFile, string outputFile); //takes in an input file, translates its contents, produces an output file

};
