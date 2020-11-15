// https://calendar.engineering.queensu.ca/content.php?catoid=9&navoid=228 

bool Course::ListACheck() { 

    string A = this->code.substr(0, 4); 

    string B = this->code.substr(5, 3); 

    if ((A == "ANSH") && ((B = "101") || (B = "102"))) // Anishinaabe

        return true; 

    if ((A == "APSC") && ((B == "223"))) // Engineering and applied science

        return true; 

    if ((A == "CHEE") && ((B == "302"))) // Engineering and applied science

        return true;

    if ((A == "MECH") && ((B == "333"))) // Engineering and applied science

        return true;
    
    if ((A == "ARAB") && ((B = "100") || (B = "200"))) // Arab

        return true; 

    if ((A == "BIOL") && ((B == "111"))) // Biology

        return true; 

    if ((A == "CHEM") && ((B == "302"))) // Chemical engineering

        return true; 
    
    if ((A == "CHIN") && ((B == "100"))) // Chinese

        return true; 

    // Commerce
    if ((A == "COMM") && ((B == "200") || (B == "201") || (B == "211") || (B == "212") || (B == "221") || (B == "226") || (B == "231") || (B == "244") || (B == "251") || (B == "290") || (B == "303") || (B == "305") || (B == "308") || (B == "310") || (B == "311") || (B == "312") || (B == "313") || (B == "322") || (B == "323") || (B == "325") || (B == "326") || (B == "328") || (B == "329") || (B == "351") || (B == "353") || (B == "357") || (B == "375") || (B == "381") || (B == "382") || (B == "387") || (B == "408") || (B == "496") || (B == "409")))) 

        return true; 

    if ((A == "DEVS") && ((B == "333"))) // Developmental studies

        return true; 

    if ((A == "DRAM") && ((B == "239") || (B == "241"))) // Drama

        return true; 

    // Employment relations
    if ((A == "EMPR") && ((B == "100") || (B == "200") || (B == "210") || (B == "220") || (B == "230") || (B == "240") || (B == "250") || (B == "320") || (B == "330") || (B == "335") || (B == "370"))) 

        return true; 

    if ((A == "ENSC") && ((B == "103") || (B == "200") || (B == "201") || (B == "203") || (B == "301") || (B == "320") || (B == "390")))

        return true; 

    // Fine art
    if ((A == "ARTF") && ((B == "100") || (B == "101") || (B == "106") || (B == "125") || (B == "127") || (B == "260") || (B == "275") || (B == "102") || (B == "128") || (B == "227"))) 

        return true; 

    // French
    if ((A == "FREN") && ((B == "106") || (B == "107") || (B == "111") || (B == "112") || (B == "118") || (B == "150") || (B == "219") || (B == "225"))) 

        return true; 

    // French studies
    if ((A == "FRST") && ((B == "125")))

        return true; 

    // Geography
    if ((A == "GPHY") && ((B == "101") || (B == "210") || (B == "314") || (B == "319"))) 

        return true; 

    // German
    if ((A == "GRMN") && ((B == "101") || (B == "102") || (B =="201") || (B =="202") || (B =="203")))

        return true; 

    // Greek
    if ((A == "GNDS") && ((B == "112")))

        return true; 

    // Hebrew
    if ((A == "HEBR") && ((B == "190") || (B == "192") || (B == "193") || (B == "294") || (B == "295") || (B == "301"))) 

        return true; 

    // History
    if ((A == "HIST") && ((B == "257")))

        return true; 

    // Inuktitut
    if ((A == "INUK") && ((B == "Lel")))

        return true; 

    // Italian
    if ((A == "ITLN") && ((B == "111") || (B == "112") || (B == "204")))  

        return true; 

    // Innovation and entrepreneurship
    if ((A == "ENIN") && ((B == "200") || (B == "204") || (B == "207") || (B == "205"))) 

        return true; 

    // Japanese
    if ((A == "JAPN") && ((B == "100") || (B == "200")))

        return true; 

    if ((A == "LANG") && ((B == "200")))

        return true; 

    // Language, lit and cultures
    if (A == "LLCU" && ((B == "101") || (B == "102")))

        return true; 

    // Latin
    if ((A == "LATN") && ((B == "110")))

    return true; 

    // Law
    if ((A == "LAW") && ((B == "201") || (B == "202") || (B == "203") || (B == "204") || (B == "205") || (B == "206") || (B == "207"))) 

        return true; 

    // Liguisitics
    if (A == "LING")

        return true; 

    // Mohawk
    if ((A == "MOHK") && ((B == "101") || (B == "102") || (B == "201") || (B == "202")))

        return true; 

    // Music
    if ((A == "MUSC") && ((B == "100") || (B == "156") || (B == "104") || (B == "112") || (B == "114") || (B == "115") || (B == "121") || (B == "171") || (B == "152") || (B == "180") || (B == "185") || (B == "187") || (B == "188") || (B == "189") || (B == "191") || (B == "221") || (B == "224") || (B == "227") || (B == "229") || (B == "280") || (B == "281") || (B == "283") || (B == "285") || (B == "292")))

    // Music theatre
    if ((A == "LAW-") & ((B == "232") || (B == "240") || (B == "340")))

        return true; 

    // Portuguese
    if (A == "PORT" && ((B == "103") || (B == "104")))

        return true; 

    // Sociology
    if ((A == "SOCY") && ((B == "284") || (B == "363")))

        return true; 

    // Spanish
    if ((A == "SPAN") && ((B == "304") || (B == "111") || (B == "112") || (B == "204") || (B == "205") || (B == "206") || (B == "301") || (B == "303") || (B == "303") || (B == "401") || (B == "402")))

        return true; 

    // Urban planning
    if ((A == "SURP") && ((B == "853")))

        return true; 

    return false; 
} 