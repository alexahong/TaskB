#include <iostream>
#include <cstdlib>
using namespace std;

int countLine(char* pName);
void countChar(char* Pname );


int main(){

  cout << countlines(); 
}


int countLine(char* pName){
FILE *fp = fopen(pName,"r");
  int ch=0;
  int lines=0;

  if (fp == NULL);
  return 0;

  lines++;
  while (!feof(fp))
    {
      ch = fgetc(fp);
      if (ch == '\n')
    lines++;
    }
  fclose(fp);
  return lines;
}

void countChar(char* pName){
  cout << "\n" << lcount << "Characters"; 
}