#pragma once
#include <string>

/*
 * A class model definition for a program

 * attribute 'program_name' represents the name of a program
 * attribute 'cut_off_mark' represents the minimum grade that must be obtained in the course
 */

class Program
{

private:
    std::string program_name;
    double cut_off_mark;

public:
    // Program Constructor
    Program(std::string program_name_arg, double cut_off_mark_arg);

    /*
     * This member function returns the name of a program
     *
     * @return The name of a program
     */
    std::string get_program_name();

    /*
     * This member function returns the minimun grade that must be obtained
     *
     * @return The name of a cut-off mark
     */
    double get_cut_off_mark();
};