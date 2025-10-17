#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define MAX_BUSES 50
#define MAX_SEATS 60
#define MAX_BOOKINGS 1000
#define MAX_ROUTES 100
#define MAX_NAME 100
#define MAX_PHONE 15
#define MAX_EMAIL 100
#define SEAT_PRICE 500.0

typedef struct {
    int day, month, year;
} Date;

typedef struct {
    int hour, minute;
} Time;

typedef struct {
    char origin[50];
    char destination[50];
    float distance;
    int routeId;
} Route;

typedef struct {
    int busId;
    char busNumber[20];
    int routeId;
    int totalSeats;
    int availableSeats;
    int seats[MAX_SEATS];
    Date travelDate;
    Time departureTime;
    float baseFare;
    char busType[30];
    int amenities[5];
} Bus;

typedef struct {
    int bookingId;
    int busId;
    char passengerName[MAX_NAME];
    char phone[MAX_PHONE];
    char email[MAX_EMAIL];
    int seatNumber;
    float totalFare;
    Date bookingDate;
    int status;
    char paymentMethod[20];
    int loyalty_points;
} Booking;

typedef struct {
    char username[50];
    char password[50];
    int isAdmin;
} User;

Bus buses[MAX_BUSES];
Booking bookings[MAX_BOOKINGS];
Route routes[MAX_ROUTES];
int busCount = 0;
int bookingCount = 0;
int routeCount = 0;

// Function declarations
void initializeSystem();
void clearScreen();
void displayHeader(const char* title);
void displayBorder();
void displayWelcomeScreen();
int login();
void mainMenu(int isAdmin);
void adminMenu();
void userMenu();
void addBus();
void viewAllBuses();
void searchBuses();
void bookTicket();
void viewBookings();
void cancelBooking();
void modifyBooking();
void viewBusDetails();
void generateReport();
void manageSeatLayout();
void addRoute();
void viewRoutes();
void dynamicPricing(Bus* bus);
void loyaltyProgram(Booking* booking);
void multiCityBooking();
void groupBooking();
void waitlistManagement();
void refundCalculation(Booking* booking);
void saveData();
void loadData();
int validateEmail(const char* email);
int validatePhone(const char* phone);
void displaySeatMap(Bus* bus);
float calculateDynamicFare(Bus* bus, int seatNumber);
void displayAnalytics();
void seasonalDiscounts(float* fare, Date date);
void pauseScreen();

int main() {
    int isAdmin;

    initializeSystem();
    loadData();

    displayWelcomeScreen();

    isAdmin = login();

    if(isAdmin == -1) {
        displayHeader("LOGIN FAILED");
        printf("\n\t❌ Login failed! Exiting system...\n\n");
        pauseScreen();
        return 0;
    }

    mainMenu(isAdmin);
    saveData();

    displayHeader("GOODBYE");
    printf("\n\t✅ Data saved successfully!\n");
    printf("\t👋 Thank you for using SmartBus Booking Portal!\n\n");

    return 0;
}

void initializeSystem() {
    busCount = 0;
    bookingCount = 0;
    routeCount = 0;

    // Initialize default routes
    strcpy(routes[routeCount].origin, "Dhaka");
    strcpy(routes[routeCount].destination, "Chittagong");
    routes[routeCount].distance = 264.0;
    routes[routeCount].routeId = routeCount + 1;
    routeCount++;

    strcpy(routes[routeCount].origin, "Dhaka");
    strcpy(routes[routeCount].destination, "Sylhet");
    routes[routeCount].distance = 242.0;
    routes[routeCount].routeId = routeCount + 1;
    routeCount++;

    strcpy(routes[routeCount].origin, "Dhaka");
    strcpy(routes[routeCount].destination, "Rajshahi");
    routes[routeCount].distance = 256.0;
    routes[routeCount].routeId = routeCount + 1;
    routeCount++;
}

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void displayBorder() {
    printf("\t╔════════════════════════════════════════════════════════════════╗\n");
}

void displayHeader(const char* title) {
    clearScreen();
    printf("\n");
    displayBorder();
    printf("\t║              %-45s ║\n", title);
    displayBorder();
    printf("\n");
}

void displayWelcomeScreen() {
    clearScreen();
    printf("\n\n");
    printf("\t╔════════════════════════════════════════════════════════════════╗\n");
    printf("\t║                                                                ║\n");
    printf("\t║              🚌  SMARTBUS BOOKING PORTAL  🚌                   ║\n");
    printf("\t║                                                                ║\n");
    printf("\t║           Bus Ticket Management System v2.0                    ║\n");
    printf("\t║                                                                ║\n");
    printf("\t╚════════════════════════════════════════════════════════════════╝\n");
    printf("\n\t\t✨ Your Journey Begins Here ✨\n\n");
    pauseScreen();
}

void pauseScreen() {
    printf("\n\t\t Press Enter to continue...");
    getchar();
    getchar();
}

int login() {
    char username[50], password[50];
    int attempts = 3;

    while(attempts > 0) {
        displayHeader("🔐 USER LOGIN");

        printf("\t┌────────────────────────────────────────┐\n");
        printf("\t│  Demo Credentials:                     │\n");
        printf("\t│  Admin: admin / admin123               │\n");
        printf("\t│  User:  user / user123                 │\n");
        printf("\t└────────────────────────────────────────┘\n\n");

        printf("\t📧 Username: ");
        scanf("%s", username);
        printf("\t🔑 Password: ");
        scanf("%s", password);

        if(strcmp(username, "admin") == 0 && strcmp(password, "admin123") == 0) {
            printf("\n\t✅ Admin Login Successful!\n");
            printf("\t   Welcome, Administrator!\n");
            pauseScreen();
            return 1;
        } else if(strcmp(username, "user") == 0 && strcmp(password, "user123") == 0) {
            printf("\n\t✅ User Login Successful!\n");
            printf("\t   Welcome, User!\n");
            pauseScreen();
            return 0;
        }

        attempts--;
        printf("\n\t❌ Invalid credentials! %d attempt(s) remaining.\n", attempts);
        if(attempts > 0) pauseScreen();
    }

    return -1;
}

void mainMenu(int isAdmin) {
    int choice;

    while(1) {
        if(isAdmin) {
            displayHeader("🎯 ADMIN MAIN MENU");

            printf("\t┌────────── Bus Management ──────────┐\n");
            printf("\t│  1️⃣   Add New Bus                  │\n");
            printf("\t│  2️⃣   Add New Route                │\n");
            printf("\t│  3️⃣   View All Buses               │\n");
            printf("\t│  4️⃣   View All Routes              │\n");
            printf("\t│  9️⃣   View Bus Details             │\n");
            printf("\t└────────────────────────────────────┘\n\n");

            printf("\t┌────────── Booking Management ──────┐\n");
            printf("\t│  5️⃣   View All Bookings            │\n");
            printf("\t│  🔟  Book Ticket                   │\n");
            printf("\t│  1️⃣1️⃣  Cancel Booking              │\n");
            printf("\t│  1️⃣2️⃣  Modify Booking              │\n");
            printf("\t│  1️⃣3️⃣  Search Buses                │\n");
            printf("\t└────────────────────────────────────┘\n\n");

            printf("\t┌────────── Reports & Analytics ─────┐\n");
            printf("\t│  6️⃣   Generate Reports             │\n");
            printf("\t│  7️⃣   Display Analytics            │\n");
            printf("\t│  8️⃣   Manage Seat Layout           │\n");
            printf("\t└────────────────────────────────────┘\n\n");

            printf("\t┌────────── Special Features ────────┐\n");
            printf("\t│  1️⃣4️⃣  Group Booking               │\n");
            printf("\t│  1️⃣5️⃣  Multi-City Booking          │\n");
            printf("\t└────────────────────────────────────┘\n\n");

            printf("\t┌────────────────────────────────────┐\n");
            printf("\t│  0️⃣   Exit & Save                  │\n");
            printf("\t└────────────────────────────────────┘\n");
        } else {
            displayHeader("🎯 USER MAIN MENU");

            printf("\t┌────────── Quick Actions ───────────┐\n");
            printf("\t│  1️⃣   Search Buses                 │\n");
            printf("\t│  2️⃣   Book Ticket                  │\n");
            printf("\t│  3️⃣   View My Bookings             │\n");
            printf("\t│  4️⃣   Cancel Booking               │\n");
            printf("\t│  5️⃣   Modify Booking               │\n");
            printf("\t└────────────────────────────────────┘\n\n");

            printf("\t┌────────── Special Bookings ────────┐\n");
            printf("\t│  6️⃣   Group Booking                │\n");
            printf("\t│  7️⃣   Multi-City Booking           │\n");
            printf("\t└────────────────────────────────────┘\n\n");

            printf("\t┌────────── Information ─────────────┐\n");
            printf("\t│  8️⃣   View Routes                  │\n");
            printf("\t└────────────────────────────────────┘\n\n");

            printf("\t┌────────────────────────────────────┐\n");
            printf("\t│  0️⃣   Exit & Save                  │\n");
            printf("\t└────────────────────────────────────┘\n");
        }

        printf("\n\t➤ Enter your choice: ");
        if(scanf("%d", &choice) != 1) {
            while(getchar() != '\n');
            printf("\n\t❌ Invalid input! Please enter a number.\n");
            pauseScreen();
            continue;
        }

        if(isAdmin) {
            switch(choice) {
                case 1: addBus(); break;
                case 2: addRoute(); break;
                case 3: viewAllBuses(); break;
                case 4: viewRoutes(); break;
                case 5: viewBookings(); break;
                case 6: generateReport(); break;
                case 7: displayAnalytics(); break;
                case 8: manageSeatLayout(); break;
                case 9: viewBusDetails(); break;
                case 10: bookTicket(); break;
                case 11: cancelBooking(); break;
                case 12: modifyBooking(); break;
                case 13: searchBuses(); break;
                case 14: groupBooking(); break;
                case 15: multiCityBooking(); break;
                case 0: return;
                default:
                    printf("\n\t❌ Invalid choice! Please try again.\n");
                    pauseScreen();
            }
        } else {
            switch(choice) {
                case 1: searchBuses(); break;
                case 2: bookTicket(); break;
                case 3: viewBookings(); break;
                case 4: cancelBooking(); break;
                case 5: modifyBooking(); break;
                case 6: groupBooking(); break;
                case 7: multiCityBooking(); break;
                case 8: viewRoutes(); break;
                case 0: return;
                default:
                    printf("\n\t❌ Invalid choice! Please try again.\n");
                    pauseScreen();
            }
        }
    }
}

