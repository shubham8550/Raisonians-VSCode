import requests
from bs4 import BeautifulSoup 

response = requests.get('https://en.wikipedia.org/wiki/States_and_union_territories_of_India')
html = response.text

soup = BeautifulSoup(html, 'html.parser')
text = soup.select('th a')[10:38]

for a in text:
    print(a.text)
