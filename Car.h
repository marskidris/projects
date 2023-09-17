//
// Created by Kolade Idris on 8/28/23.
//
#include <string>


class Car{
public:
    void setType(std::string type){
        newType = type;
    }
    std::string getType() const{
        return newType;
    }
    void setDoors(int doors){
        newDoors = doors;
    }
    int getDoors() const{
        return newDoors;
    }

private:
    std::string newType;
    int newDoors;
};