#include <fstream>
#include <iostream>

int main(){
std::fstream file("text.txt");

int n;
file >> n;
n *= 10;
file << n;
file.close();
return 0;
}


