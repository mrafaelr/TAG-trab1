#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int number;
	struct node * next;
} t_node;

typedef struct graph{
	int size;
	t_node * node;
} t_graph;

t_node* create_node(int n){

	t_node* new_node = (t_node*) malloc(sizeof(t_node));
	if(new_node == NULL) return NULL;
	new_node->number = n;
	new_node->next = NULL;
	return new_node;
}

t_graph* create_graph(int size){
	t_graph* new_graph = (t_graph*) malloc(sizeof(t_graph));
	if(new_graph == NULL) return NULL;
	new_graph->size = size;
	new_graph->node = (t_node*) malloc(size*sizeof(t_node));
	for(int i = 0; i < size; i++){
		new_graph->node[i].number = i;
	}
	return new_graph;
}

void insert_edge(t_graph* graph, int node, int adjacent){
	if (node > graph->size) return;
	t_node* temp = &graph->node[node];
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = (t_node*) create_node(adjacent);
}

int main(){
	




return 0;
}

