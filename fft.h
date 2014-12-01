/************************************************************************
	fft.h
    FFT Audio Analysis
    Copyright (C) 2011 Simon Inns
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
	Email: simon.inns@gmail.com
************************************************************************/

#ifndef _FFT_H
#define _FFT_H

// Definitions
#define N_WAVE      1024    // full length of Sinewave[]
#define LOG2_N_WAVE 10      // log2(N_WAVE)

// Since we only use 3/4 of N_WAVE, we define only
// this many samples, in order to conserve data space.

// Function prototypes
void fix_fft(short fr[], short fi[], short m);

#endif