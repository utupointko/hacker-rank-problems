int designerPdfViewer(vector<int> h, string word) {
    string abc = "abcdefghijklmnopqrstuvwxyz";
    int height = 0;
    for(char c : word){
        int temp = h[abc.find(c)];
        height = (height < temp) ? temp : height;
    }
    return height * word.size();
}
