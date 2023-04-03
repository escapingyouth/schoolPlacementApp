#include <iostream>
#include <vector>
#include "SchoolRegistry.hpp"

SchoolRegistry::SchoolRegistry(std::string school_name_arg, std::vector<Course> courses_offered_arg)
    : school_name{school_name_arg}, courses_offered{courses_offered_arg}
{
}

std::string SchoolRegistry::get_school_name() const
{
    return school_name;
}

std::vector<Course> SchoolRegistry::get_courses_offered() const
{
    return courses_offered;
}