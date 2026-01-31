#include <iostream>
using namespace std;

int main() {
    char name;
    
    while (true) { 
        cout << "\nEnter the first letter of your name to know your personality (Press 0 to exit): ";
        cin >> name;
        
        if (name == '0') {  
            cout << "Exiting the program. Goodbye!\n";
            break;
        }

        if (name == 'A' || name == 'a') {
            cout << "A walay itne kallay hain ke agar black suit pehan ly to aysay lagta hai jaisy nangy ghooom rhy hoo! \n";
        } 
        else if (name == 'B' || name == 'b') {
            cout << "B walay dil ke bohot ache hote hain, bas mood swings ka control nahi hota! Kabhi pyare, kabhi full dushman mode! \n";
        } 
        else if (name == 'C' || name == 'c') {
            cout << "C walay bohot creative hote hain, par kabhi kabhi aesi cheezein create kar dete hain ke samajh nahi aata royein ya hasain! \n";
        } 
        else if (name == 'D' || name == 'd') {
            cout << "D walay smart hote hain, lekin sirf tab jab mobile haath mai ho! Baqi bina Google ke toh bas... Allah ka naam le kar guess maarte hain! \n";
        }
        else if (name == 'E' || name == 'e') {
            cout << "E walay bohot intelligent hote hain! Matlab dosto mai best advice dete hain, par khud ki life mai mashwara lena bhool jatay hain! \n";
        }
        else if (name == 'F' || name == 'f') {
            cout << "F walay full friendly hote hain, lekin chhoti chhoti baaton pe full emotional bhi ho jatay hain! Matlab ek chhoti si baat aur mood off! \n";
        }
        else if (name == 'G' || name == 'g') {
            cout << "G walay apni duniya mai mast hote hain! Matlab koi negative energy affect hi nahi karti! Chill mode always ON! \n";
        }
        else if (name == 'H' || name == 'h') {
            cout << "H walay bohot helpful hote hain, matlab doston ki problems apni problems samajh ke solve karte hain!\n";
        }
        else if (name == 'I' || name == 'i') {
            cout << "I walay itne intelligent hote hain ke har baat pe ek logic dhoondtay hain! Matlab bina proof koi baat nahi mante! \n";
        }
        else if (name == 'J' || name == 'j') {
            cout << "J walay jolly nature ke hote hain! Matlab har waqt maze mai, tension door! Life unke liye ek comedy show hoti hai! \n";
        }
        else if (name == 'K' || name == 'k') {
            cout << "K walo ki life ka ek rule hai... agar jag raha hoon, to neend ki planning zaroor kar raha hoon! \n";
        }
        else if (name == 'L' || name == 'l') {
            cout << "L walay loyal hote hain, par kisi ne dhoka diya toh full revenge mode ON! Matlab shant tab tak jab tak koi panga na le! \n";
        }
        else if (name == 'M' || name == 'm') {
            cout <<"M walay duniya ke asli ronday hote hain! Bas koi halki si baat bhi kar lo, aur inka rona shuru! \n";
        } 
        else if (name == 'N' || name == 'n') {
            cout << "N walay har baat pe larrne ke liye ready rehte hain, chahe baat ho ya na ho! \n";
        } 
        else if (name == 'O' || name == 'o') {
            cout << "O walay bohot open-minded hote hain! Matlab har cheez logically sochte hain, emotions kam aur dimaag zyada! \n";
        }
        else if (name == 'P' || name == 'p') {
            cout << "P walay positive vibes wale bande hote hain! Matlab dukh mai bhi haste rehte hain, full motivation mode ON! \n";
        }
        else if (name == 'Q' || name == 'q') {
            cout << "Q walay bohot questioning nature wale hote hain! Matlab har baat pe kyun? kaise? kab? kar ke investigation mode ON! \n";
        }
        else if (name == 'R' || name == 'r') {
            cout << "R walay emotional plus cool hote hain! Matlab har baat pe cool dikhte hain, par andar se full sensitive! \n";
        }
        else if (name == 'S' || name == 's') {
            cout << "S walay bohot pyaray, izzat walay aur family-oriented hote hain! \n";
        }
        else if (name == 'T' || name == 't') {
            cout << "T walay sirf do cheezon mein expert hote hain: Khana aur sochna ke agla khana kab aaye ga! \n";
        }
        else if (name == 'U' || name == 'u') {
            cout << "U walay naturally smart, handsome aur full loyalty wale hote hain! Matlab jo bhi dost ya rishta nibhate hain, akhir tak saath nibhatay hain! \n";
        }
        else if (name == 'V' || name == 'v') {
            cout << "V walay bohot versatile hote hain! Matlab har kaam mai expert, ekdum all-rounder personality! \n";
        }
        else if (name == 'W' || name == 'w') {
            cout << "W walay full wild energy wale log hote hain! Matlab zyada waqt tak aik jagah nahi reh sakte, full hyper mode! \n";
        }
        else if (name == 'X' || name == 'x') {
            cout << "X walay full mystery log hote hain! Matlab ye khud bhi nahi samajhte ke ye actually hain kya! \n";
        }
        else if (name == 'Y' || name == 'y') {
            cout << "Y walay full youth energy wale hote hain! Matlab har kaam mai zabardast enthusiasm! \n";
        }
        else if (name == 'Z' || name == 'z') {
            cout << "Z walay full attitude aur swag wale hote hain! Matlab main hu don wali vibe hamesha hoti hai! \n";
        }
        else {
            cout << "Bhai tera naam itna alag hai ke Google bhi soch raha hai bhai tu kon hai? \n";
        }
    }

    return 0;
}

