#include <iostream>
#include "PollutingProject.hpp"
#include "PollutingProjectsAnalyzer.hpp"
using namespace std;

PollutingProjectsAnalyzer::PollutingProjectsAnalyzer()
{
    for (int i = 0; i < 100; i++)
        mProjects[i] = PollutingProject(i);
    mSize = 0;
}

PollutingProject PollutingProjectsAnalyzer::getProject(int id)
{
    return mProjects[id];
}

int PollutingProjectsAnalyzer::addNewProject()
{
    mSize++;
    mProjects[mSize] = PollutingProject(mSize);
    return mSize;
}

void PollutingProjectsAnalyzer::addMeasure(int id, double measure)
{
    mProjects[id].addMeasure(measure);
}