
/**
* @brief this program will read in text file and display the number
* of characters and lines.
*
*
*/
#include <iostream>
#include <fstream>
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

  // reads in file 
  ifstream myfile(pName);
  
  // if file exists then it will read
  if(myfile.is_open())
  {
    while(!myfile.eof())
    {
      // reads in string from file until the end

      getline(myfile, line_char);

      // increments the length of each character found
      num_char+=line_char.length();
    }
    
  }
  cout<<"There are: "<< num_char<<" Characters\n";
}

void countLine(char* pName)
{

  int num_lines; 
  string str_line;

  // reads in file of characters
  ifstream myfile(pName);


  // if file exists
  if(myfile.is_open())
  {

    // opens file and reads in 
    while(!myfile.eof())
    {
      getline(myfile, str_line);

      // increments each line of string
      num_lines++;
    }
  }
  cout<<"There are: "<< num_lines<< " Lines"<<endl;
}

