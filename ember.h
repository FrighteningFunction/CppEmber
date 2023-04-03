#ifndef CPPEMBER_EMBER_H
#define CPPEMBER_EMBER_H

class Ember{
protected:
    char* nev;
    int szulEv;
public:

/// Ez az alapértelmezett konstruktor is
/// @param n  - név (alapértelmezése a saját Neptun kódja)
/// @param ev - születési év (alapértelmezésben a saját születései éve)
    Ember(const char* n="VN450W", int ev=2003);

/// Másoló konstruktor
    Ember(const Ember& e);

/// Értékadó operátor
    Ember& operator=(const Ember& e);

/// Név lekérdezése
    const char* getNev() const;

/// Adott évben betöltött kor lekérdezése
/// @param  ev - adott év, amelyikben a betöltött életkort vizsgáljuk
/// Nem vizsgálja, hogy megszületett-e
    virtual int getKor(int ev) const;

/// Foglalkozás lekérdezése
    virtual const char* foglalkozas() const;

/// Destruktor
    virtual ~Ember();
};



#endif //CPPEMBER_EMBER_H
