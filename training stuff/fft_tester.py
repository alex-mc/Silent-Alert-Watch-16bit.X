# -*- coding: utf-8 -*-
"""
Created on Wed Nov 26 10:04:14 2014

@author: Alex
"""

import numpy as np

data_filename = 'data.txt'

time_data = []
freq_data = []
data_file = open(data_filename, 'r')
error_file = open('error_for_' + data_filename, 'w+')
for line in data_file:
    line = line.split(';')
    time_data.append(list(line[0]))
    freq_data.append(list(line[1]))

num_entries = len(time_data)
num_values = len(time_data[0])
for i in range(num_entries):
    freq_data_check = np.real(np.fft(time_data[i]))
    time_data_check = np.real(np.ifft(freq_data[i]))
    for j in range(num_values):
        error_file.write(str(freq_data[i][j] - freq_data_check[j]))
        error_file.write(' ')
    error_file.write('     ')
    for j in range(num_values):
        error_file.write(str(time_data[i][j] - time_data_check[j]))
        error_file.write(' ')
        error_file.write('\n')

data_file.close()
error_file.close()