#include <iostream>
using namespace std;

struct Tpila{
	char elements[50];
	int top;
};
typedef struct Tpila Pila;

void initialize(Pila*s){
	s->top=-1;
}
bool empty(Pila*s){
	return s->top=-1;
}

void push(Pila *s, float e){
	if(s->top < 49){
		(s->top)++;
		s->elements[s->top] = e;
	}
}

float pop(Pila *s, float *e){
	if(s->top >= 0){
		*e = s->elements[s->top];
		(s->top)--;
	}
}
	

int main()
{
	Pila unaPila;
	initialize(&unaPila);
	
	if(empty(&unaPila))
		cout << "Esta vacia" << endl;
	
	float x = 5.6;
	push(&unaPila, x);
	
	if(empty(&unaPila))
		cout << "Esta vacia" << endl;
	
	float y = 0;
	pop(&unaPila, &y);
	cout << "y: " << y << endl;
	
	if(empty(&unaPila))
		cout << "Esta vacia" << endl;
	
	push(&unaPila, 0.1);
	push(&unaPila, 10);
	push(&unaPila, 9.5);
	
	while(!empty(&unaPila)){
	 pop(&unaPila, &y);
		cout << "y: " << y << endl;
	}
}
	
