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
	int i = 0;
	while(i < this->size){
		if(this->array_Lampu[i].get_info()){
			this->array_Lampu[i].set_mati(mult);
		} else {
			this->array_Lampu[i].set_nyala(mult);
		}
		i ++;
	}
}

//menampilkan status semua lampu dalam sebuah sepuluh_lampu
void Sepuluh_Lampu::PrintAll(){
	for(int i = 0; i < this->size; i++){
		this->array_Lampu[i].print_info();
	}
}

//assignment lampu
void Sepuluh_Lampu::operator=(const Sepuluh_Lampu& sl){
	this->size = sl.size;
	for (int i = 0; i < this->size; i++){
		this->array_Lampu[i] = sl.array_Lampu[i];
	}	
}
