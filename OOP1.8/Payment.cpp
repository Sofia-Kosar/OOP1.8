#include "Payment.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <string>
#include <sstream>

using namespace std;

Payment::Money::Money() : UAH(0), UAH2(0), lungs(0), multiplicationn(0), kopec(0), kopec1(0), lungs1(0), multiplicationn1(0) {}

Payment::Money::Money(long uah, long uah2, long l, long mult, unsigned char k, unsigned char k1, unsigned char l1, unsigned char mult1) :
    UAH(uah), UAH2(uah2), lungs(l), multiplicationn(mult), kopec(k), kopec1(k1), lungs1(l1), multiplicationn1(mult1) {}

long Payment::Money::GetUAH() const {
    return UAH;
}

long Payment::Money::GetUAH2() const {
    return UAH2;
}

long Payment::Money::Getlungs() const {
    return lungs;
}

long Payment::Money::Getmultiplicationn() const {
    return multiplicationn;
}

unsigned char Payment::Money::Getkopec() const {
    return kopec;
}

unsigned char Payment::Money::Getkopec1() const {
    return kopec1;
}

unsigned char Payment::Money::Getlungs1() const {
    return lungs1;
}

unsigned char Payment::Money::Getmultiplicationn1() const {
    return multiplicationn1;
}

void Payment::Money::SetUAH(long value) {
    UAH = value;
}

void Payment::Money::SetUAH2(long value) {
    UAH2 = value;
}

void Payment::Money::Setlungs(long value) {
    lungs = value;
}

void Payment::Money::Setmultiplicationn(long value) {
    multiplicationn = value;
}

void Payment::Money::Setkopec(unsigned char value) {
    kopec = value;
}

void Payment::Money::Setkopec1(unsigned char value) {
    kopec1 = value;
}

void Payment::Money::Setlungs1(unsigned char value) {
    lungs1 = value;
}

void Payment::Money::Setmultiplicationn1(unsigned char value) {
    multiplicationn1 = value;
}

void Payment::Money::Init(long x, long y, long m, long k)
{
    UAH = x;
    UAH2 = y;
    lungs = m;
    multiplicationn = k;
}

void Payment::Money::Init1(unsigned char a, unsigned char b, unsigned char c, unsigned char d)
{
    kopec = a;
    kopec1 = b;
    lungs1 = c;
    multiplicationn1 = d;
}

void Payment::Money::Read()
{
    long x, y, m, k;
    unsigned char a, b, c, d;
    cout << " Гривні: " << endl;
    cout << " Гривні перша сума більша = "; cin >> x;
    cout << " Гривні друга сума менша = "; cin >> y;
    cout << " Дробове число гривнів = "; cin >> m;
    cout << " Число для множення гривнів = "; cin >> k;
    cout << " Копійки:" << endl;
    cout << " Копійки перша сума більша = "; cin >> a;
    cout << " Копійки друга сума менша = "; cin >> b;
    cout << " Дробове число копійки = "; cin >> c;
    cout << " Число для множення копійки = "; cin >> d;

    Init(x, y, m, k);
    Init1(a, b, c, d);
}

long Payment::Money::addition()
{
    return UAH + UAH2;
}

long Payment::Money::subtraction()
{
    return UAH - UAH2;
}

long Payment::Money::divisionofsums()
{
    return addition() / subtraction();
}

long Payment::Money::lungss()
{
    return sqrt(lungs) / divisionofsums();
}

long Payment::Money::multiplication()
{
    return sqrt(lungs) * multiplicationn;
}

void Payment::Money::Display()
{
    cout << endl;
    cout << " Додавання гривнів = " << addition() << endl;
    cout << " Віднімання гривнів = " << subtraction() << endl;
    cout << " Ділення сум гривнів = " << divisionofsums() << endl;
    cout << " Ділення сум на дробове число для гривнів = " << lungss() << endl;
    cout << " Mноження на дробове число для гривнів = " << multiplication() << endl;
    cout << " Додавання копійок = " << addition1() << endl;
    cout << " Віднімання копійок = " << subtraction1() << endl;
    cout << " Ділення сум копійок = " << divisionofsums3() << endl;
    cout << " Ділення сум на дробове число для копійок = " << lungss3() << endl;
    cout << " Mноження на дробове число для копійок = " << multiplication3() << endl;
}

