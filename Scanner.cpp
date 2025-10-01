#include "Scanner.h"

Scanner::Scanner()
{
    text = " ";
}

void Scanner::setText(string text)
{
    this->text = text;
}

string Scanner::getText() const
{
    return text;
}

void Scanner::scanFile(string fileName)
{
    ifstream file(fileName);
    if (file.is_open()) {
        text = "";
        string tmp;
        while (!file.eof()) {
            getline(file, tmp);
            text += tmp + "\n";

        }
        file.close();
    }
}
