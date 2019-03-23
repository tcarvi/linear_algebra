default: exec_teste

build_directory:
	rm -r build
	mkdir build

linear_equation: headers/LinearEquation.h linear_equation/LinearEquation.cpp
	g++ -std=c++11 -o build/linear_equation.out -iquote headers/ -c linear_equation/LinearEquation.cpp

plano: headers/Plano.h plano/Plano.cpp
	g++ -std=c++11 -o build/plano.out -iquote headers/ -c plano/Plano.cpp

reta: headers/Reta.h reta/Reta.cpp
	g++ -std=c++11 -o build/reta.out -iquote headers/ -c reta/Reta.cpp

teste: linear_equation plano reta teste/teste.cpp
	g++ -std=c++11 -o build/teste -iquote headers/ -iquote ./ teste/teste.cpp

exec_teste: build_directory teste
	build/teste

clean:
	rm -r build