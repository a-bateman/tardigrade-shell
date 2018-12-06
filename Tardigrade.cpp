//Tardigrade shell
//A shell written to specifically take advantage of clips utilities.
//Will be resiliant and lightweight.  Just like a Tardigrade!
//Written by: Andrew Bateman
//Started on 12-5-18.
//TODO: Use commander to implement parsing and other features.

#include <stdio.h>
#include <string>
#include <vector>
#include <commander.hpp>

bool tdgExecute()
{

};

void parseCommand(std::string &command, std::string &line, std::string &args)
{

};

void getCommand(std::string &line, std::string &args)
{
    std::string command;
    std::cin >> command;
    parseCommand(command, line, args);
};

void free(std::string &clearMe)
{
        clearMe.clear();
};

void tdgLoop()
{
    std::string *line;
    std::string **args;
    bool status = true;

    do
    {
        std::cout << "tdg-> ";
        tdgGetCommand(line, args);
        status = tdgExecute();
        free(line);
        free(args);
    }while(status);
};

int main(int argc, char **argv)
{
    tdgLoop();
    return EXIT_SUCCESS;
}