void addRoute() {
    displayHeader("➕ ADD NEW ROUTE");

    if(routeCount >= MAX_ROUTES) {
        printf("\n\t❌ Route capacity full! Cannot add more routes.\n");
        pauseScreen();
        return;
    }

    Route newRoute;
    newRoute.routeId = routeCount + 1;

    printf("\t📍 Origin City: ");
    scanf(" %[^\n]", newRoute.origin);
    printf("\t🎯 Destination City: ");
    scanf(" %[^\n]", newRoute.destination);
    printf("\t📏 Distance (km): ");
    scanf("%f", &newRoute.distance);

    routes[routeCount++] = newRoute;

    printf("\n\t✅ Route added successfully!\n");
    printf("\t📋 Route ID: %d\n", newRoute.routeId);
    printf("\t🛣️  %s → %s (%.2f km)\n", newRoute.origin, newRoute.destination, newRoute.distance);
    pauseScreen();
}

void viewRoutes() {
    displayHeader("🗺️  ALL ROUTES");

    if(routeCount == 0) {
        printf("\n\t⚠️  No routes available!\n");
        pauseScreen();
        return;
    }

    printf("\t┌────────┬──────────────────────┬──────────────────────┬──────────────┐\n");
    printf("\t│ Route  │       Origin         │     Destination      │ Distance(km) │\n");
    printf("\t├────────┼──────────────────────┼──────────────────────┼──────────────┤\n");

    for(int i = 0; i < routeCount; i++) {
        printf("\t│  %-5d │ %-20s │ %-20s │    %-9.2f │\n",
               routes[i].routeId, routes[i].origin,
               routes[i].destination, routes[i].distance);
    }

    printf("\t└────────┴──────────────────────┴──────────────────────┴──────────────┘\n");
    pauseScreen();
}

void addBus() {
    displayHeader("➕ ADD NEW BUS");

    if(busCount >= MAX_BUSES) {
        printf("\n\t❌ Bus capacity full! Cannot add more buses.\n");
        pauseScreen();
        return;
    }

    Bus newBus;
    newBus.busId = busCount + 1;

    printf("\t🚌 Bus Number: ");
    scanf("%s", newBus.busNumber);

    viewRoutes();
    printf("\n\t🔢 Select Route ID: ");
    scanf("%d", &newBus.routeId);

    // Validate route ID
    int validRoute = 0;
    for(int i = 0; i < routeCount; i++) {
        if(routes[i].routeId == newBus.routeId) {
            validRoute = 1;
            break;
        }
    }

    if(!validRoute) {
        printf("\n\t❌ Invalid Route ID!\n");
        pauseScreen();
        return;
    }

    printf("\t💺 Total Seats: ");
    scanf("%d", &newBus.totalSeats);

    if(newBus.totalSeats > MAX_SEATS || newBus.totalSeats <= 0) {
        printf("\n\t❌ Invalid seat count! Must be between 1 and %d\n", MAX_SEATS);
        pauseScreen();
        return;
    }

    newBus.availableSeats = newBus.totalSeats;

    printf("\t🎨 Bus Type (AC/Non-AC/Sleeper): ");
    scanf("%s", newBus.busType);

    printf("\t💰 Base Fare (BDT): ");
    scanf("%f", &newBus.baseFare);

    printf("\t📅 Travel Date (DD MM YYYY): ");
    scanf("%d %d %d", &newBus.travelDate.day,
          &newBus.travelDate.month, &newBus.travelDate.year);

    printf("\t🕐 Departure Time (HH MM): ");
    scanf("%d %d", &newBus.departureTime.hour, &newBus.departureTime.minute);

    printf("\n\t✨ Amenities Configuration:\n");
    printf("\t   (Enter 1 for Yes, 0 for No)\n");
    printf("\t   📶 WiFi: ");
    scanf("%d", &newBus.amenities[0]);
    printf("\t   🔌 Charging Port: ");
    scanf("%d", &newBus.amenities[1]);
    printf("\t   🎬 Entertainment: ");
    scanf("%d", &newBus.amenities[2]);
    printf("\t   🍿 Snacks: ");
    scanf("%d", &newBus.amenities[3]);
    printf("\t   🛏️  Blanket: ");
    scanf("%d", &newBus.amenities[4]);

    // Initialize all seats as available
    for(int i = 0; i < newBus.totalSeats; i++) {
        newBus.seats[i] = 0;
    }

    buses[busCount++] = newBus;

    printf("\n\t✅ Bus added successfully!\n");
    printf("\t📋 Bus ID: %d\n", newBus.busId);
    printf("\t🚌 Bus Number: %s\n", newBus.busNumber);
    pauseScreen();
}

void viewAllBuses() {
    displayHeader("🚌 ALL BUSES");

    if(busCount == 0) {
        printf("\n\t⚠️  No buses available!\n");
        pauseScreen();
        return;
    }

    printf("\t┌────────┬──────────────┬──────────┬────────┬─────────────────┬──────────┬──────────────┐\n");
    printf("\t│ Bus ID │  Bus Number  │ Route ID │ Seats  │      Type       │   Fare   │     Date     │\n");
    printf("\t├────────┼──────────────┼──────────┼────────┼─────────────────┼──────────┼──────────────┤\n");

    for(int i = 0; i < busCount; i++) {
        printf("\t│  %-5d │ %-12s │   %-6d │  %-5d │ %-15s │ %-8.2f │ %02d/%02d/%04d   │\n",
               buses[i].busId, buses[i].busNumber, buses[i].routeId,
               buses[i].availableSeats, buses[i].busType, buses[i].baseFare,
               buses[i].travelDate.day, buses[i].travelDate.month,
               buses[i].travelDate.year);
    }

    printf("\t└────────┴──────────────┴──────────┴────────┴─────────────────┴──────────┴──────────────┘\n");
    pauseScreen();
}

void displaySeatMap(Bus* bus) {
    printf("\n\t\t🚌 SEAT LAYOUT 🚌\n");
    printf("\t\t═══════════════════════════════════════════\n");
    printf("\t\t  [🚗 Driver]              [🚪 Door]\n");
    printf("\t\t───────────────────────────────────────────\n");
    printf("\t\t  ✅ = Available    ❌ = Booked\n");
    printf("\t\t───────────────────────────────────────────\n\n");

    int seatsPerRow = 4;
    for(int i = 0; i < bus->totalSeats; i += seatsPerRow) {
        printf("\t\t  ");
        for(int j = 0; j < seatsPerRow && (i + j) < bus->totalSeats; j++) {
            int seatNum = i + j + 1;
            if(bus->seats[i + j] == 1) {
                printf("[%2d-❌] ", seatNum);
            } else {
                printf("[%2d-✅] ", seatNum);
            }
            if(j == 1) printf("  ");
        }
        printf("\n");
    }
    printf("\t\t═══════════════════════════════════════════\n");
}

