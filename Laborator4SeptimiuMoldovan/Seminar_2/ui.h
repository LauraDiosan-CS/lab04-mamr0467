#pragma once
#include "service.h"
class Ui
{
private:
	Service& service;

	void showMenu();
public:
	Ui(Service& service) : service{ service } {}
	void run();
};