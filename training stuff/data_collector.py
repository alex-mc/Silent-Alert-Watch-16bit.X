# -*- coding: utf-8 -*-
"""
Created on Wed Nov 26 09:27:33 2014

@author: Alex
"""

import serial

PORT_NUM = 0
BAUD = 0
DATA_FILENAME = 'normal1.txt' # normal, yell, horn, etc.
CLASS = 'N' # N, Y, H, etc.

serial_in = serial.Serial(port=PORT_NUM, baudrate=BAUD)
data_file = open(DATA_FILENAME, 'w')

while True:
    # read time domain and frequency domain data serial_in
    # print both and class to data_file