void searchBuses() {
    displayHeader("🔍 SEARCH BUSES");

    char origin[50], destination[50];
    int day, month, year;

    printf("\t📍 Origin: ");
    scanf(" %[^\n]", origin);
    printf("\t🎯 Destination: ");
    scanf(" %[^\n]", destination);
    printf("\t📅 Travel Date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    int found = 0;
    printf("\n\t🔎 Search Results:\n\n");
    printf("\t┌────────┬──────────────┬────────┬─────────────────┬──────────┬──────────┐\n");
    printf("\t│ Bus ID │  Bus Number  │ Seats  │      Type       │   Fare   │   Time   │\n");
    printf("\t├────────┼──────────────┼────────┼─────────────────┼──────────┼──────────┤\n");

    for(int i = 0; i < busCount; i++) {
        for(int j = 0; j < routeCount; j++) {
            if(buses[i].routeId == routes[j].routeId &&
               strcmp(routes[j].origin, origin) == 0 &&
               strcmp(routes[j].destination, destination) == 0 &&
               buses[i].travelDate.day == day &&
               buses[i].travelDate.month == month &&
               buses[i].travelDate.year == year) {

                printf("\t│  %-5d │ %-12s │  %-5d │ %-15s │ %-8.2f │ %02d:%02d    │\n",
                       buses[i].busId, buses[i].busNumber,
                       buses[i].availableSeats, buses[i].busType,
                       buses[i].baseFare, buses[i].departureTime.hour,
                       buses[i].departureTime.minute);
                found = 1;
            }
        }
    }

    if(!found) {
        printf("\t│                     No buses found for the given criteria!                     │\n");
    }

    printf("\t└────────┴──────────────┴────────┴─────────────────┴──────────┴──────────┘\n");
    pauseScreen();
}

float calculateDynamicFare(Bus* bus, int seatNumber) {
    float fare = bus->baseFare;

    // Occupancy-based pricing
    float occupancyRate = (float)(bus->totalSeats - bus->availableSeats) / bus->totalSeats;
    if(occupancyRate > 0.8) fare *= 1.25;
    else if(occupancyRate > 0.6) fare *= 1.15;
    else if(occupancyRate > 0.4) fare *= 1.08;

    // Bus type pricing
    if(strcmp(bus->busType, "AC") == 0) fare *= 1.3;
    else if(strcmp(bus->busType, "Sleeper") == 0) fare *= 1.5;

    // Amenities pricing
    for(int i = 0; i < 5; i++) {
        if(bus->amenities[i] == 1) fare += 50;
    }

    // Early bird / last minute pricing
    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    int daysUntilTravel = (bus->travelDate.year - (local->tm_year + 1900)) * 365 +
                          (bus->travelDate.month - (local->tm_mon + 1)) * 30 +
                          (bus->travelDate.day - local->tm_mday);

    if(daysUntilTravel < 2) fare *= 1.2;
    else if(daysUntilTravel > 15) fare *= 0.9;

    seasonalDiscounts(&fare, bus->travelDate);

    return fare;
}

void seasonalDiscounts(float* fare, Date date) {
    // Winter discount
    if(date.month == 12 || date.month == 1) {
        *fare *= 0.85;
    }
    // Monsoon discount
    else if(date.month >= 6 && date.month <= 8) {
        *fare *= 0.9;
    }
}

int validateEmail(const char* email) {
    int atPos = -1, dotPos = -1;
    int len = strlen(email);

    if(len < 5) return 0;

    for(int i = 0; i < len; i++) {
        if(email[i] == '@') {
            if(atPos != -1) return 0; // Multiple @ symbols
            atPos = i;
        }
        if(email[i] == '.' && atPos != -1) {
            dotPos = i;
        }
    }

    return (atPos > 0 && dotPos > atPos + 1 && dotPos < len - 1);
}

int validatePhone(const char* phone) {
    int len = strlen(phone);
    if(len < 10 || len > 15) return 0;

    for(int i = 0; i < len; i++) {
        if(!isdigit(phone[i]) && phone[i] != '+' && phone[i] != '-') {
            return 0;
        }
    }
    return 1;
}

void bookTicket() {
    displayHeader("🎫 BOOK TICKET");

    int busId, seatNumber;

    viewAllBuses();

    printf("\n\t🔢 Enter Bus ID: ");
    scanf("%d", &busId);

    int busIndex = -1;
    for(int i = 0; i < busCount; i++) {
        if(buses[i].busId == busId) {
            busIndex = i;
            break;
        }
    }

    if(busIndex == -1) {
        printf("\n\t❌ Bus not found!\n");
        pauseScreen();
        return;
    }

    if(buses[busIndex].availableSeats == 0) {
        printf("\n\t⚠️  No seats available!\n");
        printf("\t   Would you like to join waitlist? (1-Yes, 0-No): ");
        int choice;
        scanf("%d", &choice);
        if(choice == 1) waitlistManagement();
        pauseScreen();
        return;
    }

    displaySeatMap(&buses[busIndex]);

    printf("\n\t💺 Enter Seat Number: ");
    scanf("%d", &seatNumber);

    if(seatNumber < 1 || seatNumber > buses[busIndex].totalSeats) {
        printf("\n\t❌ Invalid seat number!\n");
        pauseScreen();
        return;
    }

    if(buses[busIndex].seats[seatNumber - 1] == 1) {
        printf("\n\t❌ Seat already booked!\n");
        pauseScreen();
        return;
    }

    Booking newBooking;
    newBooking.bookingId = bookingCount + 1;
    newBooking.busId = busId;
    newBooking.seatNumber = seatNumber;
    newBooking.status = 1;

    printf("\t👤 Passenger Name: ");
    scanf(" %[^\n]", newBooking.passengerName);

    do {
        printf("\t📱 Phone Number: ");
        scanf("%s", newBooking.phone);
        if(!validatePhone(newBooking.phone)) {
            printf("\t   ❌ Invalid phone number! Try again.\n");
        }
    } while(!validatePhone(newBooking.phone));

    do {
        printf("\t📧 Email: ");
        scanf("%s", newBooking.email);
        if(!validateEmail(newBooking.email)) {
            printf("\t   ❌ Invalid email! Try again.\n");
        }
    } while(!validateEmail(newBooking.email));

    newBooking.totalFare = calculateDynamicFare(&buses[busIndex], seatNumber);

    printf("\n\t💰 Total Fare: %.2f BDT\n", newBooking.totalFare);
    printf("\t💳 Payment Method (Card/Cash/Mobile): ");
    scanf("%s", newBooking.paymentMethod);

    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    newBooking.bookingDate.day = local->tm_mday;
    newBooking.bookingDate.month = local->tm_mon + 1;
    newBooking.bookingDate.year = local->tm_year + 1900;

    loyaltyProgram(&newBooking);

    buses[busIndex].seats[seatNumber - 1] = 1;
    buses[busIndex].availableSeats--;

    bookings[bookingCount++] = newBooking;

    printf("\n\t╔═══════════════════════════════════════════╗\n");
    printf("\t║     ✅ BOOKING CONFIRMATION              ║\n");
    printf("\t╠═══════════════════════════════════════════╣\n");
    printf("\t║  Booking ID: %-28d ║\n", newBooking.bookingId);
    printf("\t║  Passenger: %-29s ║\n", newBooking.passengerName);
    printf("\t║  Bus: %-36s ║\n", buses[busIndex].busNumber);
    printf("\t║  Seat: %-35d ║\n", newBooking.seatNumber);
    printf("\t║  Fare: %-31.2f BDT ║\n", newBooking.totalFare);
    printf("\t║  Loyalty Points: %-24d ║\n", newBooking.loyalty_points);
    printf("\t╚═══════════════════════════════════════════╝\n");

    printf("\n\t✉️  Confirmation email sent successfully!\n");
    pauseScreen();
}

void loyaltyProgram(Booking* booking) {
    booking->loyalty_points = (int)(booking->totalFare / 100);
}

void viewBookings() {
    displayHeader("📋 ALL BOOKINGS");

    if(bookingCount == 0) {
        printf("\n\t⚠️  No bookings found!\n");
        pauseScreen();
        return;
    }

    printf("\t┌────────────┬──────────────────────┬────────┬────────┬──────────┬────────────┐\n");
    printf("\t│ Booking ID │      Passenger       │ Bus ID │  Seat  │   Fare   │   Status   │\n");
    printf("\t├────────────┼──────────────────────┼────────┼────────┼──────────┼────────────┤\n");

    for(int i = 0; i < bookingCount; i++) {
        printf("\t│   %-8d │ %-20s │  %-5d │  %-5d │ %-8.2f │ %-10s │\n",
               bookings[i].bookingId, bookings[i].passengerName,
               bookings[i].busId, bookings[i].seatNumber,
               bookings[i].totalFare, bookings[i].status ? "Active" : "Cancelled");
    }

    printf("\t└────────────┴──────────────────────┴────────┴────────┴──────────┴────────────┘\n");
    pauseScreen();
}

void refundCalculation(Booking* booking) {
    time_t now = time(NULL);
    struct tm *local = localtime(&now);

    int busIndex = -1;
    for(int i = 0; i < busCount; i++) {
        if(buses[i].busId == booking->busId) {
            busIndex = i;
            break;
        }
    }

    if(busIndex == -1) return;

    int daysUntilTravel = (buses[busIndex].travelDate.year - (local->tm_year + 1900)) * 365 +
                          (buses[busIndex].travelDate.month - (local->tm_mon + 1)) * 30 +
                          (buses[busIndex].travelDate.day - local->tm_mday);

    float refundAmount = booking->totalFare;
    float refundPercent;

    if(daysUntilTravel < 1) {
        refundAmount *= 0.5;
        refundPercent = 50;
    } else if(daysUntilTravel < 3) {
        refundAmount *= 0.7;
        refundPercent = 70;
    } else if(daysUntilTravel < 7) {
        refundAmount *= 0.85;
        refundPercent = 85;
    } else {
        refundAmount *= 0.95;
        refundPercent = 95;
    }

    printf("\n\t💰 Refund Calculation:\n");
    printf("\t   Days until travel: %d\n", daysUntilTravel);
    printf("\t   Original fare: %.2f BDT\n", booking->totalFare);
    printf("\t   Refund percentage: %.0f%%\n", refundPercent);
    printf("\t   Refund amount: %.2f BDT\n", refundAmount);
}

void cancelBooking() {
    displayHeader("❌ CANCEL BOOKING");

    int bookingId;
    printf("\t🔢 Enter Booking ID: ");
    scanf("%d", &bookingId);

    int found = 0;
    for(int i = 0; i < bookingCount; i++) {
        if(bookings[i].bookingId == bookingId) {
            if(bookings[i].status == 0) {
                printf("\n\t⚠️  Booking already cancelled!\n");
                pauseScreen();
                return;
            }

            printf("\n\t📋 Booking Details:\n");
            printf("\t   Passenger: %s\n", bookings[i].passengerName);
            printf("\t   Bus ID: %d\n", bookings[i].busId);
            printf("\t   Seat: %d\n", bookings[i].seatNumber);
            printf("\t   Fare: %.2f BDT\n", bookings[i].totalFare);

            refundCalculation(&bookings[i]);

            printf("\n\t⚠️  Confirm cancellation? (1-Yes, 0-No): ");
            int confirm;
            scanf("%d", &confirm);

            if(confirm == 1) {
                bookings[i].status = 0;

                for(int j = 0; j < busCount; j++) {
                    if(buses[j].busId == bookings[i].busId) {
                        buses[j].seats[bookings[i].seatNumber - 1] = 0;
                        buses[j].availableSeats++;
                        break;
                    }
                }

                printf("\n\t✅ Booking cancelled successfully!\n");
                printf("\t💰 Refund will be processed within 5-7 business days.\n");
            } else {
                printf("\n\t🔄 Cancellation aborted.\n");
            }
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("\n\t❌ Booking not found!\n");
    }

    pauseScreen();
}

void modifyBooking() {
    displayHeader("✏️  MODIFY BOOKING");

    int bookingId;
    printf("\t🔢 Enter Booking ID: ");
    scanf("%d", &bookingId);

    int bookingIndex = -1;
    for(int i = 0; i < bookingCount; i++) {
        if(bookings[i].bookingId == bookingId && bookings[i].status == 1) {
            bookingIndex = i;
            break;
        }
    }

    if(bookingIndex == -1) {
        printf("\n\t❌ Active booking not found!\n");
        pauseScreen();
        return;
    }

    printf("\n\t📋 Current Details:\n");
    printf("\t   👤 Passenger: %s\n", bookings[bookingIndex].passengerName);
    printf("\t   📱 Phone: %s\n", bookings[bookingIndex].phone);
    printf("\t   💺 Seat: %d\n", bookings[bookingIndex].seatNumber);

    printf("\n\t┌────────────────────────────────┐\n");
    printf("\t│  What would you like to modify?│\n");
    printf("\t├────────────────────────────────┤\n");
    printf("\t│  1️⃣  Passenger Name            │\n");
    printf("\t│  2️⃣  Phone Number              │\n");
    printf("\t│  3️⃣  Email Address             │\n");
    printf("\t│  4️⃣  Change Seat               │\n");
    printf("\t└────────────────────────────────┘\n");
    printf("\t➤ Choice: ");

    int choice;
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("\t👤 New Name: ");
            scanf(" %[^\n]", bookings[bookingIndex].passengerName);
            printf("\t✅ Name updated successfully!\n");
            break;
        case 2:
            do {
                printf("\t📱 New Phone: ");
                scanf("%s", bookings[bookingIndex].phone);
                if(!validatePhone(bookings[bookingIndex].phone)) {
                    printf("\t   ❌ Invalid phone number! Try again.\n");
                }
            } while(!validatePhone(bookings[bookingIndex].phone));
            printf("\t✅ Phone updated successfully!\n");
            break;
        case 3:
            do {
                printf("\t📧 New Email: ");
                scanf("%s", bookings[bookingIndex].email);
                if(!validateEmail(bookings[bookingIndex].email)) {
                    printf("\t   ❌ Invalid email! Try again.\n");
                }
            } while(!validateEmail(bookings[bookingIndex].email));
            printf("\t✅ Email updated successfully!\n");
            break;
        case 4: {
            int busIndex = -1;
            for(int i = 0; i < busCount; i++) {
                if(buses[i].busId == bookings[bookingIndex].busId) {
                    busIndex = i;
                    break;
                }
            }

            if(busIndex != -1) {
                displaySeatMap(&buses[busIndex]);
                printf("\n\t💺 Enter new seat number: ");
                int newSeat;
                scanf("%d", &newSeat);

                if(newSeat > 0 && newSeat <= buses[busIndex].totalSeats &&
                   buses[busIndex].seats[newSeat - 1] == 0) {
                    buses[busIndex].seats[bookings[bookingIndex].seatNumber - 1] = 0;
                    buses[busIndex].seats[newSeat - 1] = 1;
                    bookings[bookingIndex].seatNumber = newSeat;
                    printf("\n\t✅ Seat changed successfully!\n");
                } else {
                    printf("\n\t❌ Invalid or already booked seat!\n");
                }
            }
            break;
        }
        default:
            printf("\n\t❌ Invalid choice!\n");
    }

    pauseScreen();
}

void viewBusDetails() {
    displayHeader("🚌 BUS DETAILS");

    int busId;
    printf("\t🔢 Enter Bus ID: ");
    scanf("%d", &busId);

    int busIndex = -1;
    for(int i = 0; i < busCount; i++) {
        if(buses[i].busId == busId) {
            busIndex = i;
            break;
        }
    }

    if(busIndex == -1) {
        printf("\n\t❌ Bus not found!\n");
        pauseScreen();
        return;
    }

    Bus* bus = &buses[busIndex];

    printf("\n\t╔═══════════════════════════════════════════╗\n");
    printf("\t║         BUS INFORMATION                   ║\n");
    printf("\t╠═══════════════════════════════════════════╣\n");
    printf("\t║  🆔 Bus ID: %-29d ║\n", bus->busId);
    printf("\t║  🚌 Bus Number: %-25s ║\n", bus->busNumber);
    printf("\t║  🎨 Bus Type: %-27s ║\n", bus->busType);
    printf("\t║  🗺️  Route ID: %-28d ║\n", bus->routeId);

    for(int i = 0; i < routeCount; i++) {
        if(routes[i].routeId == bus->routeId) {
            char routeInfo[100];
            snprintf(routeInfo, sizeof(routeInfo), "%s → %s (%.0fkm)",
                    routes[i].origin, routes[i].destination, routes[i].distance);
            printf("\t║  🛣️  Route: %-30s ║\n", routeInfo);
            break;
        }
    }

    printf("\t║  💺 Total Seats: %-24d ║\n", bus->totalSeats);
    printf("\t║  ✅ Available Seats: %-20d ║\n", bus->availableSeats);
    printf("\t║  💰 Base Fare: %-23.2f BDT ║\n", bus->baseFare);

    char dateStr[20];
    snprintf(dateStr, sizeof(dateStr), "%02d/%02d/%04d",
           bus->travelDate.day, bus->travelDate.month, bus->travelDate.year);
    printf("\t║  📅 Travel Date: %-24s ║\n", dateStr);

    char timeStr[20];
    snprintf(timeStr, sizeof(timeStr), "%02d:%02d",
           bus->departureTime.hour, bus->departureTime.minute);
    printf("\t║  🕐 Departure: %-26s ║\n", timeStr);
    printf("\t╠═══════════════════════════════════════════╣\n");
    printf("\t║         ✨ AMENITIES                      ║\n");
    printf("\t╠═══════════════════════════════════════════╣\n");

    char* amenityNames[] = {"📶 WiFi", "🔌 Charging", "🎬 Entertainment", "🍿 Snacks", "🛏️  Blanket"};
    for(int i = 0; i < 5; i++) {
        printf("\t║  %-20s: %-18s ║\n", amenityNames[i], bus->amenities[i] ? "✅ Yes" : "❌ No");
    }
    printf("\t╚═══════════════════════════════════════════╝\n");

    displaySeatMap(bus);

    pauseScreen();
}

void generateReport() {
    displayHeader("📊 GENERATE REPORTS");

    printf("\t┌────────────────────────────────────┐\n");
    printf("\t│  Select Report Type:               │\n");
    printf("\t├────────────────────────────────────┤\n");
    printf("\t│  1️⃣  💰 Revenue Report            │\n");
    printf("\t│  2️⃣  📊 Occupancy Report          │\n");
    printf("\t│  3️⃣  📈 Booking Statistics        │\n");
    printf("\t│  4️⃣  🛣️  Route Performance        │\n");
    printf("\t└────────────────────────────────────┘\n");
    printf("\t➤ Enter choice: ");

    int choice;
    scanf("%d", &choice);

    switch(choice) {
        case 1: {
            float totalRevenue = 0;
            int activeBookings = 0;

            printf("\n\t╔═══════════════════════════════════════════╗\n");
            printf("\t║         💰 REVENUE REPORT                 ║\n");
            printf("\t╠═══════════════════════════════════════════╣\n");

            for(int i = 0; i < bookingCount; i++) {
                if(bookings[i].status == 1) {
                    totalRevenue += bookings[i].totalFare;
                    activeBookings++;
                }
            }

            printf("\t║  Total Active Bookings: %-18d ║\n", activeBookings);
            printf("\t║  Total Revenue: %-22.2f BDT ║\n", totalRevenue);
            printf("\t║  Average Ticket: %-21.2f BDT ║\n",
                   activeBookings > 0 ? totalRevenue/activeBookings : 0);
            printf("\t╚═══════════════════════════════════════════╝\n");
            break;
        }
        case 2: {
            printf("\n\t╔═══════════════════════════════════════════════════════════════╗\n");
            printf("\t║                     📊 OCCUPANCY REPORT                       ║\n");
            printf("\t╠═══════════════════════════════════════════════════════════════╣\n");
            printf("\t┌────────┬──────────────┬────────┬────────┬────────────┐\n");
            printf("\t│ Bus ID │  Bus Number  │ Total  │ Booked │ Occupancy%%│\n");
            printf("\t├────────┼──────────────┼────────┼────────┼────────────┤\n");

            for(int i = 0; i < busCount; i++) {
                int bookedSeats = buses[i].totalSeats - buses[i].availableSeats;
                float occupancy = (float)bookedSeats / buses[i].totalSeats * 100;

                printf("\t│  %-5d │ %-12s │  %-5d │  %-5d │   %-7.2f │\n",
                       buses[i].busId, buses[i].busNumber,
                       buses[i].totalSeats, bookedSeats, occupancy);
            }
            printf("\t└────────┴──────────────┴────────┴────────┴────────────┘\n");
            break;
        }
        case 3: {
            int activeBookings = 0, cancelledBookings = 0;

            for(int i = 0; i < bookingCount; i++) {
                if(bookings[i].status == 1) activeBookings++;
                else cancelledBookings++;
            }

            printf("\n\t╔═══════════════════════════════════════════╗\n");
            printf("\t║       📈 BOOKING STATISTICS               ║\n");
            printf("\t╠═══════════════════════════════════════════╣\n");
            printf("\t║  Total Bookings: %-24d ║\n", bookingCount);
            printf("\t║  Active Bookings: %-23d ║\n", activeBookings);
            printf("\t║  Cancelled Bookings: %-20d ║\n", cancelledBookings);
            printf("\t║  Cancellation Rate: %-18.2f%% ║\n",
                   bookingCount > 0 ? (float)cancelledBookings/bookingCount*100 : 0);
            printf("\t╚═══════════════════════════════════════════╝\n");
            break;
        }
        case 4: {
            printf("\n\t╔═══════════════════════════════════════════╗\n");
            printf("\t║       🛣️  ROUTE PERFORMANCE               ║\n");
            printf("\t╠═══════════════════════════════════════════╣\n");

            for(int i = 0; i < routeCount; i++) {
                int routeBookings = 0;
                float routeRevenue = 0;

                for(int j = 0; j < busCount; j++) {
                    if(buses[j].routeId == routes[i].routeId) {
                        for(int k = 0; k < bookingCount; k++) {
                            if(bookings[k].busId == buses[j].busId && bookings[k].status == 1) {
                                routeBookings++;
                                routeRevenue += bookings[k].totalFare;
                            }
                        }
                    }
                }

                printf("\t║  Route: %s → %s\n", routes[i].origin, routes[i].destination);
                printf("\t║    📊 Bookings: %-26d ║\n", routeBookings);
                printf("\t║    💰 Revenue: %-24.2f BDT ║\n", routeRevenue);
                if(i < routeCount - 1) printf("\t║                                           ║\n");
            }
            printf("\t╚═══════════════════════════════════════════╝\n");
            break;
        }
        default:
            printf("\n\t❌ Invalid choice!\n");
    }

    pauseScreen();
}

void manageSeatLayout() {
    displayHeader("🎛️  MANAGE SEAT LAYOUT");

    int busId;
    printf("\t🔢 Enter Bus ID: ");
    scanf("%d", &busId);

    int busIndex = -1;
    for(int i = 0; i < busCount; i++) {
        if(buses[i].busId == busId) {
            busIndex = i;
            break;
        }
    }

    if(busIndex == -1) {
        printf("\n\t❌ Bus not found!\n");
        pauseScreen();
        return;
    }

    displaySeatMap(&buses[busIndex]);

    printf("\n\t┌────────────────────────────────┐\n");
    printf("\t│  1️⃣  🚫 Block Seat             │\n");
    printf("\t│  2️⃣  ✅ Unblock Seat           │\n");
    printf("\t└────────────────────────────────┘\n");
    printf("\t➤ Choice: ");

    int choice, seatNum;
    scanf("%d", &choice);

    printf("\t💺 Enter Seat Number: ");
    scanf("%d", &seatNum);

    if(seatNum < 1 || seatNum > buses[busIndex].totalSeats) {
        printf("\n\t❌ Invalid seat number!\n");
        pauseScreen();
        return;
    }

    if(choice == 1) {
        if(buses[busIndex].seats[seatNum - 1] == 0) {
            buses[busIndex].seats[seatNum - 1] = 1;
            buses[busIndex].availableSeats--;
            printf("\n\t✅ Seat %d blocked successfully!\n", seatNum);
        } else {
            printf("\n\t⚠️  Seat is already booked/blocked!\n");
        }
    } else if(choice == 2) {
        int isBooked = 0;
        for(int i = 0; i < bookingCount; i++) {
            if(bookings[i].busId == busId &&
               bookings[i].seatNumber == seatNum &&
               bookings[i].status == 1) {
                isBooked = 1;
                break;
            }
        }

        if(isBooked) {
            printf("\n\t❌ Cannot unblock! Seat has active booking.\n");
        } else if(buses[busIndex].seats[seatNum - 1] == 1) {
            buses[busIndex].seats[seatNum - 1] = 0;
            buses[busIndex].availableSeats++;
            printf("\n\t✅ Seat %d unblocked successfully!\n", seatNum);
        } else {
            printf("\n\t⚠️  Seat is already available!\n");
        }
    } else {
        printf("\n\t❌ Invalid choice!\n");
    }

    pauseScreen();
}

void groupBooking() {
    displayHeader("👥 GROUP BOOKING");

    int numPassengers;
    printf("\t👨‍👩‍👧‍👦 Number of passengers: ");
    scanf("%d", &numPassengers);

    if(numPassengers < 5) {
        printf("\n\t⚠️  Minimum 5 passengers required for group booking!\n");
        pauseScreen();
        return;
    }

    viewAllBuses();

    int busId;
    printf("\n\t🔢 Enter Bus ID: ");
    scanf("%d", &busId);

    int busIndex = -1;
    for(int i = 0; i < busCount; i++) {
        if(buses[i].busId == busId) {
            busIndex = i;
            break;
        }
    }

    if(busIndex == -1) {
        printf("\n\t❌ Bus not found!\n");
        pauseScreen();
        return;
    }

    if(buses[busIndex].availableSeats < numPassengers) {
        printf("\n\t❌ Not enough seats available!\n");
        printf("\t   Available: %d, Required: %d\n", buses[busIndex].availableSeats, numPassengers);
        pauseScreen();
        return;
    }

    displaySeatMap(&buses[busIndex]);

    float groupDiscount = 0.15;
    if(numPassengers >= 10) groupDiscount = 0.20;
    if(numPassengers >= 15) groupDiscount = 0.25;

    printf("\n\t🎉 Group Discount: %.0f%%\n", groupDiscount * 100);

    char groupLeader[MAX_NAME], phone[MAX_PHONE];
    printf("\t👤 Group Leader Name: ");
    scanf(" %[^\n]", groupLeader);
    printf("\t📱 Contact Number: ");
    scanf("%s", phone);

    float totalGroupFare = 0;
    printf("\n\t💺 Booking seats...\n\n");

    for(int i = 0; i < numPassengers; i++) {
        int seatNum;
        printf("\t   Seat for passenger %d: ", i + 1);
        scanf("%d", &seatNum);

        if(seatNum < 1 || seatNum > buses[busIndex].totalSeats ||
           buses[busIndex].seats[seatNum - 1] == 1) {
            printf("\t   ❌ Invalid or booked seat! Try again.\n");
            i--;
            continue;
        }

        Booking newBooking;
        newBooking.bookingId = bookingCount + 1;
        newBooking.busId = busId;
        newBooking.seatNumber = seatNum;
        newBooking.status = 1;

        snprintf(newBooking.passengerName, MAX_NAME, "Group-%s-P%d", groupLeader, i + 1);
        strncpy(newBooking.passengerName, passengerName, MAX_NAME - 1);
        newBooking.passengerName[MAX_NAME - 1] = '\0';
        strncpy(newBooking.phone, phone, MAX_PHONE - 1);
        newBooking.phone[MAX_PHONE - 1] = '\0';
        strncpy(newBooking.email, "multicity@booking.com", MAX_EMAIL - 1);
        newBooking.email[MAX_EMAIL - 1] = '\0';
        strncpy(newBooking.paymentMethod, "MultiCity", 19);
        newBooking.paymentMethod[19] = '\0';

        float baseFare = calculateDynamicFare(&buses[busIndex], seatNum);
        newBooking.totalFare = baseFare * 0.9;
        totalMultiCityFare += newBooking.totalFare;

        time_t now = time(NULL);
        struct tm *local = localtime(&now);
        newBooking.bookingDate.day = local->tm_mday;
        newBooking.bookingDate.month = local->tm_mon + 1;
        newBooking.bookingDate.year = local->tm_year + 1900;

        newBooking.loyalty_points = (int)(newBooking.totalFare / 100);

        buses[busIndex].seats[seatNum - 1] = 1;
        buses[busIndex].availableSeats--;

        bookingIds[successfulBookings++] = newBooking.bookingId;
        bookings[bookingCount++] = newBooking;

        printf("\t✅ Stop %d booked successfully!\n", stop + 1);
    }

    printf("\n\t╔═══════════════════════════════════════════╗\n");
    printf("\t║   ✅ MULTI-CITY BOOKING CONFIRMED         ║\n");
    printf("\t╠═══════════════════════════════════════════╣\n");
    printf("\t║  Passenger: %-30s ║\n", passengerName);
    printf("\t║  Total Stops: %-28d ║\n", successfulBookings);
    printf("\t║  Total Fare: %-27.2f BDT ║\n", totalMultiCityFare);
    printf("\t║  Booking IDs: ");
    for(int i = 0; i < successfulBookings; i++) {
        printf("%d ", bookingIds[i]);
    }
    printf("\n\t╚═══════════════════════════════════════════╝\n");

    pauseScreen();
}

void waitlistManagement() {
    printf("\n\t╔═══════════════════════════════════════════╗\n");
    printf("\t║      📋 WAITLIST REGISTRATION             ║\n");
    printf("\t╠═══════════════════════════════════════════╣\n");
    printf("\t║  ⚠️  This feature is under development.  ║\n");
    printf("\t║  You will be notified when seats         ║\n");
    printf("\t║  become available.                        ║\n");
    printf("\t╚═══════════════════════════════════════════╝\n");
}

void displayAnalytics() {
    displayHeader("📊 BUSINESS ANALYTICS");

    float totalRevenue = 0;
    int totalActiveBookings = 0;
    int totalCancellations = 0;
    float totalDistance = 0;
    int totalLoyaltyPoints = 0;

    for(int i = 0; i < bookingCount; i++) {
        if(bookings[i].status == 1) {
            totalRevenue += bookings[i].totalFare;
            totalActiveBookings++;
            totalLoyaltyPoints += bookings[i].loyalty_points;
        } else {
            totalCancellations++;
        }
    }

    for(int i = 0; i < busCount; i++) {
        for(int j = 0; j < routeCount; j++) {
            if(buses[i].routeId == routes[j].routeId) {
                totalDistance += routes[j].distance;
                break;
            }
        }
    }

    printf("\n\t╔═══════════════════════════════════════════╗\n");
    printf("\t║           📈 KEY METRICS                  ║\n");
    printf("\t╠═══════════════════════════════════════════╣\n");
    printf("\t║  💰 Total Revenue: %-19.2f BDT ║\n", totalRevenue);
    printf("\t║  ✅ Active Bookings: %-20d ║\n", totalActiveBookings);
    printf("\t║  ❌ Cancellations: %-22d ║\n", totalCancellations);
    printf("\t║  📊 Cancellation Rate: %-16.2f%% ║\n",
           bookingCount > 0 ? (float)totalCancellations/bookingCount*100 : 0);
    printf("\t║  💵 Avg Booking Value: %-16.2f BDT ║\n",
           totalActiveBookings > 0 ? totalRevenue/totalActiveBookings : 0);
    printf("\t║  🚌 Total Buses: %-24d ║\n", busCount);
    printf("\t║  🗺️  Total Routes: %-23d ║\n", routeCount);
    printf("\t║  🛣️  Total Distance: %-18.2f km ║\n", totalDistance);
    printf("\t║  ⭐ Total Loyalty Points: %-15d ║\n", totalLoyaltyPoints);
    printf("\t╚═══════════════════════════════════════════╝\n");

    printf("\n\t╔═══════════════════════════════════════════╗\n");
    printf("\t║         🏆 POPULAR ROUTES                 ║\n");
    printf("\t╠═══════════════════════════════════════════╣\n");

    for(int i = 0; i < routeCount; i++) {
        int routeBookings = 0;
        for(int j = 0; j < busCount; j++) {
            if(buses[j].routeId == routes[i].routeId) {
                for(int k = 0; k < bookingCount; k++) {
                    if(bookings[k].busId == buses[j].busId && bookings[k].status == 1) {
                        routeBookings++;
                    }
                }
            }
        }
        printf("\t║  %s → %s: %d bookings\n",
               routes[i].origin, routes[i].destination, routeBookings);
    }
    printf("\t╚═══════════════════════════════════════════╝\n");

    printf("\n\t╔═══════════════════════════════════════════╗\n");
    printf("\t║       🚌 BUS TYPE DISTRIBUTION            ║\n");
    printf("\t╠═══════════════════════════════════════════╣\n");

    int acCount = 0, nonAcCount = 0, sleeperCount = 0;
    for(int i = 0; i < busCount; i++) {
        if(strcmp(buses[i].busType, "AC") == 0) acCount++;
        else if(strcmp(buses[i].busType, "Sleeper") == 0) sleeperCount++;
        else nonAcCount++;
    }

    printf("\t║  ❄️  AC Buses: %-27d ║\n", acCount);
    printf("\t║  🌡️  Non-AC Buses: %-22d ║\n", nonAcCount);
    printf("\t║  🛏️  Sleeper Buses: %-21d ║\n", sleeperCount);
    printf("\t╚═══════════════════════════════════════════╝\n");

    // Occupancy overview
    printf("\n\t╔═══════════════════════════════════════════╗\n");
    printf("\t║       💺 OCCUPANCY OVERVIEW               ║\n");
    printf("\t╠═══════════════════════════════════════════╣\n");

    int totalSeats = 0, totalBooked = 0;
    for(int i = 0; i < busCount; i++) {
        totalSeats += buses[i].totalSeats;
        totalBooked += (buses[i].totalSeats - buses[i].availableSeats);
    }

    float overallOccupancy = totalSeats > 0 ? (float)totalBooked / totalSeats * 100 : 0;

    printf("\t║  Total Seats: %-28d ║\n", totalSeats);
    printf("\t║  Booked Seats: %-27d ║\n", totalBooked);
    printf("\t║  Overall Occupancy: %-20.2f%% ║\n", overallOccupancy);
    printf("\t╚═══════════════════════════════════════════╝\n");

    pauseScreen();
}

void saveData() {
    FILE *fp;

    fp = fopen("buses.dat", "wb");
    if(fp != NULL) {
        fwrite(&busCount, sizeof(int), 1, fp);
        fwrite(buses, sizeof(Bus), busCount, fp);
        fclose(fp);
    }

    fp = fopen("bookings.dat", "wb");
    if(fp != NULL) {
        fwrite(&bookingCount, sizeof(int), 1, fp);
        fwrite(bookings, sizeof(Booking), bookingCount, fp);
        fclose(fp);
    }

    fp = fopen("routes.dat", "wb");
    if(fp != NULL) {
        fwrite(&routeCount, sizeof(int), 1, fp);
        fwrite(routes, sizeof(Route), routeCount, fp);
        fclose(fp);
    }
}

void loadData() {
    FILE *fp;

    fp = fopen("buses.dat", "rb");
    if(fp != NULL) {
        if(fread(&busCount, sizeof(int), 1, fp) == 1) {
            fread(buses, sizeof(Bus), busCount, fp);
        }
        fclose(fp);
    }

    fp = fopen("bookings.dat", "rb");
    if(fp != NULL) {
        if(fread(&bookingCount, sizeof(int), 1, fp) == 1) {
            fread(bookings, sizeof(Booking), bookingCount, fp);
        }
        fclose(fp);
    }

    fp = fopen("routes.dat", "rb");
    if(fp != NULL) {
        if(fread(&routeCount, sizeof(int), 1, fp) == 1) {
            fread(routes, sizeof(Route), routeCount, fp);
        }
        fclose(fp);
    }
}Booking.phone, phone, MAX_PHONE - 1);
        newBooking.phone[MAX_PHONE - 1] = '\0';
        strncpy(newBooking.email, "group@booking.com", MAX_EMAIL - 1);
        newBooking.email[MAX_EMAIL - 1] = '\0';
        strncpy(newBooking.paymentMethod, "Group", 19);
        newBooking.paymentMethod[19] = '\0';

        float baseFare = calculateDynamicFare(&buses[busIndex], seatNum);
        newBooking.totalFare = baseFare * (1 - groupDiscount);
        totalGroupFare += newBooking.totalFare;

        time_t now = time(NULL);
        struct tm *local = localtime(&now);
        newBooking.bookingDate.day = local->tm_mday;
        newBooking.bookingDate.month = local->tm_mon + 1;
        newBooking.bookingDate.year = local->tm_year + 1900;

        newBooking.loyalty_points = (int)(newBooking.totalFare / 100);

        buses[busIndex].seats[seatNum - 1] = 1;
        buses[busIndex].availableSeats--;

        bookings[bookingCount++] = newBooking;
    }

    printf("\n\t╔═══════════════════════════════════════════╗\n");
    printf("\t║     ✅ GROUP BOOKING CONFIRMED            ║\n");
    printf("\t╠═══════════════════════════════════════════╣\n");
    printf("\t║  Group Leader: %-27s ║\n", groupLeader);
    printf("\t║  Total Passengers: %-23d ║\n", numPassengers);
    printf("\t║  Total Fare: %-26.2f BDT ║\n", totalGroupFare);
    printf("\t║  Discount Applied: %-21.0f%% ║\n", groupDiscount * 100);
    printf("\t╚═══════════════════════════════════════════╝\n");

    pauseScreen();
}

