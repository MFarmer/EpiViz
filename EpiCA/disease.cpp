//
//  disease.cpp
//  epiViz
//
//  Created by Matthew Farmer on 3/17/13.
//  Copyright (c) 2013 Matthew Farmer. All rights reserved.
//

#include "disease.h"

disease::disease()
{
    this->name = "Unknown";
    this->infectionProbability = 0;
    this->deathProbability = 0;
    this->travelProbability = 0;
    this->vaccinationProbability = 0;
    this->daysBeforeVaccinationAvailable = 0;
    this->daysInfectionLasts = 0;
	this->immunizationAllowed = true;
}

disease::~disease()
{
    //destructor
}

void disease::setName(std::string n)
{
    this->name = n;
}

void disease::setInfectionProbability(unsigned short int n)
{
    this->infectionProbability = n;
}

void disease::setDeathProbability(unsigned short int n)
{
    this->deathProbability = n;
}

void disease::setTravelProbability(unsigned short int n)
{
    this->travelProbability = n;
}

void disease::setVaccinationProbability(unsigned short int n)
{
    this->vaccinationProbability = n;
}

void disease::setDaysInfectionLasts(unsigned short int n)
{
    this->daysInfectionLasts = n;
}

void disease::setDaysBeforeVaccinationAvailable(unsigned short int n)
{
    this->daysBeforeVaccinationAvailable = n;
}

void disease::setImmunizationAllowed(bool x)
{
	this->immunizationAllowed = x;
}

unsigned short int disease::getInfectionProbability()
{
    return this->infectionProbability;
}

unsigned short int disease::getDeathProbability()
{
    return this->deathProbability;
}

unsigned short int disease::getTravelProbability()
{
    return this->travelProbability;
}

unsigned short int disease::getVaccinationProbability()
{
    return this->vaccinationProbability;
}

unsigned short int disease::getDaysInfectionLasts()
{
    return this->daysInfectionLasts;
}

unsigned short int disease::getDaysBeforeVaccinationAvailable()
{
    return this->daysBeforeVaccinationAvailable;
}

std::string disease::getName()
{
	return this->name;
}

bool disease::getImmunizationAllowed()
{
	return this->immunizationAllowed;
}

void disease::printInfo()
{
    std::cout << std::left << "\n+----------------------------------------------+" << std::endl;
    std::cout << "| " << std::setw(40) << this->name << std::setw(4) << " " << " |" << std::endl;
	std::cout << std::left << "+----------------------------------------------+" << std::endl;
    std::cout << std::setw(42) << "| Infection Probability: " << std::setw(3) << std::right << this->infectionProbability << "% |" << std::endl;
    std::cout << std::setw(42) << std::left << "| Days Infection Lasts: " << std::setw(4) << std::right << this->daysInfectionLasts << " |" << std::endl;
	std::cout << std::setw(42) << std::left << "| Death Probability: " << std::setw(3) << std::right << this->deathProbability << "% |" << std::endl;
    std::cout << std::setw(42) << std::left << "| Travel Probability: " << std::setw(3) << std::right << this->travelProbability << "% |" << std::endl;
    std::cout << std::setw(42) << std::left << "| Vaccination Probability: " << std::setw(3) << std::right << this->vaccinationProbability << "% |" << std::endl;
	std::cout << std::setw(42) << std::left << "| Day when Vaccination Available: " << std::setw(4) << std::right << this->daysBeforeVaccinationAvailable << " |" << std::endl;
    std::cout << std::setw(42) << std::left << "| Immunization Allowed: " << std::setw(4) << std::right << this->immunizationAllowed << " |" << std::endl;
	std::cout << "+----------------------------------------------+" << std::endl;
}