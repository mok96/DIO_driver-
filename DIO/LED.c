/*
 * LED.c
 *
 *  Created on: May 23, 2021
 *      Author: mokhtar
 */

#include "DIO_type.h"

#include "DIO.h"

void LED ()
{

DIOSetPortDirection(PORTA, OUTPUT);
DIOSetPortValue(PORTA, 0xff);

}
