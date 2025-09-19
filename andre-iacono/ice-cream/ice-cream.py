
import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv('/home/bene/Documentos/GitHub/geek-university-projects/andre-iacono/ice-cream/IceCreamData.csv')

celsius = (df['Temperature'] - 32) * 5/9

df['Temperature'] = celsius

result = df.sort_values('Temperature', ascending=False)

plt.plot(result['Temperature'], result['Revenue'], 'r.--',label = 'US$')
plt.title('Ice Cream Truck')
plt.ylabel('Sales (US$)')
plt.xlabel('Temperature (Celsius)')
plt.legend()
# plt.savefig('IceCream.pdf')
plt.show()
