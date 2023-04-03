#include <iostream>
#include <vector>
#include "SchoolRegistry.hpp"

SchoolRegistry::SchoolRegistry(std::string school_name_arg, std::vector<Program> programs_offered_arg)
    : school_name{school_name_arg}, programs_offered{programs_offered_arg}
{
}

std::string SchoolRegistry::get_school_name() const
{
    return school_name;
}

std::vector<Program> SchoolRegistry::get_programs_offered() const
{
    return programs_offered;
}