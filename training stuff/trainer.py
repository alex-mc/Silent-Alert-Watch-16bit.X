# -*- coding: utf-8 -*-
"""
Created on Wed Nov 26 09:51:36 2014

Trains a Decision Tree Classifier from a text file containing time and
frequency domain data.

@author: Alex
"""

from sklearn import DecisionTreeClassifier

freq_data = []
classifications = []
data_file = open('alldata.txt', 'r')
for line in data_file:
    line = line.split(';')
    # time_data = line[0] # shouldn't need this here
    freq_data.append(list(line[1]))
    classifications.append(line[2])
    
classifier = DecisionTreeClassifier()
