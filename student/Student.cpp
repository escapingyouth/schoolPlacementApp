#include "Student.hpp"

Student::Student(std::string name_arg, int id_arg, std::vector<SchoolRegistry> school_choices_arg, std::vector<std::string> selected_courses_arg)
    : student_name{name_arg}, student_id{id_arg}, school_choices{school_choices_arg}, selected_courses{selected_courses_arg}
{
}

std::string Student::get_student_name() const
{
    return student_name;
}

std::vector<SchoolRegistry> Student::get_school_choices() const
{
    return school_choices;
}

std::vector<std::string> Student::get_selected_courses() const
{
    return selected_courses;
}

std::map<std::string, double> Student::get_student_results() const
{
    return student_results;
}