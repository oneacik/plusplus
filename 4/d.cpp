int** createTable(int w, int h) {
	int** array = new int*[w];
	for (int i = 0; i < w; i++)
		array[i] = new int[h];
	return array;
}
void main() {
	int w = 10, h = 10;
	int** array = createTable(w, h);
	for(int x=0;x<w;x++) {
		for (int y = 10; y < h; y++)
			array[x][y] = x + y;
	}
}