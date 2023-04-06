#include <iostream>
#include <map>

#include "Student.hpp"

Student::Student(std::string name_arg, int id_arg, std::map<std::string, double> student_grades_arg)
    : student_name{name_arg}, student_id{id_arg}, student_grades{student_grades_arg}, school_choice{nullptr}, selected_course{nullptr}
{
}

std::string Student::get_student_name() const
{
    return student_name;
}

int Student::get_student_id() const
{
    return student_id;
}

void Student::set_school_choice(School *school)
{
    school_choice = school;
}

School *Student::get_school_choice() const
{
    return school_choice;
}

void Student::set_selected_course(Course *course)
{
    selected_course = course;
}

Course *Student::get_selected_course() const
{
    return selected_course;
}

std::map<std::string, double> Student::get_student_grades() const
{
    return student_grades;
}

double Student::get_average_grade() const
{
    double total_grade = 0.0;
    for (const auto &student_grade : student_grades)
    {
        total_grade += student_grade.second;
    };

    return total_grade / student_grades.size();
}

void Student::display_student_data()
{

    std::string name = get_student_name();
    std::cout << "Student Name: " << name << "\n\n";

    int id = get_student_id();
    std::cout << "Student ID: " << id << "\n\n";

    std::cout << "Grades: \n";
    for (const auto &student_grade : student_grades)
    {
        std::cout << student_grade.first << " - " << student_grade.second << "\n";
    }

    double average_grade = get_average_grade();
    std::cout << "\nAverage Grade: " << average_grade << "\n";

    School *school_choice = get_school_choice();
    std::cout << "\nSchool picked: ";
    std::cout << school_choice->get_school_name() << '\n';

    Course *selected_course = get_selected_course();
    std::cout << "\nCourse selected: ";
    std::cout << selected_course->get_course_name();
}