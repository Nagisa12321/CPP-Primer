int main() {
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    
    // (a) -> d = 3.1415926
    r2 = 3.1415926;
    // (b) -> d = i;
    r2 = r1;
    // (c) -> i = d; 
    i = r2;
    // (d) -> i = d; 
    r1 = d;
}