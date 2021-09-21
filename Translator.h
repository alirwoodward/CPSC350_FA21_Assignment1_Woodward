// Ali Woodward
// 2385718
// alwoodward@chapman.edu
// CPSC 350-03
// Assignment 1

// Translator.h
// This is a header file for Translator.cpp that defines four public methods and includes iostream


#include <iostream>

using namespace std;

class Translator{

public:
  Translator(); //default constructor
  ~Translator(); //destructor
  string translateEnglishWord(string word); //translates a whole english word into tutnese
  string translateEnglishSentence(string sentence); // translates a whole english sentence into tutnese

};