void multiCityBooking() {
    displayHeader("🌆 MULTI-CITY BOOKING");

    int numStops;
    printf("\t🗺️  Number of stops (including destination): ");
    scanf("%d", &numStops);

    if(numStops < 2) {
        printf("\n\t⚠️  Minimum 2 stops required!\n");
        pauseScreen();
        return;
    }

    char passengerName[MAX_NAME], phone[MAX_PHONE];
    printf("\t👤 Passenger Name: ");
    scanf(" %[^\n]", passengerName);
    printf("\t📱 Phone: ");
    scanf("%s", phone);

    float totalMultiCityFare = 0;
    int bookingIds[10];
    int successfulBookings = 0;

    printf("\n\t🎉 Multi-city discount: 10%%\n\n");

    for(int stop = 0; stop < numStops; stop++) {
        printf("\t┌─────────── Stop %d ───────────┐\n", stop + 1);

        viewAllBuses();

        int busId, seatNum;
        printf("\n\t🔢 Bus ID: ");
        scanf("%d", &busId);

        int busIndex = -1;
        for(int i = 0; i < busCount; i++) {
            if(buses[i].busId == busId) {
                busIndex = i;
                break;
            }
        }

        if(busIndex == -1) {
            printf("\n\t❌ Bus not found! Skipping this stop.\n");
            continue;
        }

        displaySeatMap(&buses[busIndex]);

        printf("\n\t💺 Seat Number: ");
        scanf("%d", &seatNum);

        if(seatNum < 1 || seatNum > buses[busIndex].totalSeats ||
           buses[busIndex].seats[seatNum - 1] == 1) {
            printf("\n\t❌ Invalid seat! Skipping this stop.\n");
            continue;
        }

        Booking newBooking;
        newBooking.bookingId = bookingCount + 1;
        newBooking.busId = busId;
        newBooking.seatNumber = seatNum;
        newBooking.status = 1;

        strncpy(newBooking.passengerName, passengerName, MAX_NAME - 1);
        newBooking.passengerName[MAX_NAME - 1] = '\0';
        strncpy(newBooking.phone, phone, MAX_PHONE - 1);
        newBooking.phone[MAX_PHONE - 1] = '\0';
        strncpy(newBooking.email, "multicity@booking.com", MAX_EMAIL - 1);
        newBooking.email[MAX_EMAIL - 1] = '\0';
        strncpy(newBooking.paymentMethod, "MultiCity", 19);
        newBooking.paymentMethod[19] = '\0';

        float baseFare = calculateDynamicFare(&buses[busIndex], seatNum);
        newBooking.totalFare = baseFare * 0.9;  // 10% discount
        totalMultiCityFare += newBooking.totalFare;

        time_t now = time(NULL);
        struct tm *local = localtime(&now);
        newBooking.bookingDate.day = local->tm_mday;
        newBooking.bookingDate.month = local->tm_mon + 1;
        newBooking.bookingDate.year = local->tm_year + 1900;

        newBooking.loyalty_points = (int)(newBooking.totalFare / 100);

        buses[busIndex].seats[seatNum - 1] = 1;
        buses[busIndex].availableSeats--;

        bookingIds[successfulBookings++] = newBooking.bookingId;
        bookings[bookingCount++] = newBooking;

        printf("\t✅ Stop %d booked successfully!\n", stop + 1);
    }

    printf("\n\t╔═══════════════════════════════════════════╗\n");
    printf("\t║   ✅ MULTI-CITY BOOKING CONFIRMED         ║\n");
    printf("\t╠═══════════════════════════════════════════╣\n");
    printf("\t║  Passenger: %-30s ║\n", passengerName);
    printf("\t║  Total Stops: %-28d ║\n", successfulBookings);
    printf("\t║  Total Fare: %-27.2f BDT ║\n", totalMultiCityFare);
    printf("\t║  Booking IDs: ");
    for(int i = 0; i < successfulBookings; i++) {
        printf("%d ", bookingIds[i]);
    }
    printf("\n\t╚═══════════════════════════════════════════╝\n");

    pauseScreen();
}

