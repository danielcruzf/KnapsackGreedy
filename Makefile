CXX = clang++
CXXFLAGS = -Ofast -march=native#-std=c++1z  -flto -funroll-loops -fopenmp

output: main.o greedyknapsack.o getdata.o util.o
	${CXX} main.o greedyknapsack.o getdata.o util.o -o output

greedyknapsack.o: greedyknapsack.hpp util.hpp
getdata.o: getdata.hpp util.hpp
util.o: util.hpp
main.o: greedyknapsack.hpp getdata.hpp

clean:
	rm *.o output