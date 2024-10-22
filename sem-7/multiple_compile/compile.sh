g++ -c operations.cpp -o operations.o
g++ -c main.cpp -o main.o
g++ operations.o main.o -o program
