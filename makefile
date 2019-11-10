default: exec_teste

build_directory:
	rm -r build || true
	mkdir build || true

line: headers/GLine.h line/GLine.cpp
	g++ -std=c++14 -o build/gline.out -iquote headers/ -c line/GLine.cpp

linear_equation: headers/LinearEquation.h linear_equation/LinearEquation.cpp
	g++ -std=c++14 -o build/linear_equation.out -iquote headers/ -c linear_equation/LinearEquation.cpp

plane: headers/GPlane.h plane/GPlane.cpp
	g++ -std=c++14 -o build/gplane.out -iquote headers/ -c plane/GPlane.cpp

teste: line linear_equation plane teste/teste.cpp
	g++ -std=c++14 -o build/teste -iquote headers/ -iquote ./ teste/teste.cpp

exec_teste: build_directory teste
	build/teste

clean:
	rm -r build