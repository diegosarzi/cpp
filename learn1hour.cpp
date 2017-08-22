#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int addNumber(int n1, int n2 = 0){
	
	int soma = n1 + n2;
	return soma;
	
}


int addNumbers(int n1, int n2, int n3){

	return n1 + n2 + n3;

}

int getFactorial(int number){

	int sum;
	if(number == 1) sum = 1;
	else sum = getFactorial(number - 1) * number;
	return sum;

}


// FUNC POINTERS
void makeMeYoung(int* age){
	cout << "I used to be " << *age << endl;
	*age = 21;
}

void actYourAge(int& age){
	age = 39;
}


int main() {
	/*
	// VARIAVEIS
	const double PI = 3.1415926546;
	char myGrade = 'A';
	bool isHappy = true;
	int myAge = 30;
	long int largestInt = 214748364782132312;
	float favNum = 3.14159;
	double otherfavNum = 1.6180339887;

	// COUTS > SAIDA
	cout << "Favorite Number " << favNum << endl;
	cout << "PI Number " << PI << endl;

	cout << "Largest int " << largestInt << endl; 
	// sizeof(variavel) = bytes
	cout << "Size of int " << sizeof(PI) << endl;
	cout << "Size of int " << sizeof(myGrade) << endl;
	cout << "Size of int " << sizeof(isHappy) << endl;
	cout << "Size of int " << sizeof(favNum) << endl;
	cout << "Size of int " << sizeof(myAge) << endl;
	cout << "Size of int " << sizeof(largestInt) << endl;
	cout << "Size of int " << sizeof(otherfavNum) << endl;
	*/
	// OPERADORES
	/*
	int five = 10;
	
	cout << "5 + 2 = " << 5+2 << endl;
	cout << "5 - 2 = " << 5-2 << endl;
	cout << "5 * 2 = " << 5*2 << endl;
	cout << "5 / 2 = " << 5/2 << endl;
	cout << "5 % 2 = " << 5%2 << endl;
	
	cout << "5++ = " << five++ << endl;
	cout << "++5 = " << ++five << endl;
	cout << "5-- = " << five-- << endl;
	cout << "--5 = " << --five << endl;
	*/
	/*
	five += 3;
	cout << five << endl;
	*/

	/*	
	\cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;
	cout << "(1 + 2 - 3) * 2 = " << (1 + 2 - 3) * 2 << endl;
	cout << "4 / 5 = " << 4 / 5 << endl;
	cout << "4 / 5 = " << (float) 4 / 5 << endl;
	*/

	// CONDICOES
	/*
	int age = 70;
	int ageAtLastExam = 16;
	bool isNotIntoxicated = true;

	if ((age >= 1) && (age < 16)) {
		cout << "You can't drive" << endl;
	} else if(! isNotIntoxicated){
		cout << "You can't drive" << endl;
	} else if(age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5 ))){
		cout << "You can't drive" << endl;
	
	} else {
		cout << "You can drive" << endl;
	}
	*/

	// SWITCH CASES
	/*
	int greetingOption = 2;

	switch(greetingOption){
		case 1:
			cout << "bonjour" << endl;
			break;
		case 2:
			cout << "Hola" << endl;
			break;
		case 3:
			cout << "Hallo" << endl;
			break;
		default:
			cout << "Hello" << endl;
	
	}
	*/

	// VARIAVEL CONDICAO
	// variable = (condition) ? true : false
	/*
	int largestNum = (5>2) ? 5 : 2;
	int largestNum = (5<2) ? 5 : 2;

	cout << largestNum;
	*/


	// ARRAYS
	/*
	int myFavNums[5];

	int badNums[5] = {4,13,14,24,34};

	cout << "Bad number 1: " << badNums[0] << endl;

	char myName[5][5] = {{'D','i','e','g','o'},
			     {'S','a','r','z','i'}};
	
	cout << "2nd letter in 2nd array: " << myName[1][1] << endl;
	
	myName[0][2] = 'e';

	cout << "New Value " << myName[0][2] << endl;

	// FOR LOOPS
	
	for (int i = 1; i <= 10; i++){
		cout << i << endl;
	}

	for (int j = 0; j < 5; j++){
		for (int k = 0; k < 5; k++){
			cout << myName[j][k];
		}
	}
	*/


	// WHILE LOOP
	/*
	int randNum = (rand() % 100) + 1;

	while(randNum != 100){
	
		cout << randNum << ", ";
		randNum = (rand() % 100) + 1;
	}

	*/

	/*
	int index = 1;

	while (index <= 10) {
		cout << index << endl;
		index++;
	}
	*/


	// DO WHILE E FUNCAO stod()
	// FAZ PRIMEIRO A DO DEPOIS CONFERE O WHILE.
	/*
	string numberGuessed;
	int intNumberGuessed = 4;

	do {
	
		cout << "Guess between 1 and 10 :";
		// geline() funcao para pegar a linha (cin) funcao para entrada de teclado, nomedastring;
		getline(cin, numberGuessed);
		// converte string em int com stod()
		intNumberGuessed = stod(numberGuessed);
		cout << intNumberGuessed << endl;

	
	} while (intNumberGuessed != 4);

	cout << "You win" << endl;
	*/

	// STRINGS
	/*
	char happyArray[6] = {'H','a','p','p','y','\0'};
	string birthdayString = " Birthday";
	// aqui ja imprimi todo array + a string. \0 é espaço.
	cout << happyArray + birthdayString << endl;

	string yourName;
	cout << "What is yout name ";
	getline(cin, yourName);
	cout << "Hello " << yourName << endl;

	double eulersConstant = .57721;
	string eulerGuess;
	double eulerGuessDouble;

	cout << "What is Euler's Constant? ";
	getline(cin, eulerGuess);

	eulerGuessDouble = stod(eulerGuess);

	if(eulerGuessDouble == eulersConstant){
		cout << "You are right" << endl;
	} else {
		cout << "You are wrong" << endl;
	}

	// size() para ver quantos caracteres tem uma string
	cout << "Size of String " << eulerGuess.size() << endl;
	// empty() para saber se esta vazio uma string
	cout << "Is string empty " << eulerGuess.empty() << endl;
	// append para adicionar algo a uma string.
	cout << eulerGuess.append(" was your guess") << endl;
	*/

	// COMPARANDO UMA STRING
	/*
	string dogString = "dog";
	string catString = "cat";

	cout << dogString.compare(catString) << endl;
	cout << dogString.compare(dogString) << endl;
	cout << catString.compare(dogString) << endl;
	*/

	// MAIS UM POUCO DE STRINGS MANIPULACAO
	/*
	string yourName;
	cout << "What is your name: ";
	getline(cin, yourName);

	cout << "hello " << yourName << endl;

	string wholeName = yourName.assign(yourName);
	cout << wholeName << endl;

	// imprima do 0 a 6
	string firstName = wholeName.assign(wholeName, 0, 6);
	cout << firstName << endl;
	// pesquisa "Sarzi" e retorna a posicao.
	int lastNameIndex = yourName.find("Sarzi", 0);
	cout << "Index for last name " << lastNameIndex << endl;
	// insere na posicao 5 de 0,1,2,3,4,5 um texto.
	yourName.insert(5, " Justin");
	cout << yourName << endl;
	// na posicao 6, apaga 7 caracteres
	yourName.erase(6, 7);
	cout << yourName << endl;
	// substitua na posicao 6, 5 caracteres pelo texto em " "
	yourName.replace(6,5,"Maximus");
	cout << yourName << endl;
	*/

	// VETORES!!! VECTOR	*********************
	/*
	vector <int> lotteryNumVect(10);
	
	int lotteryNumArray[5] = {4,13,14,24,34};
	// vai buscar na posicao e numero 3
	lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray + 3 );
	cout << lotteryNumVect.at(1) << endl;
	cout << lotteryNumArray << endl;
	*/


	// FUNCOES
	/*
	cout << addNumber(1) << endl;
	cout << addNumbers(1,2,3) << endl;
	cout << getFactorial(3) << endl;
	*/


	// MANIPULANDO ARQUIVOS FSTREAM
	// Open a stream to append to whats there with ios:app
	// ios::binary : Treat the file as binary
	// ios::in : Open a file to read input
	// ios::truc : Default
	// ios::out : Open a file to write output

	// ESCREVER ARQUIVO
	/*
	string steveQuote = "A day withou sunshine is like, you know, night";
	
	ofstream writer("stevequote.txt");

	if(! writer){
		
		cout << "Error opening file" << endl;
		return -1;

	} else {
	
		writer << steveQuote << endl;
		writer.close();
	
	}
	
	// APPEND
	ofstream writer2("stevequote.txt", ios::app);
	
	if(! writer2){
		
		cout << "Error opening file" << endl;
		return -1;

	} else {
	
		writer2 << "\n - Steve Martin" << endl;
		writer2.close();
	
	}


	// LEITURA DO ARQUIVO
	char letter;

	ifstream reader("stevequote.txt");

	if(! reader){
		
		cout << "Error opening file" << endl;
		return -1;

	} else {
	
		for(int i = 0; ! reader.eof(); i++){
		
			reader.get(letter);
			cout << letter;

		}	

		cout << endl;
		reader.close();

	}
	*/


	// TRY - THROW - CATCH *******************
	/*
	int number = 2;

	try {
		if(number != 0){
			cout << 2/number << endl;
		} else throw(number);
		
	}
	catch(int number){
		cout << number << " is not valid" << endl;
	}
	*/


	// PONTEIROS!!!! *****
	// o &variavel resgata o endereço do ponteiro
	// o *variavel resgata a atribuicao da variavel no endereço
	//
	/*
	int myAge = 30;
	int* agePtr = &myAge;

	cout << "Address of pointer " << agePtr << endl;
	cout << "Data at memory address " << *agePtr << endl;
	cout << "myAge pointer" << &myAge << endl;
        	
	int badNums[5] = {4, 13, 14, 24, 34};
	int* numArrayPtr = badNums;

	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
	numArrayPtr ++;
	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
	cout << "Address " << badNums << " Value " << *badNums << endl;

	makeMeYoung(&myAge);

	cout << "I'm " << myAge << " year old now" << endl;

	int& ageRef = myAge;

	cout << "myAge : " << myAge << endl;

	ageRef++;

	cout << "myAge : " << myAge << endl;

	actYourAge(ageRef);
	cout << "myAge : " << myAge << endl;
	*/






	return 0;


}
