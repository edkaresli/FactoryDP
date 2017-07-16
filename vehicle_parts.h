#pragma once

class VehicleParts
{

public:
	VehicleParts(){}
	virtual ~VehicleParts(){}

	virtual void wheels() = 0;
	virtual void engine() = 0;

};


class CivilCarParts : public VehicleParts
{
public:
	CivilCarParts(){}
	virtual ~CivilCarParts(){}

	virtual void wheels();
	virtual void engine();
};

class MotorcycleParts : public VehicleParts
{
public:
	MotorcycleParts(){}
	virtual ~MotorcycleParts(){}

	virtual void wheels();
	virtual void engine();
};