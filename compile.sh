g++ -c src/montecarlo.cpp -Iinclude
g++ -c main.cpp -Iinclude
g++ -o ejecutable main.o montecarlo.o