#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>

int main() {
    ALLEGRO_DISPLAY *display = NULL;
    if(!al_init() || !al_init_image_addon()) {
        fprintf(stderr, "Não foi possível iniciar o Allegro.\n");
        return -1;
    }
    display = al_create_display(640, 480);
    if(!display) {
        fprintf(stderr, "Não foi possível iniciar o display.\n");
        return -1;
    }
    ALLEGRO_BITMAP *img1 = NULL, *img2 = NULL, *img3 = NULL, *img4 = NULL;
    img1 = al_load_bitmap("A-P.png");
    img2 = al_load_bitmap("A-E.png");
    img3 = al_load_bitmap("A-C.png");
    img4 = al_load_bitmap("A-O.png");
    if(!img1 || !img2 || !img3 || !img4) {
        fprintf(stderr, "Não foi possível criar a imagem.\n");
        return -1;
    }
    al_clear_to_color(al_map_rgb(0, 150, 0));
    al_draw_bitmap(img4, 559, 10, 0);
    al_draw_bitmap(img3, 478, 10, 0);
    al_draw_bitmap(img2, 397, 10, 0);
    al_draw_bitmap(img1, 316, 10, 0);
    al_flip_display();  
    al_rest(10.0);
    al_destroy_display(display);
    return 0;
}
