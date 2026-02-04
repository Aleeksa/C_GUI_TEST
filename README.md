# GTK+ 3 GUI Primer u C-u

Jednostavan primer GTK+ 3 aplikacije napisan u čistom C-u koja pokazuje kako se pravi osnovni grafički interfejs koristeći biblioteku GTK 3.

## Snimak ekrana

(Ovde možeš kasnije dodati sliku – na primer `screenshot.png`)

## Šta ovaj program radi

- Otvara glavni prozor
- Ima natpis (label) i dugme
- Kada se klikne dugme, pojavljuje se poruka (message dialog)
- Lep, moderan GTK 3 izgled
- Ispravno zatvara prozor kada se klikne X

## Preduslovi

Potreban ti je Linux / macOS sa instaliranim razvojnim paketima za GTK 3.

### Ubuntu / Debian / Pop!_OS / Mint

```bash
sudo apt update
sudo apt install gcc pkg-config libgtk-3-dev

# Proveri verzije (opciono)
gcc --version
pkg-config --version

# Pogledaj potrebne zastavice i biblioteke
pkg-config --cflags --libs gtk+-3.0

# Kompilacija
gcc gui.c -o gui `pkg-config --cflags --libs gtk+-3.0`

# Pokretanje
./gui

gtk3-c-primer/
├── gui.c          ← glavni izvorni fajl
├── README.md      ← ovaj fajl
└── screenshot.png (opciono)
