#pragma once
#include "../Program/Program.hpp"

/*
 * A class model definition for a school

 * attribute 'school_name' represents the name of a school
 * attribute 'programs_offered' represents the programs offered by the school
 */

class SchoolRegistry
{

private:
    std::string school_name;
    std::vector<Program> programs_offered;

public:
    // School constructor
    SchoolRegistry(std::string school_name_arg, std::vector<Program> programs_offered_arg);

    /*
     * This member function returns the name of a school
     *
     * @return The name of a school
     */
    std::string get_school_name() const;

    /*
     * This member function returns the programs offered by a school
     *
     * @return A vector of Program objects
     */
    std::vector<Program> get_programs_offered() const;
};
