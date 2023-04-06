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
    // Creating a Course object
    std::cout << "***************************\n";
    std::cout << "INSTANCE OF A COURSE OBJECT\n";
    std::cout << "***************************\n";

    Course *comp_eng = new Course("Computer Engineering", 88.0);
    std::cout << "Course Name: " << comp_eng->get_course_name() << "\n";
    std::cout << "Course Cut_off: " << comp_eng->get_min_grade();

    // Creating more instances of Course objects
    Course *elec_eng = new Course("Electrical Engineering", 90.0);
    Course *mech_eng = new Course("Mechanical Engineering", 80.0);
    Course *civil_eng = new Course("Civil Engineering", 85.0);
    Course *chem_eng = new Course("Chemical Engineering", 75.0);

    // Creating a school object called KNUST and adding a course to it.
    std::cout << "\n\n***************************\n";
    std::cout << "INSTANCE OF A SCHOOL OBJECT\n";
    std::cout << "***************************\n";
    School *KNUST = new School("Kwame Nkrumah University of Science and Technology");

    // adding courses to the school
    KNUST->add_course_offered(comp_eng);
    KNUST->add_course_offered(elec_eng);
    KNUST->add_course_offered(mech_eng);
    KNUST->add_course_offered(civil_eng);
    KNUST->add_course_offered(chem_eng);

    std::cout << "School Name: " << KNUST->get_school_name() << "\n\n";
    std::cout << "Courses the University offers: \n";
    for (auto course : KNUST->get_courses_offered())
    {
        std::cout << "* " << course->get_course_name() << std::endl;
    }

    // Creating more School objects
    School *UG_LEGON = new School("University of Ghana, Legon");
    UG_LEGON->add_course_offered(elec_eng);
    UG_LEGON->add_course_offered(mech_eng);
    UG_LEGON->add_course_offered(civil_eng);
    UG_LEGON->add_course_offered(chem_eng);

    School *UPSA = new School("University of Professional Studies");
    UPSA->add_course_offered(elec_eng);
    UPSA->add_course_offered(mech_eng);
    UPSA->add_course_offered(civil_eng);
    UPSA->add_course_offered(chem_eng);

    School *UCC = new School("University of Cape Coast");
    UCC->add_course_offered(elec_eng);
    UCC->add_course_offered(mech_eng);
    UCC->add_course_offered(civil_eng);
    UCC->add_course_offered(chem_eng);

    // Creating the student object and calling its member functions.
    std::cout << "\n\n****************************\n";
    std::cout << "INSTANCE OF A STUDENT OBJECT\n";
    std::cout << "****************************\n";

    Student *student1 = new Student("Michael Kwame Appiah", 3024620, {{"English", 30.0}, {"Mathematics", 20.0}, {"Physics", 70.0}, {"Chemistry", 60.0}, {"Biology", 50.0}});

    student1->set_school_choice(KNUST);
    student1->set_selected_course(comp_eng);
    std::cout << "Student 1 Profile: \n"
              << std::endl;
    student1->display_student_data();

    // Creating the placement system object and calling its member functions.
    std::cout << "\n\n******************************\n";
    std::cout << "EXECUTING THE PLACEMENT SYSTEM\n";
    std::cout << "******************************\n";

    // creating new Student objects
    Student *student2 = new Student("Obuobisa Ezekiel Anim", 3036120, {{"English", 98.2}, {"Mathematics", 92.0}, {"Physics", 91.5}, {"Chemistry", 86.0}, {"Biology", 90.0}});
    student2->set_school_choice(KNUST);
    student2->set_selected_course(elec_eng);

    Student *student3 = new Student("Mensah Joshua Enoch", 3034720, {{"English", 68.2}, {"Mathematics", 52.0}, {"Physics", 71.5}, {"Chemistry", 46.0}, {"Biology", 40.0}});
    student3->set_school_choice(KNUST);
    student3->set_selected_course(mech_eng);

    Student *student4 = new Student("Amoabeng-Manu Philip Kwaku", 3022520, {{"English", 88.2}, {"Mathematics", 82.0}, {"Physics", 71.5}, {"Chemistry", 86.0}, {"Biology", 80.0}});
    student4->set_school_choice(KNUST);
    student4->set_selected_course(chem_eng);

    PlacementSystem WAEC({KNUST, UG_LEGON, UPSA, UCC}, {student1, student2, student3, student4});
    WAEC.place_students();
    WAEC.display_placement_results("Kwame Nkrumah University of Science and Technology");
    std::cout << "\n\n============================== END OF PROGRAM ==================================\n\n";

    return 0;
}