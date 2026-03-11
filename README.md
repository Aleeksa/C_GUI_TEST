# 🖥️ CoreLink GUI: GTK+3 Primer in C

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-A8B9CC?style=for-the-badge&logo=c&logoColor=white" />
  <img src="https://img.shields.io/badge/GUI-GTK%2B3.0-7f55c1?style=for-the-badge&logo=gnome&logoColor=white" />
  <img src="https://img.shields.io/badge/Status-Active-green?style=for-the-badge" />
</p>

A simple and efficient **GTK+ 3** application example written in pure **C**. This project serves as a starting point for understanding *event-driven* programming and building native graphical interfaces on Linux systems.

---

## 🖼️ Screenshot
<p align="center">
  <img src="Screenshot_GUI_C.png" alt="CoreLink GUI Screenshot" width="500" />
  <br>
  <i>Display of the CoreLink GUI application with an active dialog</i>
</p>

---

## ✨ Features
* **Main Window:** Desktop application with precisely defined dimensions and padding.
* **Interactivity:** Implementation of `GtkButton` widgets with signal-callback mechanisms.
* **Dialogs:** Dynamic invocation of `GtkMessageDialog` windows for user interaction.
* **Native Lifecycle:** Proper process handling and application termination on the `destroy` signal.

---

## 📂 Project Structure
```text
gtk3-c-primer/
├── gui.c          # Main source file with logic
├── README.md      # Project documentation
└── screenshot.png # Visual preview (optional)
# Update and install dependencies
sudo apt update
sudo apt install gcc pkg-config libgtk-3-dev

# Check GTK flags (optional)
pkg-config --cflags --libs gtk+-3.0

# Compile the project
gcc gui.c -o gui `pkg-config --cflags --libs gtk+-3.0`

# Run the application
./gui
