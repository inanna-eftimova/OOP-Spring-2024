#ifndef HPP_CAR
#define HPP_CAR

class Car{
    public:
    Car();
    int getPower() const;
    int getGas() const;
    int getDiraction() const;

    void setPower(int _power);
    void setGas(int _gas);
    void setDiraction(int _diraction);

    void update();
    void fill();

    private:
    int power;
    int gas; 
    int diraction;
};

#endif