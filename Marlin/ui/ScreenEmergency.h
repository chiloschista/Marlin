///////////////////////////////////////////////////////////////////////////////
/// \file ScreenEmergency.cpp
///
/// \author Ivan Galvez Junquera
///         Ruy Garcia
///         Victor Andueza 
///         Joaquin Herrero
///
/// \brief Definition of Emergency screen.
///
/// Copyright (c) 2015 BQ - Mundo Reader S.L.
/// http://www.bq.com
///
/// This file is free software; you can redistribute it and/or modify
/// it under the terms of either the GNU General Public License version 2 or 
/// later or the GNU Lesser General Public License version 2.1 or later, both
/// as published by the Free Software Foundation.
///
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL 
/// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
/// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
/// DEALINGS IN THE SOFTWARE.
///////////////////////////////////////////////////////////////////////////////

#ifndef SCREEN_EMERGENCY_H
#define SCREEN_EMERGENCY_H

#include "Screen.h"

namespace ui
{
	class ScreenEmergency : public Screen
	{
		public:
			ScreenEmergency(const char * title, const char * message, const char * box, const unsigned char * bitmap);
			~ScreenEmergency();

			void draw();

			void init(uint16_t index);
			void add(ScreenIndex_t const & component);

		private:
			const char * m_box;
			const char * m_message;

			const unsigned char * m_bitmap;

			ScreenIndex_t m_next_screen;
	};
}

#endif // SCREEN_EMERGENCY_H
