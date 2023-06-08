/*
** EPITECH PROJECT, 2023
** menu_quests.c
** File description:
** BY - CM
*/

#include "rpg.h"
/*
void event_quest(general_t *all, window_t *win, int i)
{
    if (all->anima->is_valid = 0)
        if (win->evt.type == sfKeyEnter)
            add_quests(all->quest, all->anime->quest,
                        (all->quest->size + 1));
    if (all->anima->is_valid = 2)
        if (win->evt.type == sfKeyEnter)
            delete_quests(all->quest, i)//n° de quete
}

void display_pnj_quest(general_t *all, window_t *win, int i)
{
    sfText *ta = NULL;
    char str[] = "PNJ: Press enter for accept the quest !";
    char src[] = "PNJ: Press enter for validate the quest !";

    if (all->anima->is_valid = 0) {
        ta = my_get_text(str, (V){1000, 800}, (V){0.5, 0.5});
        sfRenderWindow_drawText(win->win, ta, NULL);
    } else if (all->anima->is_valid = 2) {
        ta = my_get_text(src, (V){1000, 800}, (V){0.5, 0.5});
        sfRenderWindow_drawText(win->win, ta, NULL);
    }
    sfText_destroy(ta);
}

void process_quest(general_t *all, window_t *win)
{
    UINT i = 0;

    printf("FALSE\n");
    for (; all->anima->state->talk_to_you != FALSE; i++)
        printf("TRUE\n");
        while (sfRenderWindow_pollEvent(win->win, &win->evt)) {
            //display_pnj_quest(all, win, i);
            //event_quest(all, win, i);
        }
}*/
