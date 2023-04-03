#include "Program.hpp"

Program::Program(std::string program_name_arg, double cut_off_mark_arg)
    : program_name{program_name_arg}, cut_off_mark{cut_off_mark_arg}
{
}

std::string Program::get_program_name()
{
    return program_name;
}

double Program::get_cut_off_mark()
{
    return cut_off_mark;
}