#pragma once
#include "../Course/Course.hpp"

class SchoolRegistry
{

private:
    std::string school_name;
    std::vector<Course> courses_offered;

public:
    // School constructor
    SchoolRegistry(std::string school_name_arg, std::vector<Course> courses_offered_arg);

    // This method gets the name of the school
    std::string get_school_name() const;

    // This method gets the programs offered by a school
    std::vector<Course> get_courses_offered() const;
};
