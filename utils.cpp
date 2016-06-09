//
// Created by veter on 09.06.16.
//

#include "utils.h"

    std::vector<std::vector<int64> > Utils::cast2dList(const std::vector<std::vector<int64_t> > &vec) {

       int size = vec.size();
       std::vector<long long int> v2 (size, 0);
       std::vector<std::vector<long long int>> tempVec(size, v2);

       for(int i=0; i< tempVec.size(); i++) {
           for (int j=0;j<tempVec[i].size(); j++){

               tempVec[i][j] = (long long int) vec[i][j];
               // std::cout << tempVec[i][j] << " ";
           }
           // std::cout << std::endl;
       }

       return tempVec;

}

    std::vector<int64> Utils::castList(const std::vector<int64_t> &list) {

       int listSize = list.size();

       std::vector<long long int> newList (listSize, 0);

       for(int i=0; i< listSize; i++) {

           newList[i] = (long long int)list[i];
       }


   }

std::vector<std::pair<int64, int64>> Utils::castToListOfPairs(const std::vector<std::vector<int64_t> > &timeWindows) {

    int size = timeWindows.size();

    std::vector<std::pair<int64, int64>> tempVec(size);



    for(int i=0; i < timeWindows.size(); i++) {


            std::pair<int64, int64> p;
            p.first = timeWindows[i].at(0);
            p.second = timeWindows[i].at(1);



            tempVec.push_back(p);
            // std::cout << tempVec[i][j] << " ";

        // std::cout << std::endl;
    }




    return tempVec;

}


