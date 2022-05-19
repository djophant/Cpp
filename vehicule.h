#ifndef VEHICULE
#define VEHICULE 

// car class 


class CVehicule
{
public:  
    CVehicule();
    virtual void afficher();
    ~CVehicule();
};

// motorcycle class 

class CMoto: public CVehicule
{
public:  
    CMoto();
    void afficher();
    ~CMoto();
};

// Car class 

class CVoiture: public CVehicule
{
public:  
    CVoiture();
    void afficher();
    ~CVoiture();
};
#endif 