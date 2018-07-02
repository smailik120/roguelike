#include "Component.cpp"
#ifndef _SCORE_CPP
#define _SCORE_CPP 
class Score:public Component{
private:
     int score;
public:
    void setScore(int score)
    {
        this->score=score;
        
    }
    int getScore()
    {
        
        return score;
    }
};
#endif