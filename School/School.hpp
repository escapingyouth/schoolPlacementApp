#pragma once

#include <vector>

#include "../Course/Course.hpp"

/*
 * A class model definition for a school

 * attribute 'school_name' represents the name of a school
 * attribute 'courses_offered' represents the courses offered by the school
 */

class School
{

private:
    std::string school_name;
    std::vector<Course *> courses_offered;

public:
    // School constructor
    School(std::string school_name_arg);

    /*
     * This method returns the name of a school
     *
     * @return The name of a school
     */
    std::string get_school_name() const;

    /*
     * This method adds a course to the list of courses offered by a school
     */
    void add_course_offered(Course *course);

    /*
     * This method returns the courses offered by a school
     *
     * @return A vector of Course objects
     */
    std::vector<Course *> get_courses_offered() const;
};
