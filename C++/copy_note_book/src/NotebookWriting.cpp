#include "NotebookWriting.h"
#include <iostream>

NotebookWriting::NotebookWriting()
{
    //ctor
}

NotebookWriting::~NotebookWriting()
{
    //dtor
}

void NotebookWriting::writeToNotebook(std::string text)
{
    std::cout << "Wrote to notebook: " << text << std::endl;
}

