#include<iostream>
#include<fstream>
#include <cstdlib>

using namespace std;

void countLine(char* pName);
void countChar(char* pName);

int main(){
  char* pName;
// enter in file name to be able to count lines and characters
  cout<<"Enter the file name: ";
  cin>>pName;

    countLine(pName);
    countChar(pName);

  return 0;
}

void countChar(char* pName)
{
  int num_char = 0; //number of characters
  string line_char;

  ifstream myfile(pName);
  
  if(myfile.is_open())
  {
    while(!myfile.eof())
    {
      getline(myfile, line_char);
      num_char+=line_char.length();
    }
    
  }
  cout<<"There are: "<< num_char<<" Characters\n";
}

void countLine(char* pName)
{

  int num_lines; 
  string str_line;

  ifstream myfile(pName);

  if(myfile.is_open())
  {

    while(!myfile.eof())
    {
      getline(myfile, str_line);
      num_lines++;
    }
  }
  cout<<"There are: "<< num_lines<< " Lines"<<endl;
}

