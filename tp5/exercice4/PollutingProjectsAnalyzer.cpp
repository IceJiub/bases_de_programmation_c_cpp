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
    int i;
    if (mProjects[id] == -1)
    {
        mProjects[id].addMeasure(measure);
        break;
    }
    if (i == 4)
    {
        for (int j = 0; j < 4; j++)
        {
            mPollutionMeasures[j] = mPollutionMeasures[j + 1];
        }
        mPollutionMeasures[4] = measure;
    }

}