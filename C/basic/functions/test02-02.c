
void bar(int j, int k);
void demo_stackframe(int a, int b, int c);

int main(){
    int a1 = 1;
    int b1 = 2;
    int c1 = 3;
    demo_stackframe(a1, b1, c1);
    return 0;
}

void bar(int j, int k){
    int sum = j + k;
}

void demo_stackframe(int a, int b, int c){
    int x=c;
    char buffer[64];
    int y=b;
    int z=10;
    buffer[0] = 'A';
    //body of function not terribly relevant other than
    bar(z, y);
}