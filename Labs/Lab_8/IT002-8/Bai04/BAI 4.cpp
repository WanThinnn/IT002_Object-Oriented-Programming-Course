//
//  BAI 4.cpp
//  IT002-8
//
//  Created by Thinnn on 13/06/2023.
//

#include "BAI 4.hpp"

int main()
{
    List L;
    ifstream fi;
    ofstream fo;
    fi.open("XYZ.INP");
    fo.open("XYZ.OUT");
    L.NhapDS(fi);
    L.XuatDS(fo);
    fi.close();
    fo.close();
    return 0;
}
