/*
 * DIO.c
 *
 *  Created on: May 23, 2021
 *      Author: mokhtar
 */


# include "DIO.h"
# include "DIO_REG.h"
void DIOSetPortDirection (DIO_PORT_ID PORT_ID ,DIO_Direction PORT_DIRECTION)
{
	if ( OUTPUT == PORT_DIRECTION)
	{
		switch (PORT_ID)
		{
		case PORTA: DDRA_REG =0xFF ;break;
		case PORTB: DDRB_REG =0xFF ;break;
		case PORTC: DDRC_REG =0xFF ;break;
		case PORTD: DDRD_REG =0xFF ;break;
		}

	}

	else if (INPUT == PORT_DIRECTION )
	{
		switch (PORT_ID)
				{
	     	case PORTA: DDRA_REG =0x00 ;break;
			case PORTB: DDRB_REG =0x00 ;break;
			case PORTC: DDRC_REG =0x00 ;break;
			case PORTD: DDRD_REG =0x00 ;break;
				}

	}
}
void DIOSetPortValue (DIO_PORT_ID PORT_ID ,unsigned char PORT_VAlUE)
{
   switch (PORT_ID)
   {
   case PORTA :PORTA_REG = PORT_VAlUE ;break;
   case PORTB :PORTB_REG = PORT_VAlUE ;break;
   case PORTC :PORTC_REG = PORT_VAlUE ;break;
   case PORTD :PORTD_REG = PORT_VAlUE ;break;
   }



}
void DIOSetPinDirection (DIO_PORT_ID PORT_ID , DIO_PIN_ID PIN_ID , DIO_Direction PIN_DIRECTION )
{
	if (PORT_ID<= PORTD && PIN_ID <=PIN7)
	{

		if ( OUTPUT == PIN_DIRECTION)
			{
				switch (PORT_ID)
				{
				case PORTA: DDRA_REG |=(1<<PIN_ID) ;break;
				case PORTB: DDRB_REG |=(1<<PIN_ID) ;break;
				case PORTC: DDRC_REG |=(1<<PIN_ID) ;break;
				case PORTD: DDRD_REG |=(1<<PIN_ID) ;break;
				}

			}
		else if (INPUT == PIN_DIRECTION)
		{

			switch (PORT_ID)
							{
							case PORTA: DDRA_REG &=~(1<<PIN_ID) ;break;
							case PORTB: DDRB_REG &=~(1<<PIN_ID) ;break;
							case PORTC: DDRC_REG &=~(1<<PIN_ID) ;break;
							case PORTD: DDRD_REG &=~(1<<PIN_ID) ;break;
							}




		}


	}

}
void DIOSetPinValue (DIO_PORT_ID PORT_ID , DIO_PIN_ID PIN_ID , DIO_VALUE PIN_VALUE )
{
	if (PORT_ID<= PORTD && PIN_ID <=PIN7)
		{

			if ( HIGH == PIN_VALUE)
				{
					switch (PORT_ID)
					{
					case PORTA: PORTA_REG |=(1<<PIN_ID) ;break;
					case PORTB: PORTB_REG |=(1<<PIN_ID) ;break;
					case PORTC: PORTC_REG |=(1<<PIN_ID) ;break;
					case PORTD: PORTD_REG |=(1<<PIN_ID) ;break;
					}

				}
			else if (LOW == PIN_VALUE)
			{

				switch (PORT_ID)
								{
								case PORTA: PORTA_REG &=~(1<<PIN_ID) ;break;
								case PORTB: PORTB_REG &=~(1<<PIN_ID) ;break;
								case PORTC: PORTC_REG &=~(1<<PIN_ID) ;break;
								case PORTD: PORTD_REG &=~(1<<PIN_ID) ;break;
								}




			}


		}



}
DIO_VALUE DIOGetPinValue ( DIO_PORT_ID PORT_ID , DIO_PIN_ID PIN_ID )
{
	DIO_VALUE PIN_VALUE;

	if (PORT_ID<= PORTD && PIN_ID <=PIN7)
			{

						switch (PORT_ID)
						{
						case PORTA: PIN_VALUE= PINA_REG =(((PORT_ID) >> (PIN_ID)) & 0x01) ;break;
						case PORTB: PIN_VALUE= PINB_REG =(((PORT_ID) >> (PIN_ID)) & 0x01) ;break;
						case PORTC: PIN_VALUE= PINC_REG =(((PORT_ID) >> (PIN_ID)) & 0x01) ;break;
						case PORTD: PIN_VALUE= PIND_REG =(((PORT_ID) >> (PIN_ID)) & 0x01) ;break;
						}

					}


return PIN_VALUE;
}
