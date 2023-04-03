#pragma once

#include "../SchoolRegistry/SchoolRegistry.hpp"
#include <string>
#include <vector>
#include <map>

// class implementation

class Student
{

private:
    std::string student_name;
    int student_id;
    std::vector<SchoolRegistry> school_choices;
    std::vector<std::string> selected_courses;
    std::map<std::string, double> student_results;

public:
    // Student constructor
    Student(std::string name_arg, int id_arg, std::vector<SchoolRegistry> school_choices_arg, std::vector<std::string> selected_courses_arg);

    // This method gets the name of a student
    std::string get_student_name() const;

    // This method gets all chosen schools
    std::vector<SchoolRegistry> get_school_choices() const;

    // This method gets all selected courses
    std::vector<std::string> get_selected_courses() const;

    // This method gets the results of all courses the student offers
    std::map<std::string, double> get_student_results() const;
};
