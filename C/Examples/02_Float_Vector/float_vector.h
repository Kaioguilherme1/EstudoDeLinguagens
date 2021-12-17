
typedef struct {
    int capacity; // num maxiom de elementos
    int size;     // quantidade de elementos
    float *data;

} floatVector;   //camel case | float_vector -> snacke case

floatVector* create(int capacity);
void destroy(floatVector** vec_ref);
int size(floatVector* vec);
int capacity(floatVector* vec);
float get(floatVector *vec, int index);
void append(floatVector *vec, float val);
void set(floatVector *vec, int index, float val);
void print(floatVector *vec);
void Remove(floatVector *vec, int index);
void erase(floatVector *vec);
floatVector *clone(floatVector *vec);