double Payment::Money::addition1()
{
    return (kopec * 0.01) + (kopec1 * 0.01);
}

double Payment::Money::subtraction1()
{
    return (kopec * 0.01) - (kopec1 * 0.01);
}

double Payment::Money::divisionofsums3()
{
    return addition1() / subtraction1();
}

double Payment::Money::lungss3()
{
    return sqrt((lungs1) * 0.01) / divisionofsums3();
}

double Payment::Money::multiplication3()
{
    return sqrt((lungs1) * 0.01) - (multiplicationn1 * 0.01);
}

void Payment::Money::Comparison()
{
    if (multiplication() == multiplication3())
        cout << multiplication() << "  дорівнює  " << multiplication3() << " \n ";
    if (multiplication() > multiplication3())
        cout << multiplication() << "  більше  " << multiplication3() << " \n ";
    if (multiplication() < multiplication3())
        cout << multiplication() << "  менше   " << multiplication3() << " \n ";
}

Payment::Payment() {}

double Payment::Getrate() const {
    return rate;
}

double Payment::Getexperience() const {
    return experience;
}

double Payment::Getіnterest() const {
    return іnterest;
}

double Payment::Getspent() const {
    return spent;
}

double Payment::Getincome() const {
    return income;
}
std::string Payment::Getsurname() const {
    return surname;
}

std::string Payment::Getname() const {
    return name;
}

std::string Payment::Getmiddlename() const {
    return middlename;
}

void Payment::Setsurname(const std::string& surname) {
    this->surname = surname;
}

void Payment::Setname(const std::string& name) {
    this->name = name;
}

void Payment::Setmiddlename(const std::string& middlename) {
    this->middlename = middlename;
}

void Payment::Setrate(double value) {
    rate = value;
}

void Payment::Setexperience(double value) {
    experience = value;
}

void Payment::Setіnterest(double value) {
    іnterest = value;
}

void Payment::Setspent(double value) {
    spent = value;
}

void Payment::Setincome(double value) {
    income = value;
}


void Payment::Init(double x, double y, double z, double g, double l)
{
    rate = x;
    experience = y;
    іnterest = z;
    spent = g;
    income = l;
}
void Payment::Read()
{
    double x, y, z, g, l;
    cout << " Прізвище = "; cin >> surname;
    cout << " Ім’я = "; cin >> name;
    cout << " По батькові = "; cin >> middlename;
    cout << " Ставка = "; cin >> x;
    cout << " Рік поступлення на роботу = "; cin >> l;
    cout << " Відсоток надбавки = "; cin >> z;
    cout << " Кількість відпрацьованих днів в місяці = "; cin >> g;
    cout << " Кількість робочих днів в місяці = "; cin >> y;
    Init(x, y, z, g, l);
}
void Payment::Display()
{
    cout << endl;
    cout << " Прізвище = " << surname << endl;
    cout << " Ім’я = " << name << endl;
    cout << " По батькові = " << middlename << endl;
    cout << " Кількість відпрацьованих днів в місяці = " << spent << " днів " << endl;
    cout << " Кількість робочих днів в місяці = " << experience << " днів " << endl;
    cout << " Прибутковий податок і пенсійний фонд = 14 % " << endl;
    cout << " Обчислення нарахованої суми = " << іnterestt() << endl;
    cout << " Обчислення утриманої суми = " << accrued() << endl;
    cout << " Обчислення суми, що видається на руки = " << salary() << endl;
    cout << " Стаж = " << incomee() << " років " << endl;
}
double Payment::іnterestt()
{
    return (rate / 100 * іnterest) + rate;
}
double Payment::accrued()
{
    return ((іnterestt()) / 100 * 14);
}
double Payment::salary()
{
    return іnterestt() - accrued();
}
double Payment::incomee()
{
    return 2025 - income;
}