#include "atom.h"

Atom::Atom (string s) : _symbol(s) {}

string Atom::symbol() const {
    return _symbol;
}

string Atom::value() const {
    return _symbol;
}

bool Atom::match(Term &term) {
    return symbol() == term.symbol();
}