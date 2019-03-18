default: teste_exec

plano: headers/Plano.h plano/Plano.cpp
	g++ -std=c++11 -o build/plano.out -I headers/ -c plano/Plano.cpp

reta: headers/Reta.h reta/Reta.cpp
	g++ -std=c++11 -o build/reta.out -I headers/ -c reta/Reta.cpp

linear_equation: headers/LinearEquation.h linear_equation/LinearEquation.cpp
	g++ -std=c++11 -o build/linear_equation.out -I headers/ -c linear_equation/LinearEquation.cpp

teste: plano reta linear_equation teste/teste.cpp
	g++ -std=c++11 -o build/teste.out -I headers/ -c teste/teste.cpp

teste_exec: plano reta linear_equation teste
	g++ -std=c++11 -o build/teste -I headers/ teste/teste.cpp

clean:
	rm build/*