/* position.h */

#ifndef POSITION_H
#define POSITION_H

/* Position
 *
 * La posizione di un oggetto sulla griglia di gioco
 */

typedef struct {
  int x;
  int y;
} Position;

/* position_make:
 *
 * restituisce una Position con i valori 'x' e 'y'
 */
Position position_make(int x, int y);


/* position_equals:
 *
 * restituisce vero se le posizioni pos1 e pos2 sono uguali
 */
int position_equals(Position *pos1, Position *pos2);


/* position_print:
 *
 * stampa per debug
 */
void position_print(Position *pos);

#endif
