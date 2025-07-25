# ai_module/serve_ai.py
import sys
import random

def get_decision(price):
    # Lógica de IA super avançada (e falsa)
    if price > 54500.0 and random.random() > 0.5:
        return "SELL"
    elif price < 54100.0 and random.random() > 0.5:
        return "BUY"
    else:
        return "HOLD"

if __name__ == "__main__":
    price = float(sys.argv[1])
    decision = get_decision(price)
    print(decision) # C vai ler esta saída