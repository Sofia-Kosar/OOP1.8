#pragma once
#include <iostream>
#include <cmath>

class Payment {
public:
    class Money {
    private:
        long UAH, UAH2, lungs, multiplicationn;
        unsigned char kopec, kopec1, lungs1, multiplicationn1;

    public:
        Money(); // default constructor
        Money(long uah, long uah2, long l, long mult, unsigned char k, unsigned char k1, unsigned char l1, unsigned char mult1); // parameterized constructor

        long GetUAH() const;
        long GetUAH2() const;
        long Getlungs() const;
        long Getmultiplicationn() const;
        unsigned char Getkopec() const;
        unsigned char Getkopec1() const;
        unsigned char Getlungs1() const;
        unsigned char Getmultiplicationn1() const;

        void SetUAH(long value);
        void SetUAH2(long value);
        void Setlungs(long value);
        void Setmultiplicationn(long value);
        void Setkopec(unsigned char value);
        void Setkopec1(unsigned char value);
        void Setlungs1(unsigned char value);
        void Setmultiplicationn1(unsigned char value);
        void Init(long, long, long, long);
        void Init1(unsigned char, unsigned char, unsigned char, unsigned char);
        void Read();
        void Display();
        long addition();
        long subtraction();
        long divisionofsums();
        long lungss();
        long multiplication();
        double addition1();
        double subtraction1();
        double divisionofsums3();
        double lungss3();
        double multiplication3();
        void Comparison();
    };

    double rate, experience, ³nterest, spent, income;
    std::string surname, name, middlename;
    Money money; // Embedded Money object


    Payment();

    double Getrate() const;
    double Getexperience() const;
    double Get³nterest() const;
    double Getspent() const;
    double Getincome() const;
    std::string Getsurname() const;
    std::string Getname() const;
    std::string Getmiddlename() const;

    void Setrate(double value);
    void Setexperience(double value);
    void Set³nterest(double value);
    void Setspent(double value);
    void Setincome(double value);
    void Setsurname(const std::string& value);
    void Setname(const std::string& value);
    void Setmiddlename(const std::string& value);
    void Init(double, double, double, double, double);
    void Read();
    void Display();
    double accrued();
    double ³nterestt();
    double incomee();
    double salary();
};

