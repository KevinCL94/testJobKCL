#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;
 /**
  * This is just a template
  */
  
bool isNum(const char *cadena)
{
  for( ; *cadena; ++cadena )
  {
    // En cuanto un caracter no sea numérico
    if( !isdigit(*cadena) )
      return false;
  }

  return true;
}

void printSpaces(int numLines)
{
	for(int i = 0; i < numLines; i++){
		cout << " " ;
	}
}
void printAsterisks(int numLines)
{
	for(int i = numLines; i < 2*numLines;i++){
		cout << "*" ;
	}
	for(int i = 2*numLines-2; i >= numLines;i--){
		cout << "*" ;
	}
}
void printSpike(int numLines)
{
	printSpaces(numLines-1);
	cout << "|" << endl;
}

void printFeet(int numLines)
{
	int finLinea = 2*numLines-1;
	for(int i=0;i < finLinea; i++){
		if(i == 0 || i == trunc(finLinea/2) || i == finLinea-1){
			cout << "|";
		}else{
			cout << " ";
		}
	}
	cout << endl;
}	
	
void printLine(int numLine, int numLines)
{
	printSpaces(numLines-numLine);
	printAsterisks(numLine);
	cout << endl;
}

int main(int argc, char *argv[]) 
{
	bool inverse = false;
	int numLines = 0;
	if(argc < 2){
		cout << "Debe introducir el numero de lineas como parametro" << endl;
		
		return 0;
	} else if (argc == 2) {
		if(!isNum(argv[1])){
			cout << "El primer parametro debe ser un numero" << endl;
		} else{
			numLines = atoi(argv[1]);
		}
	} 
	for(int i = 0; i <= numLines+1; i++){
		if(i == 0){
			printSpike(numLines);
		}else if(i <= numLines){
			printLine(i, numLines);
		}else{
			printFeet(numLines);
		}
	}

	
	cout << "Blau Ring Labs rules!" << endl;
	
	return 0;
	
}




