#include "Sepuluh_Lampu.h"
#include <iostream>

//ctor
Sepuluh_Lampu::Sepuluh_Lampu() {
	this->size = 10;
	this->array_Lampu = new Lampu[this->size];
}

//cctor
Sepuluh_Lampu::Sepuluh_Lampu(const Sepuluh_Lampu& sl) {
	this->size = sl.size;
	this->array_Lampu = new Lampu[this->size];
	for (int i = 0; i < this->size; i++){
		this->array_Lampu[i] = sl.array_Lampu[i];
	}
}

//dtor
Sepuluh_Lampu::~Sepuluh_Lampu(){
	delete[] this->array_Lampu;
}

//menekan saklar lampu l
void Sepuluh_Lampu::atur_nyala(int l){
	int mult = l;
	while(mult <= this->size){
		if(this->array_Lampu[mult-1].get_info()){
			this->array_Lampu[mult-1].set_mati(mult-1);
		} else {
			this->array_Lampu[mult-1].set_nyala(mult-1);
		}
		mult += mult;
	}
}

//menampilkan status semua lampu dalam sebuah sepuluh_lampu
void Sepuluh_Lampu::PrintAll(){
	for(int i = 0; i < this->size; i++){
		this->array_Lampu[i].PrintInfo();
	}
}

//assignment lampu
void Sepuluh_Lampu::operator=(const Sepuluh_Lampu& sl){
	this->size = sl.size;
	for (int i = 0; i < this->size; i++){
		this->array_Lampu[i] = sl.array_Lampu[i];
	}	
}
