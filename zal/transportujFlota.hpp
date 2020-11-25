#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int iloscTowaru = 0;                           
    unsigned int iloscZaglowcow = 0;                        

    if(towar == 0) 
	    return iloscZaglowcow;
	
    Stocznia stocznia{};                                      

    while(iloscTowaru < towar)
    {
      Statek* statek = stocznia();
      iloscTowaru += (statek->transportuj());

      if(dynamic_cast<Zaglowiec*>(statek))
		++iloscZaglowcow;

      delete statek;
    }

   return iloscZaglowcow;
}
