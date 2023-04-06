#include <iostream>
#include <vector>

#include "School.hpp"

School::School(std::string school_name_arg)
    : school_name{school_name_arg}
{
}

std::string School::get_school_name() const
{

    return school_name;
}

void School::add_course_offered(Course *course)
{
    courses_offered.push_back(course);
}

std::vector<Course *> School::get_courses_offered() const
{
    return courses_offered;
}