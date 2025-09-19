import pandas as pd

    # Leitura do Arquivo

df = pd.read_csv('/home/bene/Documentos/GitHub/geek-university-projects/andre-iacono/titanic/titanic.csv')

filter1 = df[['Name', 'Age', 'Sex', 'Pclass', 'Survived']]

filter1 = filter1.loc[(filter1['Sex'] == 'female') & (filter1['Pclass'] == 1) & (filter1['Survived'] == 1)]

filter1 = filter1.sort_values(['Name'], ascending=True)

print(filter1)

filter1.to_csv('titanic_result.csv', index=False)
