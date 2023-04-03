#include "Course.hpp"

Course::Course(std::string course_name_arg, double cut_off_mark_arg) : course_name{course_name_arg}, cut_off_mark{cut_off_mark_arg}
{
}

std::string Course::get_course_name()
{
    return course_name;
}

double Course::get_cut_off_mark()
{
    return cut_off_mark;
}