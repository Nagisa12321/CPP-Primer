int main() {
    int i = 0;
    // top
    const int v2 = 0;
    
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;

    const int *p2 = &v2/* low */, *const p3 = &i/* low and top */, &r2 = v2/* low */;
}