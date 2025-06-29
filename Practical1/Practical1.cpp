#include <iostream> 
/* function to read number from standard input (keyboard) */ 
void getNumber(int *);  

/* function to calculate the sum of two numbers */  
void calculateSum(int, int, int*);  

/* function to display details to the screen */ 
void displayDetails(); 


int main() { 
		int num1 = 0; /* first number to be entered by user */  

		int num2 = 0; /* second number to be entered by user */  

		int sum = 0; /* stores sum of two numbers */  
		
		int* numptr = nullptr;
		displayDetails(); 
		
		/* prompt for and read first number */ 
		std::cout << "Please enter first number : "; 
		getNumber(&num1); 
		
		/* prompt for and read second number */ 
		std::cout << "Please enter second number: "; 
		getNumber(&num2); 
		
		/* add two numbers together and display to screen */ 
		calculateSum(num1, num2,&sum); 
		std::cout << std::endl << "\nSum of " << num1 << " and " << num2 << " is: " << sum << std::endl << std::endl; 

		return 0; }  

/* function to read number from standard input (keyboard) */ 
void getNumber(int *numPtr) { 
			int num; 
			std::cin >> num; 
			*numPtr = num;
}  

/* function to calculate the sum of two numbers */ 
void calculateSum(int number1, int number2, int *sumPtr) { 
	*sumPtr = number1 + number2;
} 

/* function to display details to the screen */ 
void displayDetails() { 
	std::cout << "Author : Ethan Bao" << std::endl; 
	std::cout << "Stud ID : 110235183" << std::endl; 
	std::cout << "Email : baoyy005@mymail.unisa.edu.au" << std::endl; 
}