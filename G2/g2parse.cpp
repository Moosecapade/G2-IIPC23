#include <iostream>
#include <string>
using namespace std;

void trailingSpaces(string&); 

int main(){
  string line, phrase;
  int dash;

  while(getline(cin, line)){
    // whole line
    cout << "Line:" << line << endl;
    // get dash for parsing
    dash = line.find('/');
    // first phrase
    phrase = line.substr(0, dash);
    if(phrase[0]==' ') // to avoid white space at front of string
      phrase = phrase.substr(1);
    trailingSpaces(phrase);
    cout << "Phrase:" << phrase << ";" << endl;
    // second phrase
    phrase = line.substr(dash+1, line.size()-dash);
    if(phrase[0]==' ') // same as above if 
      phrase = phrase.substr(1);
    trailingSpaces(phrase);
    cout << "Phrase:" << phrase << ";" << endl;
    
  }
  return 0; 
}

void trailingSpaces(string& str){
   while(str[str.size()-1]==' '){
    str = str.substr(0,str.size()-1);
  }
}
