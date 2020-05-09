#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
  
bool isNum(const char *str_arg)					//Función para comprobar que 
{												//el argumento pasado al ejecutable es un numero.						
  for( ; *str_arg; ++str_arg )					
  {												//Recorre todos los carácteres de la cadena
    if( !isdigit(*str_arg) )					//Si alguno no es número devuelve falso
      return false;
  }
  return true;
}

void printSpaces(int n_spaces)					//Función para imprimir el numero de 
{												//espacios pasados como parametro
	for(int i = 0; i < n_spaces; i++){
		cout << " " ;
	}
}
void printCross(int n_lines)					//Función para imprimir 'X', según el
{												//numero de linea en que nos encontramos
	for(int i = 0; i < 2*n_lines-1;i++){		//Imprime el doble de 'X' que el numero de fila,
		cout << "X" ;							//menos una, que seria la del centro.
	}
}
void printSpike(int n_lines)					//Imprime el caracter correspondiente al pico
{												//del cohete, haciendo llamada a la funcion
	printSpaces(n_lines-1);						//imprimir espacios, segun el tamaño del cohete
	cout << "|" << endl;
}

void printFeet(int n_lines)
{
	int end_line = 2*n_lines-1;
	for(int i=0;i < end_line; i++){
		if(i == 0 || i == end_line/2 || i == end_line-1){
			cout << "X";
		}else{
			cout << " ";
		}
	}
	cout << endl;
}	
	
void printLine(int curr_line, int num_lines)		//Función para imprimir una linea completa
{													//según la linea actual y el total a imprimir
	printSpaces(num_lines-curr_line);				//El numero de espacios a imprimir depende de 
	printCross(curr_line);							//la linea actual y del total.	
	cout << endl;									//El numero de cruces solo depende de la linea actual.
}

void printRocket(int num_lines, bool inverse){		//Imprime el cochete del numero de lineas deseado
	if(num_lines){									//Incluye un parametro como flag para invertir el cohete
		if(!inverse){								//Si no se ha recibido orden de invertir
			for(int i = 0; i <= num_lines+1; i++){	//Se imprimen dos lineas más de las pasadas como parametro
													//correspondientes al pico y al pie
				if(i == 0){							//Si es la primera linea, imprime el pico donde corresponde
					printSpike(num_lines);			//segun el total de lineas
				}else if(i <= num_lines){			//Las lineas intermedias se imprimen con al funcion creada
					printLine(i, num_lines);
				}else{								//La ultima linea sera la del pie del cohete
					printFeet(num_lines);
				}
			}
		}else{										//Si se ha recibido el argumento de invertir el cohete
			for(int i = num_lines+1; i >= 0; i--){	//El procedimiento sera el mismo, aunque el bucle 'for'
				if(i == 0){							//sera decreciente.
					printSpike(num_lines);
				}else if(i <= num_lines){
					printLine(i, num_lines);
				}else{
					
					printFeet(num_lines);
				}
			}
		}
	}
}
int main(int argc, char *argv[]) 
{
	bool inverse = false;																	//Flag a activar en caso de argumento de invertir '-i'
	int numLines = 0;																		//Tamaño del cohete a imprimir en filas
	if(argc < 3 || strcmp(argv[1],"-l")){													//Comprueba que hay al menos dos argumentos y que el primero es '-l'
		cout << "Debe ejecutar el programa pasando como primer argumento '-l' " << endl;
		cout << "y como segundo el numero de filas para imprimir el cohete.  " << endl;		//Si no se cumple, se informa al usuario y se cierra el programa 
		cout << "(Puede poner un tercer parametro opcional '-i' para ivertir.) " << endl;
		return 0;
	} else if (argc >= 3) {																	//Si se reciben suficientes parámetros
		if(!isNum(argv[2])){																//Comprueba que el segundo parametro sea un numero
			cout << "El primer parametro debe ser un numero" << endl;						//Si no es numero, se informa al usuario y se termina el programa
			return 0;
		} else{
			numLines = atoi(argv[2]);														//Ya que se ha comprobado que es numero, se convierte a int
		}
		if(argc == 4 && !strcmp(argv[3],"-i")){												//Se comprueba el tercer parametro opcional para invertir el cohete
			inverse = true;																	//Si se ha recibido, se activa el flag correspondiente
		}
	} 
		
	printRocket(numLines,inverse);															//Llamada a funcion para imprimir cohete, pasando como parametros 
																							//el tamaño y el flag para invertir 
	cout << endl << "by Kevin Caceres Luna" << endl;
	cout << "Blau Ring Labs rules!" << endl;
	
	return 0;
	
}




