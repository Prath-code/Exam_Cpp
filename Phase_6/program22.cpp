#include <iostream>
#include <string>
using namespace std;

class Hotel
{
private:
    int hotel_id;
    string hotel_name;
    string hotel_type;
    int hotel_staff_size;
    int hotel_room_size;
    int hotel_establish_year;
    string hotel_country;
    string hotel_rating_type;
    string hotel_website;

public:
    void setHotelId(int hotel_id)
    {
        this->hotel_id = hotel_id;
    }
    void setHotelName(const string &hotel_name)
    {
        this->hotel_name = hotel_name;
    }
    void setHotelType(const string &hotel_type)
    {
        this->hotel_type = hotel_type;
    }
    void setHotelStaffSize(int hotel_staff_size)
    {
        this->hotel_staff_size = hotel_staff_size;
    }
    void setHotelRoomSize(int hotel_room_size)
    {
        this->hotel_room_size = hotel_room_size;
    }
    void setHotelEstablishYear(int hotel_establish_year)
    {
        this->hotel_establish_year = hotel_establish_year;
    }
    void setHotelCountry(const string &hotel_country)
    {
        this->hotel_country = hotel_country;
    }
    void setHotelRatingType(const string &hotel_rating_type)
    {
        this->hotel_rating_type = hotel_rating_type;
    }
    void setHotelWebsite(const string &hotel_website)
    {
        this->hotel_website = hotel_website;
    }

    int getHotelId() const { return hotel_id; }
    string getHotelName() const { return hotel_name; }
    string getHotelType() const { return hotel_type; }
    int getHotelStaffSize() const { return hotel_staff_size; }
    int getHotelRoomSize() const { return hotel_room_size; }
    int getHotelEstablishYear() const { return hotel_establish_year; }
    string getHotelCountry() const { return hotel_country; }
    string getHotelRatingType() const { return hotel_rating_type; }
    string getHotelWebsite() const { return hotel_website; }

    void display() const
    {
        cout << "Hotel ID: " << hotel_id << endl;
        cout << "Hotel Name: " << hotel_name << endl;
        cout << "Hotel Type: " << hotel_type << endl;
        cout << "Staff Size: " << hotel_staff_size << endl;
        cout << "Room Size: " << hotel_room_size << endl;
        cout << "Establish Year: " << hotel_establish_year << endl;
        cout << "Country: " << hotel_country << endl;
        cout << "Rating Type: " << hotel_rating_type << endl;
        cout << "Website: " << hotel_website << endl;
    }
};

int main()
{
    Hotel h;
    h.setHotelId(101);
    h.setHotelName("Grand Palace");
    h.setHotelType("Luxury");
    h.setHotelStaffSize(200);
    h.setHotelRoomSize(150);
    h.setHotelEstablishYear(1995);
    h.setHotelCountry("France");
    h.setHotelRatingType("5-Star");
    h.setHotelWebsite("www.grandpalace.com");

    h.display();

    return 0;
}