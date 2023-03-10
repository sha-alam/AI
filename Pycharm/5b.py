import numpy as np
import statistics as stats
import pandas as pd

data = pd.read_csv('dd.csv')
print('Dataset:\n', data)
# Compute the mean
mean = np.mean(data['num'])
print('Mean:', mean)
# # Compute the median
median = np.median(data['num'])
print('Median:', median)
# # Compute the mode
mode = stats.mode(data['gender'])
# mode_val = mode.mode[0]
print('Mode:', mode)
# # Compute the variance
variance = np.var(data['num'])
print('Variance:', variance)
# # Compute the standard deviation
std_dev = np.std(data['num'])
std_dev = round(std_dev, 2);
print('Standard Deviation:', std_dev)








