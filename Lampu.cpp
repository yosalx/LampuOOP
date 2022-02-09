#include "Lampu.h"
#include <iostream>
using namespace std;

int Lampu::no_lamp = 1;

Lampu::Lampu()
{
    this->id = no_lamp;
    this->nyala_lampu = false;
    no_lamp++;
}

Lampu::Lampu(int id, bool nyala_lampu){
    this->id = id;
    this->nyala_lampu = nyala_lampu;
    no_lamp;
}

Lampu::Lampu(const Lampu &lampu){
    this->id = lampu.id;
    this->nyala_lampu = lampu.nyala_lampu;
}

Lampu& Lampu::operator=(const Lampu &lampu){
    this->id = lampu.id;
    this->nyala_lampu = lampu.nyala_lampu;
    return *this;
}

Lampu::~Lampu(){

}

void Lampu::set_nyala(int nomor)
{
    if (!this->nyala_lampu && this->id % nomor == 0)
    {
        this->nyala_lampu = true;
    }
}

void Lampu::set_mati(int nomor)
{
    if (this->nyala_lampu && this->id % nomor == 0)
    {
        this->nyala_lampu = false;
    }
}

bool Lampu::get_info() const
{
    return this->nyala_lampu;
}

void Lampu::print_info()
{
    if (this->nyala_lampu){
        cout << "Nyala";
    }
    else{
        cout << "Mati";
    }
}