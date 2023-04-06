#pragma once

#include <string>
#include <vector>
#include <map>

#include "../School/School.hpp"
#include "../Course/Course.hpp"

/*
 * A class model definition for a student

 * attribute 'student_name' represents the name of a student
 * attribute 'student_id' represents the given id of a student
 * attribute 'school_choice' represents the school applied to by a student
 * atrribute 'selected_course' represents the course the student wants to offer
 * attribute 'student_grades' represents the result obtained by a student in every available subject
 */

class Student
{

private:
    std::string student_name;
    int student_id;
    /*
     * We're using 'School*' and 'Course*' pointers instead of just 'School' and 'Course' objects because
     * we want to allow for the possibility that a student may not have chosen a school or course yet,
     * in which case the 'school_choice' and 'selected_course' member variables would both be nullptr.
     */
    School *school_choice;
    Course *selected_course;
    std::map<std::string, double> student_grades;

public:
    // Student constructor
    Student(std::string name_arg, int id_arg, std::map<std::string, double> student_grades_arg);

    /*
     * This method returns the name of a student
     *
     * @return The name of a student
     */
    std::string get_student_name() const;

    /*
     * This method returns the id of a student
     *
     * @return The id of a student
     */
    int get_student_id() const;

    /*
     * This method sets the school a student chooses
     */
    void set_school_choice(School *school);

    /*
     * This method returns the school choice of a student
     *
     * @return A pointer to a School object
     */
    School *get_school_choice() const;

    /*
     * This method sets the preferred course of a student
     */
    void set_selected_course(Course *course);

    /*
     * This method returns the course a student selected
     *
     * @return A pointer to a Course object
     */
    Course *get_selected_course() const;

    /*
     * This method returns the grades obtained by a student in all available subjects
     *
     * @return A map of student grades
     */
    std::map<std::string, double> get_student_grades() const;

    /*
     * This method returns the average grade of a student in all subjects
     *
     * @return The average grade of a student
     */
    double get_average_grade() const;

    /*
     * This method displays the all student data
     */
    void display_student_data() const;
};
