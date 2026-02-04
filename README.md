# 🖥️ CoreLink GUI (GTK+3)

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-A8B9CC?style=for-the-badge&logo=c&logoColor=white" />
  <img src="https://img.shields.io/badge/GUI-GTK%2B3.0-7f55c1?style=for-the-badge&logo=gnome&logoColor=white" />
</p>

Ovaj projekat predstavlja implementaciju osnovnog grafičkog interfejsa napisanog u **C jeziku** korišćenjem **GTK+ 3.0** biblioteke. Program demonstrira rad sa prozorima, dugmićima i interaktivnim dijalozima (pop-up prozorima).

## ✨ Funkcionalnosti
* **Glavni prozor:** Desktop aplikacija fiksne veličine sa naslovom.
* **Signal Handling:** Povezivanje klikova na dugme sa C funkcijama preko `g_signal_connect`.
* **Interaktivnost:** Prikazivanje "Message Dialog" prozora sa povratnom informacijom.
* **Native Performanse:** Brzo izvršavanje uz minimalnu potrošnju memorije.

---

## 🚀 Instalacija i Pokretanje

### 1. Sistemske zavisnosti
Proverite da li su instalirani kompajler i GTK razvojni paketi:
```bash
gcc --version
pkg-config --version
