long long taumBday(int b, int w, int bc, int wc, int z) {
    long long bl = b, wl = w, bcl = bc, wcl = wc, zl = z;
    long long wcs = ((bl+wl)*bcl + zl*wl);
    long long bcs = ((bl+wl)*wcl + zl*bl);
    long long tots = (bl*bcl + wl*wcl);
    if(tots > wcs && bcs > wcs) return wcs;
    else if(tots > bcs && wcs > bcs) return bcs;
    else return tots; 
}

