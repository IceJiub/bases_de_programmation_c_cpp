#ifndef POLLUTINGPROJECTSANALYZER_HPP
#define POLLUTINGPROJECTSANALYZER_HPP

#include "PollutingProject.hpp"

class PollutingProjectsAnalyzer {
    private :
        PollutingProject mProjects[100];
        int mSize;
    
    public :
        PollutingProjectsAnalyzer();
        PollutingProject getProject(int id);
        int addNewProject();
        void addMeasure(int id, double measure);
};

#endif