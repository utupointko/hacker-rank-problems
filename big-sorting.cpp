vector<string> bigSorting(vector<string> unsorted)
{
    // default quickSort by first element of string
    sort(unsorted.begin(), unsorted.end());
    // default mergeSort by length of the string preserving relative order
    stable_sort(unsorted.begin(), unsorted.end(), [](string i, string j) -> bool {
        return i.size() < j.size();
    });
    return unsorted;
}
