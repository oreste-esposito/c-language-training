/*
 * Node.c
 *
 *  Created on: 13 ott 2021
 *      Author: Oreste ESPOSITO
 */

#include <stdlib.h>
#include "Node.h"

Node * createNode (void)
{
	Node * retNode = (Node *) malloc (sizeof(Node));
	retNode->value = 0;
	retNode->nextNode = NULL;
	return retNode;
}

void deleteNode(Node * pNode)
{
	free (pNode);
}

void setNodeValue (Node * pNode, const int pValue)
{
	pNode->value = pValue;
}

int getNodeValue (const Node * pNode)
{
	return pNode->value;
}


/*
void setNodeNextNode (Node * pSourceNode, Node * pNextNode)
{
	pSourceNode->nextNode = pNextNode;
}

Node * getNodeNextNode (const Node * pNode)
{
	return pNode->nextNode;
}
*/
