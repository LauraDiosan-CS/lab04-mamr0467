// Seminar_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//16martie2020SM

#include <iostream>
#include "Tests.h"
#include "Film.h"
//#include "stdafx.h"
#include "assert.h"
#include "Film.h"

#include "service.h"
#include "auxiliar.h"
#include "Repo.h"
#include "ui.h"
#include <iostream>
using namespace std;

int main()
{
   
    Repo repo;
   
    Service service(repo);
    
   
    Ui ui(service);

    ui.run();
}

