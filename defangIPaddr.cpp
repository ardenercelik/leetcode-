/*
 * Addresi silerek newAddress değişkenine yazıyor.
 *
 * Given a valid (IPv4) IP address, return a defanged version of that IP address.
 * A defanged IP address replaces every period "." with "[.]".
 *
 */


class Solution {
public:
    string DELIMITER = ".";
    int pos = 0;
    string defangIPaddr(string address) {
            string newAddress;
            int pos = 0;
            for ( int i = 0; i < 3; i++){
                pos = address.find(DELIMITER);
                newAddress += address.substr(0, pos) + "[.]";
                address = address.erase(0 , pos + 1);
            }            
            newAddress += address.substr(0, address.size());
            return newAddress;
    }

};
