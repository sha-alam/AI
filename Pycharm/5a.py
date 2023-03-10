import pandas as pd

# Creating and loading different datasets
data = {'Name': ['Jai', 'Princi', 'Gaurav', 'Anju', 'Ravi', 'Natasha', 'Riya'],
        'Age': [17, 17, 18, 17, 18, 17, 17],
        'Gender': ['M', 'F', 'M', 'M', 'M', 'F', 'F'],
        'Marks': [90, 76, 'NaN', 74, 65, 'NaN', 71]}
a = pd.DataFrame(data)
print(a, "\n")

# loading database from csv type dataset
b = pd.read_csv('1.car driving risk analysis.csv')
print("Read Dataset from csv file\n")
print(b)



