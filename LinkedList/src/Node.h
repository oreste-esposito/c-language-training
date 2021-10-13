/*
 * Node.h
 *
 *  Created on: 13 ott 2021
 *      Author: Oreste ESPOSITO
 */

#ifndef SRC_NODE_H_
#define SRC_NODE_H_

typedef struct myNode
{
	int value;
	struct Node * nextNode;
} Node;

Node* createNode (void);
void deleteNode (Node *);
void setNodeValue (Node *, const int);
int getNodeValue (const Node *);

// void setNodeNextNode (Node *, Node *);
// Node * getNodeNextNode(const Node *);

#endif /* SRC_NODE_H_ */
