#pragma once

#include <vector>

#include "../School/School.hpp"
#include "../Course/Course.hpp"
#include "../Student/Student.hpp"

/*
 * A class model definition for a placement system

 * attribute 'schools' represents a list of schools
 * attribute 'students' represents a list of students
 * attribute 'placed_students' represents a list of students accepted by a school
 * attribute 'rejected_students' represents a list of students rejected by a school
 */

class PlacementSystem
{
private:
    std::vector<School *> schools;
    std::vector<Student *> students;
    std::vector<std::tuple<Student, School, Course>> placed_students;
    std::vector<std::tuple<Student, School, Course>> rejected_students;

public:
    // PlacementSystem Constructor
    PlacementSystem(std::vector<School *> schools_arg, std::vector<Student *> students_arg);

    /*
     * This method adds a new school to the list of schools
     */
    void add_school(School *school);

    /*
     * This method adds a new student to the list of students
     */
    void add_student(Student *student);

    /*
     * This method returns the list of schools
     *
     * @return A vector of School objects
     */
    std::vector<School *> get_schools() const;

    /*
     * This method returns the list of students
     *
     * @return A vector of Student objects
     */
    std::vector<Student *> get_students() const;

    /*
     * This method places students in schools based on their grades
     */
    void place_students();

    /*
     * This method displays placement results
     */
    void display_placement_results(std::string school_name);
};