void groupBooking() {
    displayHeader("👥 GROUP BOOKING");

    int numPassengers;
    printf("\t👨‍👩‍👧‍👦 Number of passengers: ");
    scanf("%d", &numPassengers);

    if(numPassengers < 5) {
        printf("\n\t⚠️  Minimum 5 passengers required for group booking!\n");
        pauseScreen();
        return;
    }

    viewAllBuses();

    int busId;
    printf("\n\t🔢 Enter Bus ID: ");
    scanf("%d", &busId);

    int busIndex = -1;
    for(int i = 0; i < busCount; i++) {
        if(buses[i].busId == busId) {
            busIndex = i;
            break;
        }
    }

    if(busIndex == -1) {
        printf("\n\t❌ Bus not found!\n");
        pauseScreen();
        return;
    }

    if(buses[busIndex].availableSeats < numPassengers) {
        printf("\n\t❌ Not enough seats available!\n");
        printf("\t   Available: %d, Required: %d\n", buses[busIndex].availableSeats, numPassengers);
        pauseScreen();
        return;
    }

    displaySeatMap(&buses[busIndex]);

    float groupDiscount = 0.15;
    if(numPassengers >= 10) groupDiscount = 0.20;
    if(numPassengers >= 15) groupDiscount = 0.25;

    printf("\n\t🎉 Group Discount: %.0f%%\n", groupDiscount * 100);

    char groupLeader[MAX_NAME], phone[MAX_PHONE];
    printf("\t👤 Group Leader Name: ");
    scanf(" %[^\n]", groupLeader);
    printf("\t📱 Contact Number: ");
    scanf("%s", phone);

    float totalGroupFare = 0;
    printf("\n\t💺 Booking seats...\n\n");

    for(int i = 0; i < numPassengers; i++) {
        int seatNum;
        printf("\t   Seat for passenger %d: ", i + 1);
        scanf("%d", &seatNum);

        if(seatNum < 1 || seatNum > buses[busIndex].totalSeats ||
           buses[busIndex].seats[seatNum - 1] == 1) {
            printf("\t   ❌ Invalid or booked seat! Try again.\n");
            i--;
            continue;
        }

        Booking newBooking;
        newBooking.bookingId = bookingCount + 1;
        newBooking.busId = busId;
        newBooking.seatNumber = seatNum;
        newBooking.status = 1;

        snprintf(newBooking.passengerName, MAX_NAME, "Group-%s-P%d", groupLeader, i + 1);
        strncpy(newBooking.phone, phone, MAX_PHONE - 1);
        newBooking.phone[MAX_PHONE - 1] = '\0';
        strncpy(newBooking.email, "group@booking.com", MAX_EMAIL - 1);
        newBooking.email[MAX_EMAIL - 1] = '\0';
        strncpy(newBooking.paymentMethod, "Group", 19);
        newBooking.paymentMethod[19] = '\0';

        float baseFare = calculateDynamicFare(&buses[busIndex], seatNum);
        newBooking.totalFare = baseFare * (1 - groupDiscount);
        totalGroupFare += newBooking.totalFare;

        time_t now = time(NULL);
        struct tm *local = localtime(&now);
        newBooking.bookingDate.day = local->tm_mday;
        newBooking.bookingDate.month = local->tm_mon + 1;
        newBooking.bookingDate.year = local->tm_year + 1900;

        newBooking.loyalty_points = (int)(newBooking.totalFare / 100);

        buses[busIndex].seats[seatNum - 1] = 1;
        buses[busIndex].availableSeats--;

        bookings[bookingCount++] = newBooking;
    }

    printf("\n\t╔═══════════════════════════════════════════╗\n");
    printf("\t║     ✅ GROUP BOOKING CONFIRMED            ║\n");
    printf("\t╠═══════════════════════════════════════════╣\n");
    printf("\t║  Group Leader: %-27s ║\n", groupLeader);
    printf("\t║  Total Passengers: %-23d ║\n", numPassengers);
    printf("\t║  Total Fare: %-26.2f BDT ║\n", totalGroupFare);
    printf("\t║  Discount Applied: %-21.0f%% ║\n", groupDiscount * 100);
    printf("\t╚═══════════════════════════════════════════╝\n");

    pauseScreen();
}

