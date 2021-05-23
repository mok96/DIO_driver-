/*
 * DIO.h
 *
 *  Created on: May 23, 2021
 *      Author: mokhtar
 */
# include "DIO_type.h"
#ifndef MNM_MCAL_DIO_DIO_H_
#define MNM_MCAL_DIO_DIO_H_

void DIOSetPortDirection (DIO_PORT_ID PORT_ID ,DIO_Direction PORT_DIRECTION);

void DIOSetPortValue (DIO_PORT_ID PORT_ID ,unsigned char PORT_VAlUE);

void DIOSetPinDirection (DIO_PORT_ID PORT_ID , DIO_PIN_ID PIN_ID , DIO_Direction PIN_DIRECTION );

void DIOSetPinValue (DIO_PORT_ID PORT_ID , DIO_PIN_ID PIN_ID , DIO_VALUE PIN_VALUE );

DIO_VALUE DIOGetPinValue ( DIO_PORT_ID PORT_ID , DIO_PIN_ID PIN_ID );


#endif /* MNM_MCAL_DIO_DIO_H_ */
