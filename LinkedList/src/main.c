/*
 * main.c
 *
 *  Created on: 13 ott 2021
 *      Author: Oreste ESPOSITO
 */

#include <stdlib.h>
#include <stdio.h>
#include "Node.h"

int main ()
{
	Node * elem = createNode();
	setNodeValue(elem, 5);
	elem->nextNode = NULL;

	printf("Valore nodo: %d \n", getNodeValue(elem));

	deleteNode(elem);

	return EXIT_SUCCESS;
}
