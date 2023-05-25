#pragma once
#include "windows.h"
#include <stdio.h>

namespace neighbors {
	class Human {
	private:
		char* name;
		char* shurname;
	public:
		Human() {
			this->name = new char[50];
			this->shurname = new char[50];
		}

		Human(const Human& other) {
			this->name = &other.name[50];
			for (int i = 0; i < other.name[50]; i++) {
				this->name[i] = other.name[i];
			}
			this->shurname = &other.shurname[50];
			for (int i = 0; i < other.shurname[50]; i++) {
				this->shurname[i] = other.shurname[i];
			}
		}

		~Human() {
			delete[] name;
			name = nullptr;
			delete[] shurname;
			shurname = nullptr;
		}

		char GetName() {
			return *name;
		}

		char GetShurname() {
			return *shurname;
		}

		void SetName(char* valueName) {
			*name = *valueName;
		}

		void SetShurname(char* valueShurname) {
			*shurname = *valueShurname;
		}
	};

	class Flat {
	private:
		Human* human;
		int* flatNum;
		int* floorNum;
	public:
		Flat() {
			this->human = new Human[250];
			this->flatNum = new int[50];
			this->floorNum = new int[50];
		}

		Flat(const Flat &other) {

		}

		~Flat() {
			delete[] human;
			human = nullptr;
			delete[] flatNum;
			flatNum = nullptr;
			delete[] floorNum;
			floorNum = nullptr;
		}
		Human GetHuman() {
			return *human;
		}
		int GetFlatNum() {
			return *flatNum;
		}
		int GetFloorNum() {
			return *floorNum;
		}
		void SetHuman(Human* valueHuman) {
			*human = *valueHuman;
		}
		void SetFlatNum(int* valueFlatNum) {
			*flatNum = *valueFlatNum;
		}
		void SetFloorNum(int* valueFloorNum) {
			*floorNum = *valueFloorNum;
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
		void SetFlat(Flat* valueFlat) {
			*flat = *valueFlat;
		}
		void SetAddress(char* valueAddress) {
			*address = *valueAddress;
		}
		void SetNumberOfBuilding(int* valueNumberOfBuilding) {
			*numberOfBuilding = *valueNumberOfBuilding;
		}
		void SetNumberOfFloors(int* valueNumberOfFloors) {
			*numberOfFloors = *valueNumberOfFloors;
		}
	};
}