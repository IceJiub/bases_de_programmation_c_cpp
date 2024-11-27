class Lamp
{
    private :
        bool mIsOn;
        int mColor;
    
    public : 
        Lamp();
        Lamp(bool isOn);
        Lamp(int color);
        Lamp(bool isOn, int color);
        
        void printColor();
        bool isOn();
        void switchOn();
        void changeColor();
};
