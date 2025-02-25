int main()
{
    uint n;
    scanf("%d", &n);
 
    uint cont[32] = {0};
 
    for (uint i = 0; i < n; i++) {
 
        uint buf;
        scanf("%d", &buf);
 
        uint mask = 1;
 
        for (uint j = 0; j < 32; j++) {
 
            if (mask & buf) {
 
                cont[j]++;
            }
 
            mask = mask << 1;
        }
    }
 
    for (uint i = 0; i < n; i++) {
 
        uint buf = 0;
        uint bit = 1;
 
        for (uint j = 0; j < 32; j++) {
 
            if (cont[j] > 0) {
 
                cont[j]--;
                buf = buf | bit;
            }
 
            bit = bit << 1;
        }
 
        printf("%d ", buf);
    }
 
	return 0;