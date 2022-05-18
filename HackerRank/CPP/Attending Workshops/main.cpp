#include <bits/stdc++.h>

using namespace std;

// Define the structs Workshops and Available_Workshops.
// Implement the functions initialize and CalculateMaxWorkshops

struct Workshop
{
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops
{
    int n;
    vector<Workshop> workshops;
};

Available_Workshops *initialize(int start_time[], int duration[], int n)
{
    Available_Workshops *aw{new Available_Workshops};
    aw->n = n;

    for (int i = 0; i < n; i++)
    {
        Workshop w;
        w.start_time = start_time[i];
        w.duration = duration[i];
        w.end_time = w.start_time + w.duration;
        aw->workshops.push_back(w);
    }

    return aw;
}

bool compare_workshops(Workshop &w1, Workshop &w2)
{
    return w1.end_time - w2.end_time > 0;
}

int CalculateMaxWorkshops(Available_Workshops *ptr)
{
    vector<Workshop> workshops = ptr->workshops;
    sort(workshops.begin(), workshops.end(), compare_workshops);

    int total{0};
    while (workshops.size())
    {
        ++total;
        int end_time = workshops.back().end_time;
        bool overlap{true};
        while (workshops.size() && overlap)
        {
            workshops.pop_back();
            if (workshops.back().start_time >= end_time)
            {
                overlap = false;
            }
        }
    }

    return total;
}
int main(int argc, char *argv[])
{
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int *start_time = new int[n];
    int *duration = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> start_time[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> duration[i];
    }

    Available_Workshops *ptr;
    ptr = initialize(start_time, duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
