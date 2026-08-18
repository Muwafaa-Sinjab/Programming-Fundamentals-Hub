#pragma once
#include <iostream>
#include <queue>
#include <stack>
#include "clsDate.h"
using namespace std;

class clsQueueLine
{
private:

    string _Prefix;
    int _ServiceTime;
    int _TotalTickets = 0;

    class clsTicket
    {
    private:

        string _TicketNumber;
        string _DateTime;
        int _WaitingClients;
        int _ServiceTime;

    public:

        clsTicket(
            string Prefix,
            int TicketNumber,
            int WaitingClients,
            int ServiceTime)
        {
            _TicketNumber = Prefix + to_string(TicketNumber);
            _DateTime = clsDate::GetSystemDataTimeString();
            _WaitingClients = WaitingClients;
            _ServiceTime = ServiceTime;
        }

        string TicketNumber() const
        {
            return _TicketNumber;
        }

        string DateTime() const
        {
            return _DateTime;
        }

        int WaitingClients() const
        {
            return _WaitingClients;
        }

        int ExpectedServeTime() const
        {
            return _WaitingClients * _ServiceTime;
        }

        string FullNumber() const
        {
            return _TicketNumber;
        }

        void Print() const
        {
            cout << "\n------------------------------";
            cout << "\nTicket: " << _TicketNumber;
            cout << "\nDate/Time: " << _DateTime;
            cout << "\nWaiting Clients: " << _WaitingClients;
            cout << "\nExpected Serve Time: "
                 << ExpectedServeTime()
                 << " Minutes";
            cout << "\n------------------------------\n";
        }
    };

    queue<clsTicket> _queTickets;

    int ServedClients() const
    {
        return _TotalTickets - _queTickets.size();
    }

    int WaitingClients() const
    {
        return _queTickets.size();
    }

public:

    clsQueueLine(string Prefix, int ServiceTime)
    {
        _Prefix = Prefix;
        _ServiceTime = ServiceTime;
    }

    void IssueTicket()
    {
        _TotalTickets++;

        clsTicket NewTicket(
            _Prefix,
            _TotalTickets,
            WaitingClients(),
            _ServiceTime
        );

        _queTickets.push(NewTicket);
    }

    bool ServeNextClient()
    {
        if (_queTickets.empty())
            return false;

        _queTickets.pop();

        return true;
    }

    string WhoIsNext() const
    {
        if (_queTickets.empty())
            return "No Clients Left.";

        return _queTickets.front().TicketNumber();
    }

    void PrintInfo() const
    {
        cout << "\n_________________________";
        cout << "\n        Queue Info";
        cout << "\n_________________________";

        cout << "\n        Prefix = " << _Prefix;
        cout << "\n        Total Tickets = " << _TotalTickets;
        cout << "\n        Served Clients = " << ServedClients();
        cout << "\n        Waiting Clients = " << WaitingClients();

        cout << "\n_________________________\n";
    }

    void PrintTicketsLineRTL()
    {
        cout << "\nTickets: ";

        if (_queTickets.empty())
        {
            cout << "No Tickets.";
            return;
        }

        queue<clsTicket> TempQueue = _queTickets;

        while (!TempQueue.empty())
        {
            clsTicket CurrentTicket = TempQueue.front();

            cout << CurrentTicket.TicketNumber()
                 << " <-- ";

            TempQueue.pop();
        }

        cout << "\n";
    }

    void PrintTicketsLineLTR()
    {
        cout << "\nTickets: ";

        if (_queTickets.empty())
        {
            cout << "No Tickets.";
            return;
        }

        queue<clsTicket> TempQueue = _queTickets;
        stack<clsTicket> TempStack;

        while (!TempQueue.empty())
        {
            TempStack.push(TempQueue.front());
            TempQueue.pop();
        }

        while (!TempStack.empty())
        {
            clsTicket CurrentTicket = TempStack.top();

            cout << CurrentTicket.TicketNumber()
                 << " --> ";

            TempStack.pop();
        }

        cout << "\n";
    }

    void PrintAllTickets()
    {
        cout << "\n\n        --- Tickets ---\n";

        if (_queTickets.empty())
        {
            cout << "\n        --- No Tickets ---\n";
            return;
        }

        queue<clsTicket> TempQueue = _queTickets;

        while (!TempQueue.empty())
        {
            TempQueue.front().Print();
            TempQueue.pop();
        }
    }
};