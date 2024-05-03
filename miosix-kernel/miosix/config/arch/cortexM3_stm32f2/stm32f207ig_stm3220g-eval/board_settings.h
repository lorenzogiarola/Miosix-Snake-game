/***************************************************************************
 *   Copyright (C) 2012-2021 by Terraneo Federico                          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   As a special exception, if other files instantiate templates or use   *
 *   macros or inline functions from this file, or you compile this file   *
 *   and link it with other works to produce a work based on this file,    *
 *   this file does not by itself cause the resulting work to be covered   *
 *   by the GNU General Public License. However the source code for this   *
 *   file must still be made available in accordance with the GNU General  *
 *   Public License. This exception does not invalidate any other reasons  *
 *   why a work based on this file might be covered by the GNU General     *
 *   Public License.                                                       *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, see <http://www.gnu.org/licenses/>   *
 ***************************************************************************/

#pragma once

/**
 * \internal
 * Versioning for board_settings.h for out of git tree projects
 */
#define BOARD_SETTINGS_VERSION 300

namespace miosix {

/**
 * \addtogroup Settings
 * \{
 */

/// Size of stack for main().
/// The C standard library is stack-heavy (iprintf requires 1.5KB) and the
/// STM32F207IG has 128KB of RAM so there is room for a big 4K stack.
const unsigned int MAIN_STACK_SIZE=4*1024;

/// Serial port
//This board only exposes USART3, without flow control
const unsigned int defaultSerialSpeed=19200;
//#define SERIAL_1_DMA //Serial 1 is not used, so not enabling DMA
//#define SERIAL_2_DMA //Serial 2 is not used, so not enabling DMA
#define SERIAL_3_DMA

///\def STDOUT_REDIRECTED_TO_DCC
///If defined, stdout is redirected to the debug communication channel, and
///will be printed if OpenOCD is connected. If not defined, stdout will be
///redirected throug USART1, as usual.
//#define STDOUT_REDIRECTED_TO_DCC

//SD card driver
static const unsigned char sdVoltage=33; //Board powered @ 3.3V
#define SD_ONE_BIT_DATABUS //Can't use 4 bit databus due to pin conflicts

/**
 * \}
 */

} //namespace miosix
