#Elektroniczny dziennik medyczny

*Serwis wspomagający komunikację lekarzy z pacjentami chorymi na cukrzycę lub nadciśnienie*

System zostanie zrealizowany w celu zapewnienia **elektronicznej bazy wyników**, która jest zdecydowanie wygodniejsza niż tradycyjny zapis w zeszytach i umożliwia błyskawiczne wyszukiwanie danych według dowolnych filtrów.
Drugim celem jest **przyspieszenie komunikacji** pomiędzy **pacjentami i lekarzami** prowadzącymi oraz **zmniejszenie częstotliwości wizyt** pacjentów u lekarza - co jest uciążliwe dla osób starszych, dla których zdrowie utrudnia udanie się do szpitala i powoduje długie kolejki oczekiwania na wizytę,
￼
## Projekt struktury
Lekarz <-> Baza danych <-> API <-> Serwer <-> Klient

## Ogólna zasada działania
Po zdiagnozowaniu choroby przez lekarza wprowadza on przez swoją aplikację stacjonarną nowego pacjenta. System generuje dla niego login i hasło. Następnie lekarz instaluje na urządzeniu mobilnym pacjenta aplikację i odpowiednio ją konfiguruje (adres IP, login i hasło).

Pacjent wykonuje pomiary swoim urządzeniem i wprowadza wyniki do aplikacji. Wyniki zostają automatycznie wysłane (lub oczekują na połączenie z internetem) do bazy danych w szpitalu, skąd aplikacja lekarza pobiera dane.

## Aplikacja dla pacjentów (mobilna - iOS)
### Funkcjonalność:
- Logowanie do systemu
- Zapis danych do logowania w systemowym menadżerze haseł
- Wprowadzanie wyniku pomiaru do bazy danych (edycja tylko ostatniego pomiaru)
- Przeglądanie własnych wyników z zadanego okresu czasu (wykresy)
- Synchronizacja bazy z lokalną w placówce medycznej
- Wysyłanie komunikatów do lekarza 
- Przypomnienie o niewysłaniu danych (np. brak połączenia)
- Prezentacja danych o lekarzu prowadzącym (imię, nazwisko, telefon, e-mail)
- Prezentacja i edycja własnych danych osobowych (imię, nazwisko, telefon, adres, e-mail)
- Przypomnienia o konieczności wykonaniu pomiaru (integracja z systemową aplikacją “Przypomnienia”)
- *(Opcjonalne)* Kalkulator posiłków (na podstawie produktów w bazie danych)

### Wymagania
- Wsparcie dla osób słabowidzących:
 - Prosty w obsłudze i estetyczny interfejs graficzny
 - Duże napisy i ikony
- Integracja z systemowym syntezatorem mowy
- Płynne i szybkie działanie, aby aplikacja nie zniechęcała do użytkowania (wielowątkowość)
- Realizacja komunikacji przez internet z wykorzystaniem HTTPS