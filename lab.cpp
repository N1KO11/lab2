#include "lab.h"
using namespace std;
FileReader::FileReader() : fileName("") {}
FileReader::FileReader(const string& name) : fileName(name) {}
bool FileReader::open(const string& name)
{
    if (isOpen()) 
        return false;
    fileName = name;
    fileStream.open(fileName);
    return isOpen();
}
void FileReader::close()
{
    if (isOpen())
        fileStream.close();
}
string FileReader::getFileName() const
{
    return fileName;
}
bool FileReader::isOpen() const
{
    return fileStream.is_open();
}

bool FileReader::isEndOfFile() const
{
    return fileStream.eof();
}

bool FileReader::getNextLine(string& line)
{
    if (!isOpen() || isEndOfFile())
        return false;

    getline(fileStream, line);
    return true;
}
bool FileReader::getNextWord(string& word)
{
    if (!isOpen() || isEndOfFile())
        return false;
    fileStream >> word;
    return true;
}
