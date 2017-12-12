#include<iostream>
#include<fstream>
#include <cstdlib>

using namespace std;

void countLine(char* pName);
void countChar(char* pName);

int main(){
  char* pName;

  cout<<"Enter the file name";
  cin>>pName;

    countLine(pName);
    countChar(pName);

  return 0;
}

void countChar(char* pName){
  int num_char; 
  char characters;

  ifstream myfile(pName);
  
  if(myfile.is_open()){
    while(!myfile.eof()){


      characters = cin.get();

      if(characters != '\n')
        num_char++;
    }
  }
  cout<<"There are: " << num_char<<" total characters"<<endl;
}

void countLine(char* pName){

  int num_lines; 
  string str_line;

  ifstream myfile(pName);

  if(myfile.is_open()){

    while(!myfile.eof()){
      getline(myfile, str_line);
      num_lines++;
    }
  }
  cout<<"There are: "<< num_lines<< " Lines"<<endl;
}

