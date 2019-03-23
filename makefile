default: exec_teste

build_directory:
	rm -r build || true
	mkdir build || true

line: headers/Line.h line/Line.cpp
	g++ -std=c++11 -o build/line.out -iquote headers/ -c line/Line.cpp

linear_equation: headers/LinearEquation.h linear_equation/LinearEquation.cpp
	g++ -std=c++11 -o build/linear_equation.out -iquote headers/ -c linear_equation/LinearEquation.cpp

plane: headers/Plane.h plane/Plane.cpp
	g++ -std=c++11 -o build/plane.out -iquote headers/ -c plane/Plane.cpp

teste: line linear_equation plane teste/teste.cpp
	g++ -std=c++11 -o build/teste -iquote headers/ -iquote ./ teste/teste.cpp

exec_teste: build_directory teste
	build/teste

clean:
	rm -r build