void waitlistManagement() {
    printf("\n\t╔═══════════════════════════════════════════╗\n");
    printf("\t║      📋 WAITLIST REGISTRATION             ║\n");
    printf("\t╠═══════════════════════════════════════════╣\n");
    printf("\t║  ⚠️  This feature is under development.  ║\n");
    printf("\t║  You will be notified when seats         ║\n");
    printf("\t║  become available.                        ║\n");
    printf("\t╚═══════════════════════════════════════════╝\n");
}

void displayAnalytics() {
    displayHeader("📊 BUSINESS ANALYTICS");

    float totalRevenue = 0;
    int totalActiveBookings = 0;
    int totalCancellations = 0;
    float totalDistance = 0;
    int totalLoyaltyPoints = 0;

    for(int i = 0; i < bookingCount; i++) {
        if(bookings[i].status == 1) {
            totalRevenue += bookings[i].totalFare;
            totalActiveBookings++;
            totalLoyaltyPoints += bookings[i].loyalty_points;
        } else {
            totalCancellations++;
        }
    }

    for(int i = 0; i < busCount; i++) {
        for(int j = 0; j < routeCount; j++) {
            if(buses[i].routeId == routes[j].routeId) {
                totalDistance += routes[j].distance;
                break;
            }
        }
    }

    printf("\n\t╔═══════════════════════════════════════════╗\n");
    printf("\t║           📈 KEY METRICS                  ║\n");
    printf("\t╠═══════════════════════════════════════════╣\n");
    printf("\t║  💰 Total Revenue: %-19.2f BDT ║\n", totalRevenue);
    printf("\t║  ✅ Active Bookings: %-20d ║\n", totalActiveBookings);
    printf("\t║  ❌ Cancellations: %-22d ║\n", totalCancellations);
    printf("\t║  📊 Cancellation Rate: %-16.2f%% ║\n",
           bookingCount > 0 ? (float)totalCancellations/bookingCount*100 : 0);
    printf("\t║  💵 Avg Booking Value: %-16.2f BDT ║\n",
           totalActiveBookings > 0 ? totalRevenue/totalActiveBookings : 0);
    printf("\t║  🚌 Total Buses: %-24d ║\n", busCount);
    printf("\t║  🗺️  Total Routes: %-23d ║\n", routeCount);
    printf("\t║  🛣️  Total Distance: %-18.2f km ║\n", totalDistance);
    printf("\t║  ⭐ Total Loyalty Points: %-15d ║\n", totalLoyaltyPoints);
    printf("\t╚═══════════════════════════════════════════╝\n");

    printf("\n\t╔═══════════════════════════════════════════╗\n");
    printf("\t║         🏆 POPULAR ROUTES                 ║\n");
    printf("\t╠═══════════════════════════════════════════╣\n");

    for(int i = 0; i < routeCount; i++) {
        int routeBookings = 0;
        for(int j = 0; j < busCount; j++) {
            if(buses[j].routeId == routes[i].routeId) {
                for(int k = 0; k < bookingCount; k++) {
                    if(bookings[k].busId == buses[j].busId && bookings[k].status == 1) {
                        routeBookings++;
                    }
                }
            }
        }
        printf("\t║  %s → %s: %d bookings\n",
               routes[i].origin, routes[i].destination, routeBookings);
    }
    printf("\t╚═══════════════════════════════════════════╝\n");

    printf("\n\t╔═══════════════════════════════════════════╗\n");
    printf("\t║       🚌 BUS TYPE DISTRIBUTION            ║\n");
    printf("\t╠═══════════════════════════════════════════╣\n");

    int acCount = 0, nonAcCount = 0, sleeperCount = 0;
    for(int i = 0; i < busCount; i++) {
        if(strcmp(buses[i].busType, "AC") == 0) acCount++;
        else if(strcmp(buses[i].busType, "Sleeper") == 0) sleeperCount++;
        else nonAcCount++;
    }

    printf("\t║  ❄️  AC Buses: %-27d ║\n", acCount);
    printf("\t║  🌡️  Non-AC Buses: %-22d ║\n", nonAcCount);
    printf("\t║  🛏️  Sleeper Buses: %-21d ║\n", sleeperCount);
    printf("\t╚═══════════════════════════════════════════╝\n");

    printf("\n\t╔═══════════════════════════════════════════╗\n");
    printf("\t║       💺 OCCUPANCY OVERVIEW               ║\n");
    printf("\t╠═══════════════════════════════════════════╣\n");

    int totalSeats = 0, totalBooked = 0;
    for(int i = 0; i < busCount; i++) {
        totalSeats += buses[i].totalSeats;
        totalBooked += (buses[i].totalSeats - buses[i].availableSeats);
    }

    float overallOccupancy = totalSeats > 0 ? (float)totalBooked / totalSeats * 100 : 0;

    printf("\t║  Total Seats: %-28d ║\n", totalSeats);
    printf("\t║  Booked Seats: %-27d ║\n", totalBooked);
    printf("\t║  Overall Occupancy: %-20.2f%% ║\n", overallOccupancy);
    printf("\t╚═══════════════════════════════════════════╝\n");

    pauseScreen();
}

