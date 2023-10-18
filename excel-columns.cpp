class Solution {
/*
    26 = index_of_Z + 1
    28 = AB = (index_of_A + 1) * 26 + index_of_B + 1
    701 = ZY = (index_of_Z + 1) * 26 + index_of_Y + 1 =>

    =>  index_of_Y = (701 - 1) mod 26,
        index_of_Z = ((701 - 1) / 26 - 1) mod 26
*/
public:
    string convertToTitle(int columnNumber) {
        string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        const int lenOfAlphabet{26};
        string result;
        while(columnNumber != 0){
            columnNumber -= 1;
            int indexInAlphabet = (columnNumber % lenOfAlphabet);
            result = alphabet[indexInAlphabet] + result;
            columnNumber = columnNumber / lenOfAlphabet;
        }

        return result;
    }
};
