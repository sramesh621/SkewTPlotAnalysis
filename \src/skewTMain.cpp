#include<iostream>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
    if(argc >= 2)
    {
        string fileName(argv[1]);
        ifstream inputFileStream(fileName);
        while(inputFileStream)
          {
            string inputFileLine = inputFileStream.getline();
            
          }
    }
    return 0;
}
