#pragma once
#include <string>

class Course
{

private:
    std::string course_name;
    double cut_off_mark;

public:
    // Course Constructor
    Course(std::string course_name_arg, double cut_off_mark_arg);

    // This method returns the name of a course
    std::string get_course_name();

    // This method returns the cut-off mark of a course
    double get_cut_off_mark();
};