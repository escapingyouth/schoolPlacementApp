#include <iostream>
#include <vector>

#include "Course/Course.hpp"
#include "School/School.hpp"
#include "Student/student.hpp"
#include "PlacementSystem/PlacementSystem.hpp"

#include "Course/Course.cpp"
#include "School/School.cpp"
#include "Student/student.cpp"
#include "PlacementSystem/PlacementSystem.cpp"

int main()
{
    std::cout << "\n\n==================== DEMONSRTATION OF THE PLACEMENT SYSTEM ====================\n\n"
              << std::endl;
    // Creating a course object
    std::cout << "***************************\n";
    std::cout << "INSTANCE OF A COURSE OBJECT\n";
    std::cout << "***************************\n";

    Course *comp_eng = new Course("Computer Engineering", 88.0);
    std::cout << "Course Name: " << comp_eng->get_course_name() << "\n";
    std::cout << "Course Cut_off: " << comp_eng->get_min_grade();

    // Creating a school object called KNUST and adding a course to it.
    std::cout << "\n\n**************************\n";
    std::cout << "INSTANCE OF A SCHOOL OBJECT\n";
    std::cout << "***************************\n";
    School *KNUST = new School("Kwame Nkrumah University of Science and Technology");

    // adding courses to the school
    KNUST->add_course_offered(comp_eng);
    KNUST->add_course_offered(new Course("Electrical Engineering", 90.0));
    KNUST->add_course_offered(new Course("Mechanical Engineering", 80.0));
    KNUST->add_course_offered(new Course("Civil Engineering", 85.0));
    KNUST->add_course_offered(new Course("Chemical Engineering", 75.0));

    std::cout << "School Name: " << KNUST->get_school_name() << "\n\n";
    std::cout << "Courses the University offers: \n";
    for (auto course : KNUST->get_courses_offered())
    {
        std::cout << "* " << course->get_course_name() << std::endl;
    }

    // Creating the student object and calling its member functions.
    std::cout << "\n\n**************************\n";
    std::cout << "INSTANCE OF A STUDENT OBJECT\n";
    std::cout << "***************************\n";

    Student *student = new Student("Michael Kwame Appiah", 3024620, {{"English", 90.0}, {"Mathematics", 80.0}, {"Physics", 70.0}, {"Chemistry", 60.0}, {"Biology", 50.0}});

    std::cout << "\n\n============================== END OF PROGRAM ==================================\n\n";

    return 0;
}