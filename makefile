compile: main.cpp
	 g++  main.cpp -o New


run: New
	 ./New


clean: New
	 rm New