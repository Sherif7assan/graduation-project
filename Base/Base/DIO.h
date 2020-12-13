﻿/*
 * DIO.h
 *
 * Created: 12/12/2020 08:01:27 م
 *  Author: hp
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "BitMath.h"
#include "STD_types.h"
#include "DIO_HW.h"
#include "DIO_types.h"
#include "DIO_CFG.h"

void DIO_write(DIO_ChannelTypes ChannelID, STD_LevelTypes level);
STD_LevelTypes DIO_read(DIO_ChannelTypes ChannelID);
void DIO_toggle(DIO_ChannelTypes ChannelID);






#endif /* DIO_H_ */