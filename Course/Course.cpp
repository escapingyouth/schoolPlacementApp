#include "Course.hpp"

Course::Course(std::string course_name_arg, double min_grade_arg)
    : course_name{course_name_arg}, min_grade{min_grade_arg}
{
}

std::string Course::get_course_name() const
{
    return course_name;
}

double Course::get_min_grade() const
{
    return min_grade;
}