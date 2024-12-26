#include <iostream>
#include "PollutingProject.hpp"
#include "PollutingProjectsAnalyzer.hpp"
using namespace std;

int main()
{
    PollutingProjectsAnalyzer analyzer;
    int id1 = analyzer.addNewProject();
    analyzer.addMeasure(id1, 100);
    analyzer.addMeasure(id1, 110);
    analyzer.addMeasure(id1, 120);
    analyzer.addMeasure(id1, 130);
    analyzer.addMeasure(id1, 140);
    analyzer.addMeasure(id1, 150);
    analyzer.getProject(id1).displayMeasures();
}