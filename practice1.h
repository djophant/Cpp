#ifndef PRACTICE1
#define PRACTICE1

class MyPoint  
{
protected:
    int mX;
    int mY;
public:  
    MyPoint();
    MyPoint(int x, int y);
    MyPoint(const MyPoint & p);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
    void afficher() const;
    void saisieConsole(int x, int y);
    ~MyPoint();
    
};
#endif