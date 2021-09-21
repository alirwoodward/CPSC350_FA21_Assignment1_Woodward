// Ali Woodward
// 2385718
// alwoodward@chapman.edu
// CPSC 350-03
// Assignment 1

// Translator.cpp
// This cpp file contains code for the Translator class


#include "Translator.h"
#include "Model.h"

//default constructor
Translator::Translator(){
  //default constructor body - empty
}

// deconstructor
Translator::~Translator(){
  //deconstuctor - empty
}

// method that takes in a word string as input and returns that word translated into tutnese
string Translator::translateEnglishWord(string word){
  string newWord = "";
  // for loop that iterates through each letter in the word
  for(int i = 0; i < word.size(); ++i){
    Model m;
    if(tolower(word[i]) == tolower(word[i+1])){
      newWord += m.translateDoubleCharacter(word[i]);
      i += 1;
    }else{
      newWord += m.translateSingleCharacter(word[i]);
    }
  }
  return newWord;
}


//method that takes in a sentence string as input and returns a string that is the translated version of that sentence into tutnese
string Translator::translateEnglishSentence(string sentence){
  string fullNewSentence = "";
  string currentWord = "";

  for(int i = 0; i < sentence.size(); ++i){
    if(sentence[i] == ' ' || sentence[i] == '.' || i+1 == sentence.size()){
      currentWord += sentence[i];
      fullNewSentence += translateEnglishWord(currentWord);
      //fullNewSentence += sentence[i];
      currentWord = "";
    }else{
      currentWord += sentence[i];
    }
  }
  return fullNewSentence;
}
