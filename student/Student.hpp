#pragma once

#include "../SchoolRegistry/SchoolRegistry.hpp"
#include <string>
#include <vector>
#include <map>

/*
 * A class model definition for a student

 * attribute 'student_name' represents the name of a student
 * attribute 'student_id' represents the given id of a student
 * attribute 'school_choices' represents the schools applied to by a student
 * atrribute 'selected_programs' represents the courses the student wants to offer
 * attribute 'student_results' represents the result obtained by a student in every available course
 */

class Student
{

private:
    std::string student_name;
    int student_id;
    std::vector<SchoolRegistry> school_choices;
    std::vector<Program> selected_programs;
    std::map<std::string, double> student_results;

public:
    // Student constructor
    Student(std::string name_arg, int id_arg, std::vector<SchoolRegistry> school_choices_arg, std::vector<Program> selected_programs_arg);

    /*
     * This member function returns the name of a student
     *
     * @return The name of a student
     */
    std::string get_student_name() const;

    /*
     * This member function returns the school choices of a student
     *
     * @return A vector of SchoolRegistry objects
     */
    std::vector<SchoolRegistry> get_school_choices() const;

    /*
     * This member function returns the all courses a student selected
     *
     * @return A vector of Course objects
     */
    std::vector<Program> get_selected_programs() const;

    /*
     * This member function returns the results a student obtain in different courses
     *
     * @return A map of key-value pairs of courses and grades
     */
    std::map<std::string, double> get_student_results() const;
};
