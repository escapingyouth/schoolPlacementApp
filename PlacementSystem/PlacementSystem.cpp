#include <iostream>
#include <tuple>
#include <vector>

#include "PlacementSystem.hpp"

PlacementSystem::PlacementSystem(std::vector<School *> schools_arg, std::vector<Student *> students_arg)
    : schools{schools_arg}, students{students_arg}
{
}

void PlacementSystem::add_school(School *school)
{
    schools.push_back(school);
}

void PlacementSystem::add_student(Student *student)
{
    students.push_back(student);
}

std::vector<School *> PlacementSystem::get_schools() const
{
    return schools;
}

std::vector<Student *> PlacementSystem::get_students() const
{
    return students;
}

// place students in schools based on their grades
void PlacementSystem::place_students()
{
    // iterate through the list of students
    for (const auto &student : students)
    {
        // get the school choice of the student
        School *school_choice = student->get_school_choice();

        // get the courses offered by the school
        std::vector<Course *> courses_offered = school_choice->get_courses_offered();

        // get course offered by student
        Course *selected_course = student->get_selected_course();

        // iterate through the courses offered by the school
        for (const auto &course : courses_offered)
        {
            if (selected_course == course)
            {
                // get the minimum grade required for the course
                double min_grade = course->get_min_grade();

                // get the average grade of the student
                double average_grade = student->get_average_grade();

                // check if the student meets the minimum grade requirement
                if (average_grade >= min_grade)
                {
                    // place the student in the school
                    placed_students.push_back(std::make_tuple(*student, *school_choice, *course));
                }
                else if (average_grade < min_grade)
                {
                    rejected_students.push_back(std::make_tuple(*student, *school_choice, *course));
                }
            }
        }
    }
}

void PlacementSystem::display_placement_results(std::string school_name)
{
    std::cout << "=======================================" << std::endl;
    std::cout << "\nHere are the list of students placed in " << school_name << " :\n\n";

    for (auto &student : placed_students)
    {
        std::string student_name = std::get<0>(student).get_student_name();
        std::string student_school = std::get<1>(student).get_school_name();
        std::string student_course = std::get<2>(student).get_course_name();

        if (student_school == school_name)
            std::cout << student_name << ": " << student_school << ": " << student_course << "\n";
    }

    std::cout << "\nHere are the students rejected by " << school_name << " :\n\n";

    for (auto &student : rejected_students)
    {
        std::string student_name = std::get<0>(student).get_student_name();
        std::string student_school = std::get<1>(student).get_school_name();
        std::string student_course = std::get<2>(student).get_course_name();

        if (student_school == school_name)
            std::cout << student_name << ": " << student_school << ": " << student_course << "\n";
    }

    std::cout << "=======================================" << std::endl;
}