#include <iostream>

#include <iostream>


class MozeNauczac {
public:
    MozeNauczac() {};
    void print_mn()
    {
        std::cout << "I can teach!" << std::endl;
    }
};
class MozeWykBadania {
public:
    MozeWykBadania() {};
    void print_mwb()
    {
        std::cout << "I can do the research!" << std::endl;
    }
};

class TOsoba {
public:
    TOsoba() {};
    void print_osoba()
    {
        std::cout << "I am a person!" << std::endl;
    }
};

class MozeBycStudentem {
public:
    MozeBycStudentem() {};
    void print_mbs()
    {
        std::cout << "I can be a student!" << std::endl;
    }
};

class TNauczyciel : virtual public MozeNauczac, virtual public TOsoba {
public:
    TNauczyciel()
    {
        std::cout << "Created a student teacher" << std::endl;
    }
};

class TAsystentBadan : virtual public MozeWykBadania, virtual public TOsoba {
public:
    TAsystentBadan()
    {
        std::cout << "Created a research assistent" << std::endl;
    }
};

class TStudent : virtual public TOsoba, virtual public MozeBycStudentem {
public:
    TStudent()
    {
        std::cout << "Created a student" << std::endl;
    }
};

class TDoktorant : public TStudent {
public:
    TDoktorant()
    {
        std::cout << "Created PhD student" << std::endl;
    }
};

class TDoktorantBadacz : public TAsystentBadan, public TDoktorant {
public:
    TDoktorantBadacz()
    {
        std::cout << "Created doctoral researcher" << std::endl;
    }
};

class TDoktorantNaucz : virtual public MozeNauczac, public TDoktorant {
public:
    TDoktorantNaucz()
    {
        std::cout << "Created doctoral student teacher" << std::endl;
    }
};



int main()
{
    std::cout << "\tTAsystentBadan:" << std::endl;
    TAsystentBadan tas;
    tas.print_osoba();
    tas.print_mwb();

    std::cout << "\n\tTNauczyciel:" << std::endl;
    TNauczyciel tn;
    tn.print_osoba();
    tn.print_mn();

    std::cout << "\n\tTStudent:" << std::endl;
    TStudent ts;
    ts.print_osoba();
    ts.print_mbs();

    std::cout << "\n\tTDoktorant:" << std::endl;
    TDoktorant td;
    td.print_osoba();
    td.print_mbs();

    std::cout << "\n\tTDoktorantNaucz:" << std::endl;
    TDoktorantNaucz tdn;
    tdn.print_osoba();
    tdn.print_mbs();
    tdn.print_mn();

    std::cout << "\n\tTDoktorantBadacz:" << std::endl;
    TDoktorantBadacz tdb;
    tdb.print_osoba();
    tdb.print_mbs();
    tdb.print_mwb();
}