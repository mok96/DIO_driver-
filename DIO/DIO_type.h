/*
 * DIO_type.h
 *
 *  Created on: May 23, 2021
 *      Author: mokhtar
 */

#ifndef MNM_MCAL_DIO_DIO_TYPE_H_
#define MNM_MCAL_DIO_DIO_TYPE_H_
typedef enum
{
	INPUT ,
	OUTPUT

} DIO_Direction  ;

typedef enum
{
	PORTA,
	PORTB,
	PORTC,
	PORTD


}DIO_PORT_ID;
typedef enum
{
	PIN0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7
}DIO_PIN_ID;

typedef enum
{
	LOW ,
	HIGH

} DIO_VALUE  ;




#endif /* MNM_MCAL_DIO_DIO_TYPE_H_ */
