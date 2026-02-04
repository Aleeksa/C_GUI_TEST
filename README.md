# 🖥️ CoreLink GUI: GTK+3 Primer u C-u

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-A8B9CC?style=for-the-badge&logo=c&logoColor=white" />
  <img src="https://img.shields.io/badge/GUI-GTK%2B3.0-7f55c1?style=for-the-badge&logo=gnome&logoColor=white" />
  <img src="https://img.shields.io/badge/Status-Active-green?style=for-the-badge" />
</p>

Jednostavan i efikasan primer **GTK+ 3** aplikacije napisan u čistom **C jeziku**. Ovaj projekat služi kao polazna tačka za razumevanje *event-driven* programiranja i izradu native grafičkih interfejsa na Linux sistemima.

---

## 🖼️ Snimak ekrana
<p align="center">
  <img src="Screenshot_GUI_C.png" alt="CoreLink GUI Screenshot" width="500" />
  <br>
  <i>Prikaz CoreLink GUI aplikacije sa aktivnim dijalogom</i>
</p>

---

## ✨ Funkcionalnosti
* **Glavni prozor:** Desktop aplikacija sa precizno definisanim dimenzijama i paddingom.
* **Interaktivnost:** Implementacija `GtkButton` widget-a sa signal-callback mehanizmom.
* **Dijalozi:** Dinamičko pozivanje `GtkMessageDialog` prozora za interakciju sa korisnikom.
* **Native Lifecycle:** Pravilno rukovanje procesima i zatvaranje aplikacije na `destroy` signal.

---

## 📂 Struktura Projekta
```text
gtk3-c-primer/
├── gui.c          # Glavni izvorni fajl sa logikom
├── README.md      # Dokumentacija projekta
└── screenshot.png # Vizuelni prikaz (opciono)
```

## 🚀 Instalacija i Pokretanje
```text
sudo apt update
sudo apt install gcc pkg-config libgtk-3-dev
pkg-config --cflags --libs gtk+-3.0
gcc gui.c -o gui `pkg-config --cflags --libs gtk+-3.0`
./gui
```
