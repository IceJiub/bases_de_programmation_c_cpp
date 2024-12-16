#include <iostream>
#include "PollutingProject.hpp"
using namespace std;

PollutingProject::PollutingProject(int id)
{
    mId = id;
    for (int i = 0; i < 5; i++)
    {
        mPollutionMeasures[i] = -1;
    }
}

PollutingProject::PollutingProject()
{
    mId = 0;
    for (int i = 0; i < 5; i++)
    {
        mPollutionMeasures[i] = -1;
    }
}

void PollutingProject::addMeasure(double measure)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (mPollutionMeasures[i] == -1)
        {
            mPollutionMeasures[i] = measure;
            break;
        }
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

void PollutingProject::displayMeasures()
{
    cout << "Valeurs mesurées (en tonnes) de rejets dans l'air pour le projet " << mId << " : ";
    for (int i = 0; i < 5; i++)
    {
        if (mPollutionMeasures[i] != -1)
            if (i == 4 || mPollutionMeasures[i + 1] == -1)
                cout << mPollutionMeasures[i];
            else
                cout << mPollutionMeasures[i] << ", ";
    }
    cout << endl;
}

double PollutingProject::mean()
{
    double sum = 0;
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (mPollutionMeasures[i] != -1)
        {
            sum += mPollutionMeasures[i];
            count++;
        }
    }
    return sum / count;
}

void PollutingProject::worstThan(PollutingProject project)
{
    if (mean() > project.mean())
        cout << "Le projet " << mId << " est plus polluant que le projet " << project.mId << endl;
    else
        cout << "Le projet " << mId << " n'est pas plus polluant que le projet " << project.mId << endl;
}