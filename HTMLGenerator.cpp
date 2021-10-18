#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<unordered_map>

using namespace std;

/** A simple string to print the HTML header. */
const std::string HTML_HEADER =
        "<!DOCTYPE html>\n"
        "<html>\n"
        "<title> Using C++ to Generate Table in HTML</title>\n"
        "  <body>\n"
        "    <table border=1>\n"
        "      <tr><td>Movie Name</td><td>Update Time</td></tr>\n";

/** A simple string to finish the HTML. */
const std::string HTML_TRAILER =
        "    </table>\n"
        "  </body>\n"
        "</html>\n";


int main()
{
    // get the input files
    std::ifstream input("Movies.txt");
    std::ifstream inputB("Info.txt");
    if(!input.good()||!inputB.good())
    {
        std::cout<<"No input file";
        return -1;
    }
    //=====TO DO==========
    // read each item and store them into two vector and count the total number.
    // Assume the info and movie should match with the same number
    std::vector <std::string> Movie;
    std::vector <std::string> Info;
    int Count=0;





    //=====TO DO======
    // append all the new table to the final output HTML content

    std::string HTML_Final;

    HTML_Final=HTML_Final+HTML_HEADER;


    for (int i=0;i<Count;i++)
    {
        //==================ADD the item from the txt file into the table.
    }

    //===========ADD the HTML_TRAILER to the end===============

    //======output the file as "MovieInfo.html"========================


    return 0;
}