void saveData() {
    FILE *fp;

    fp = fopen("buses.dat", "wb");
    if(fp != NULL) {
        fwrite(&busCount, sizeof(int), 1, fp);
        fwrite(buses, sizeof(Bus), busCount, fp);
        fclose(fp);
    }

    fp = fopen("bookings.dat", "wb");
    if(fp != NULL) {
        fwrite(&bookingCount, sizeof(int), 1, fp);
        fwrite(bookings, sizeof(Booking), bookingCount, fp);
        fclose(fp);
    }

    fp = fopen("routes.dat", "wb");
    if(fp != NULL) {
        fwrite(&routeCount, sizeof(int), 1, fp);
        fwrite(routes, sizeof(Route), routeCount, fp);
        fclose(fp);
    }
}

void loadData() {
    FILE *fp;

    fp = fopen("buses.dat", "rb");
    if(fp != NULL) {
        if(fread(&busCount, sizeof(int), 1, fp) == 1) {
            fread(buses, sizeof(Bus), busCount, fp);
        }
        fclose(fp);
    }

    fp = fopen("bookings.dat", "rb");
    if(fp != NULL) {
        if(fread(&bookingCount, sizeof(int), 1, fp) == 1) {
            fread(bookings, sizeof(Booking), bookingCount, fp);
        }
        fclose(fp);
    }

    fp = fopen("routes.dat", "rb");
    if(fp != NULL) {
        if(fread(&routeCount, sizeof(int), 1, fp) == 1) {
            fread(routes, sizeof(Route), routeCount, fp);
        }
        fclose(fp);
    }
}

void dynamicPricing(Bus* bus) {
    // Thi()
}

void adminMenu() {
    // This func
}

void userMenu() {
   //nu()
}