# Payroll_Management

Payroll system

## Description

- This project is for a company who need to check up their employee attendance, overtime work,
- It helps user to get their income, how much their salary have reduce and how much they make

## Features

- Search by ID
- Sort by most & least attendance
- Manage employee attendance in month
- calculate overtime work and reduction
- Calcuate final salary
- Calculate tax that we need to pay to the government
- Dipslay'
- Store and Get data from .csv file (excel,...)

## Tech Stack / Requirements

- C++
- g++ compiler

## Project Structure

```
payroll_system/
├── Data/
│   ├── attendance.csv
│   ├── employee_list.csv
│   ├── final_salary.csv
│   ├── tax_filling_history.csv
│   ├── tax_information.csv
│   └── tax_report.csv
├── src/
│   ├── Components/
│   │   ├── IO/
│   │   │   ├── read_CSV.h
│   │   │   └── write_CSV.h
│   │   ├── pay_schedule/
│   │   │   ├── pay_schedule.cpp
│   │   │   └── pay_schedule.h
│   │   ├── searching/
│   │   │   └── search_by_id.h
│   │   ├── sorting/
│   │   │   ├── sort_by_least_attendance.h
│   │   │   ├── sort_by_most_attendance.h
│   │   │   └── swap.h
│   │   ├── tax_and_reduction/
|   |   |   ├── calculate_total_salary.h
│   │   │   ├── calculate_reduction.h
│   │   │   ├── salary_after_deduction.h
│   │   │   └── tax_information.h
│   │   ├── tax_filling_history/
|   |   |   ├──
│   │   └── track_time_attendance/
│   │       ├── attendance_record.h
│   │       ├── update_attendance.h
│   │       └── display_all_data.h
│   ├── container/
│   │   ├── record.h
│   │   ├── salary.h
│   │   ├── search.h
│   │   ├── sort.h
│   │   └── tax_information.h
│   ├── Model/
│   │   ├── create_new_employee.h
│   │   └── structure.h
│   └── utils/
│       └── calculate_utils.h
├── main.cpp
├── system_design.pdf
└── README.md
```

