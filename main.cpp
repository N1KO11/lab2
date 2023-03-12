#include "lab.h"
#include <iostream>
using namespace std;
int main()
{
    FileReader reader("test.txt");
    if (!reader.isOpen())
    {
        cout << "Failed to open file." << endl;
        return 1;
    }
    cout << "File name: " << reader.getFileName() << endl;
    string line;
    while (reader.getNextLine(line))
        cout << line << endl;
    reader.close();
    return 0;
}
