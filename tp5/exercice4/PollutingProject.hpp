#ifndef POLLUTINGPROJECT_HPP
#define POLLUTINGPROJECT_HPP

class PollutingProject
{
    private :
        int mId;
        int mPollutionMeasures[5];
    
    public :
        PollutingProject(int id);
        PollutingProject();
        void addMeasure(double measure);
        void displayMeasures();
        double mean();
        void worstThan(PollutingProject project);
};

#endif