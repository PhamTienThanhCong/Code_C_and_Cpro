import http.client
import json

conn = http.client.HTTPSConnection("p2p.binance.com")
payload = json.dumps({
  "page": 2,
  "rows": 10,
  "payTypes": [],
  "asset": "USDT",
  "tradeType": "BUY",
  "fiat": "VND",
  "publisherType": None
})
headers = {
  'Content-Type': 'application/json',
  'Cookie': 'cid=FBb5Btvt'
}
conn.request("POST", "/bapi/c2c/v2/friendly/c2c/adv/search", payload, headers)
res = conn.getresponse()
data = res.read()
print(data.decode("utf-8"))