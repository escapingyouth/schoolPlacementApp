#pragma once

#include <string>

/*
 * A class model definition for a course

 * attribute 'course_name' represents the name of a course
 * attribute 'min_grade' represents the minimum grade that must be obtained in the course
 */

class Course
{

private:
    std::string course_name;
    double min_grade;

public:
    // Course constructor
    Course(std::string course_name_arg, double min_grade_arg);

    /*
     * This method returns the name of a course
     *
     * @return The name of a course
     */
    std::string get_course_name() const;

    /*
     * This method returns the minimum grade that must be obtained
     *
     * @return The cut-off mark of a course
     */
    double get_min_grade() const;
};