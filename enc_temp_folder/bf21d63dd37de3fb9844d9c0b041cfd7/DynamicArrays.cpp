// DynamicArrays.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 

class DynamicArray {
private:
	int size, capacity;
	string* array;
public:
	DynamicArray(int _size, int _capacity) 
	{
		size = _size; 
		capacity = _capacity; 
		array = new string[capacity]; 
	};

	bool insert(string newElement, int position) 
	{
		if (capacity <= size)
		{
			capacity *= 2; 
		}

		string* newArray = new string[capacity]; 
		size++; 
		int i; 
		
		for (i = 0; i < position; i++) 
		{
			newArray[i] = array[i];
		}

		cout << i << endl; 
		newArray[i] = newElement; 
		i++; 
		while (i < size)
		{
			newArray[i] = array[i - 1]; 
			i++;
		}

		delete[] array; 
		array = newArray; 
		return true; 
	}

	bool remove(int position) 
	{
		if (position >= size or position < 0)
		{
			cout << "Position not found" << endl; 
			return false; 
		}
		
		string* newArray = new string[capacity]; 
		size--; 

		for (int i = 0; i < position; i++)
		{
			newArray[i] = array[i - 1]; 
		}

		for (int i = 0; i < position; i++)
		{

		}

		delete[] array; 
		array = newArray; 

		return true; 
	}

	void print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << array[i] << " "; 
		}

		cout << endl; 


	}

}; 


int main()
{
	string start[10]; 

	DynamicArray a(1,1); 

	a.insert("blue", 0); 
	a.print(); 
	a.insert("red", 0); 
	a.print();
	a.remove(1); 
	a.print();

	system("pause");
	return 0; 
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
