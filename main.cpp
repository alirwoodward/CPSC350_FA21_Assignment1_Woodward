// Ali Woodward
// 2385718
// alwoodward@chapman.edu
// CPSC 350-03
// Assignment 1

// main method
// This file contains the main method and includes all user defined header files

#include "Model.h"
#include "Translator.h"
#include "FileProcessor.h"

//main method that takes in input file and output file through the command line
int main(int argc, char** argv){

  FileProcessor fp;
  fp.processFile(argv[1],argv[2]);


  return 0;
}
