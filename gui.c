#include <gtk/gtk.h>

// Funkcija koja se poziva kada se klikne na dugme
static void on_button_clicked(GtkWidget *widget, gpointer data) {
    GtkWidget *parent_window = GTK_WIDGET(data);
    GtkWidget *dialog;

    // Kreiranje "pop-up" prozora
    dialog = gtk_message_dialog_new(GTK_WINDOW(parent_window),
                                    GTK_DIALOG_DESTROY_WITH_PARENT,
                                    GTK_MESSAGE_INFO,
                                    GTK_BUTTONS_OK,
                                    "Hello World!");
    
    gtk_window_set_title(GTK_WINDOW(dialog), "Pozdrav");
    
    // Prikaži dijalog i čekaj da korisnik klikne OK
    gtk_dialog_run(GTK_DIALOG(dialog));
    
    // Uništi dijalog nakon klika
    gtk_widget_destroy(dialog);
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    // Glavni prozor
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "CoreLink GUI");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);
    gtk_container_set_border_width(GTK_CONTAINER(window), 50);

    // Kreiranje dugmeta
    GtkWidget *button = gtk_button_new_with_label("Klikni me!");

    // Povezivanje signala "clicked" sa našom funkcijom
    // Prosleđujemo 'window' kao podatak da bi dijalog znao ko mu je "roditelj"
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), window);

    // Ubacivanje dugmeta u prozor
    gtk_container_add(GTK_CONTAINER(window), button);

    // Zatvaranje aplikacije na X
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}