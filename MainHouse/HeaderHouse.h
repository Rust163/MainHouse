#pragma once
#include "windows.h"
#include <stdio.h>
#include <iostream>

namespace neighbors {//класс человек
	class Human {
	private:
		char* name;
		char* shurname;
	public:
		Human() {//конструктор класса человек
			this->name = new char[50];
			this->shurname = new char[50];
		}

		Human(const Human& other) {//конструктор копирования класса человек
			this->name = &other.name[50];
			for (int i = 0; i < other.name[50]; i++) {
				this->name[i] = other.name[i];
			}
			this->shurname = &other.shurname[50];
			for (int i = 0; i < other.shurname[50]; i++) {
				this->shurname[i] = other.shurname[i];
			}
		}



		char GetName() {//геттеры класса человек
			return *name;
		}

		char GetShurname() {
			return *shurname;
		}

		void SetName(const char* valueName) {//сеттеры класса человек
			if (name != nullptr) {
				delete[] name;
				name = nullptr;
			}
			name = new char[strlen(valueName) + 1]{ 0 };
			strcpy_s(name, strlen(valueName) + 1, valueName);
		}

		void SetShurname(const char* valueShurname) {
			if (shurname != nullptr) {
				delete[] shurname;
				shurname = nullptr;
			}
			shurname = new char[strlen(valueShurname) + 1]{ 0 };
			strcpy_s(shurname, strlen(valueShurname) + 1, valueShurname);
		}
		void ShowHuman() {
			std::cout << "Имя жильца: " << name << "\nФамилия жильца: " << shurname << std::endl;
			
		}
		~Human() {//деконструктор класса человек
			delete[] name;
			name = nullptr;
			delete[] shurname;
			shurname = nullptr;
		}
	};

	class Flat {//класс квартира
	private:
		Human* human;
		int* flatNum;
		int* floorNum;
	public:
		Flat() {//конструктор класса квартира
			this->human = new Human[250];
			this->flatNum = new int[50];
			this->floorNum = new int[50];
		}

		Flat(const Flat& other) {//конструктор копирования класса квартира
			this->flatNum = &other.flatNum[50];
			for (int i = 0; i < other.flatNum[50]; i++) {
				this->flatNum[i] = other.flatNum[i];
			}
			this->floorNum = &other.floorNum[50];
			for (int i = 0; i < other.floorNum[50]; i++) {
				this->floorNum[i] = other.floorNum[i];
			}
		}


		Human GetHuman() {//геттеры класса квартира
			return *human;
		}
		int GetFlatNum() {
			return *flatNum;
		}
		int GetFloorNum() {
			return *floorNum;
		}
		void SetHuman(const Human* valueHuman) {//сеттеры класса квартира
			*human = *valueHuman;
		}
		void SetFlatNum(int valueFlatNum) {
			*flatNum = valueFlatNum;
		}
		void SetFloorNum(int valueFloorNum) {
			*floorNum = valueFloorNum;
		}

		void ShowFlat() {
			std::cout << "Номер этажа: " << *floorNum << "\nНомер квартиры: " << *flatNum << std::endl;
			std::cout << "================================================\n";
		}

	};

	class Building {
	private:
		Flat* flat;
		char* city;
		char* address;
		int* numberOfBuilding;
		int* numberOfFloors;
	public:
		Building() {
			this->flat = new Flat[350];
			this->city = new char[50];
			this->address = new char[50];
			this->numberOfBuilding = new int[50];
			this->numberOfFloors = new int[50];
		}

		Building(const Building& other) {
			this->city = &other.city[50];
			for (int i = 0; i < other.city[50]; i++) {
				this->city[i] = other.city[i];
			}
			this->address = &other.address[50];
			for (int i = 0; i < other.address[50]; i++) {
				this->address[i] = other.address[i];
			}
			this->numberOfBuilding = &other.numberOfBuilding[50];
			for (int i = 0; i < other.numberOfBuilding[50]; i++) {
				this->numberOfBuilding[i] = other.numberOfBuilding[i];
			}
			this->numberOfFloors = &other.numberOfFloors[50];
			for (int i = 0; i < other.numberOfFloors[50]; i++) {
				this->numberOfFloors[i] = other.numberOfFloors[i];
			}
		}


		Flat GetFlat() {
			return *flat;
		}
		char GetCity() {
			return *city;
		}
		char GetAddress() {
			return *address;
		}
		int GetNumberOfBuilding() {
			return *numberOfBuilding;
		}
		int GetNumberOfFloors() {
			return *numberOfFloors;
		}
		void SetFlat(const Flat* valueFlat) {
			*flat = *valueFlat;
		}
		void SetCity(const char* valueCity) {
			if (city != nullptr) {
				delete[] city;
				city = nullptr;
			}
			city = new char[strlen(valueCity) + 1]{ 0 };
			strcpy_s(city, strlen(valueCity) + 1, valueCity);
		}
		void SetAddress(const char* valueAddress) {
			if (address != nullptr) {
				delete[] address;
				address = nullptr;
			}
			address = new char[strlen(valueAddress) + 1]{ 0 };
			strcpy_s(address, strlen(valueAddress) + 1, valueAddress);
		}
		void SetNumberOfBuilding(int valueNumberOfBuilding) {
			*numberOfBuilding = valueNumberOfBuilding;
		}
		void SetNumberOfFloors(const int valueNumberOfFloors) {
			*numberOfFloors = valueNumberOfFloors;
		}
		void ShowBilding() {
			std::cout << "Город проживания: " << city << "\nНазвание улицы: " << address << "\nНомер дома: " << *numberOfBuilding << "\nКоличество этажей в доме: " << *numberOfFloors << std::endl;
		}
		~Building() {
			delete[] flat;
			flat = nullptr;
			delete[] city;
			city = nullptr;
			delete[] address;
			address = nullptr;
			delete[] numberOfBuilding;
			numberOfBuilding = nullptr;
			delete[] numberOfFloors;
			numberOfFloors = nullptr;
		}
	};
}

