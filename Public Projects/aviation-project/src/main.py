#%%
import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

#%%
data_path = 'https://raw.githubusercontent.com/lxndrblz/Airports/main/citycodes.csv'

#%%
df = pd.read_csv(data_path, sep=',')
df.head()


# %%

plt.bar(df.country_id,df.elevation)
plt.show()


# %%

