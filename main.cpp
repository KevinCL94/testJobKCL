#include <iostream>
#include <cctype>
#include <cmath>
#include <cstring>
using namespace std;
  
bool isNum(const char *cadena)
{
  for( ; *cadena; ++cadena )
  {
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
void printCross(int numLines)
{
	for(int i = numLines; i < 2*numLines;i++){
		cout << "X" ;
	}
	for(int i = 2*numLines-2; i >= numLines;i--){
		cout << "X" ;
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
			cout << "X";
		}else{
			cout << " ";
		}
	}
	cout << endl;
}	
	
void printLine(int numLine, int numLines)
{
	printSpaces(numLines-numLine);
	printCross(numLine);
	cout << endl;
}

void printRocket(int numLines, bool inverse){
	if(numLines){
		if(!inverse){
			for(int i = 0; i <= numLines+1; i++){
				if(i == 0){
					printSpike(numLines);
				}else if(i <= numLines){
					printLine(i, numLines);
				}else{
					printFeet(numLines);
				}
			}
		}else{
			for(int i = numLines+1; i >= 0; i--){
				if(i == 0){
					printSpike(numLines);
				}else if(i <= numLines){
					printLine(i, numLines);
				}else{
					
					printFeet(numLines);
				}
			}
		}
	}
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
			return 0;
		} else{
			numLines = atoi(argv[1]);
		}
	} else {
		if(!isNum(argv[1])){
			cout << "El primer parametro debe ser un numero" << endl;
			return 0;
		} else{
			numLines = atoi(argv[1]);
		}
		if(!strcmp(argv[2],"-i")){
			inverse = true;
		}else{
			cout << "Para invertir el cohete el tercer parametro debe ser '-i' " << endl;
		}
	}
	printRocket(numLines,inverse);

	cout << endl << "by Kevin Caceres Luna" << endl;
	cout << "Blau Ring Labs rules!" << endl;
	
	return 0;
	
}




