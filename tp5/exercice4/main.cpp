#include <iostream>
#include "PollutingProject.hpp"
#include "PollutingProjectsAnalyzer.hpp"
using namespace std;

int main()
{
    PollutingProjectsAnalyzer analyzer;
    int id1 = analyzer.addNewProject();
    analyzer.addMeasure(id1, 130);
    analyzer.addMeasure(id1, 120);
    analyzer.addMeasure(id1, 256);
    analyzer.addMeasure(id1, 130);
    analyzer.addMeasure(id1, 120);
    analyzer.addMeasure(id1, 256);
    analyzer.getProject(id1).displayMeasures();
}