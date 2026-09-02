# Warehouse Inventory Tracker

**Difficulty**: Medium  
**Project Type**: Record Management  
**Estimated Time**: 4 - 5 hours  

## Objective
Track warehouse inventory items, alert low stock, search by SKU, and persist inventory state.

## Problem Statement
Develop an inventory management application for a warehouse that tracks stock items (SKU, product name, quantity, unit price, reorder threshold), alerts when stock falls below reorder level, and saves state to file.

## Why Build This?
Provides practice with SKU searching, threshold alerts, struct array manipulation, and persistent file management.

## Concepts Used
- Struct Arrays
- Search Algorithms (Linear/Binary Search)
- File I/O
- Input Validation

## Prerequisites
Chapter 07 (Arrays), Chapter 09 (Structures), Chapter 10 (File I/O).

## Requirements
- **Requirement 1**: Define `struct InventoryItem` (sku, name, qty, price, reorder_level).
- **Requirement 2**: Implement search by SKU or product name.
- **Requirement 3**: Generate low-stock alert report for items where qty <= reorder_level.
- **Requirement 4**: Save inventory state to inventory.csv and load on launch.

## Functional Requirements
- **Input**: SKU, product details, stock adjustment quantities.
- **Output**: Stock levels, low-stock alerts, CSV inventory report.
- **Validation**: Ensure SKU is unique. Reject negative stock quantities.
- **Edge Cases**: Stock item quantity reaching 0.
Duplicate SKU registration attempt.
CSV file format corruption.

## Suggested Program Structure
```text
06-Warehouse-Inventory-Tracker/
├── README.md
├── src/
│   ├── main.c
│   ├── inventory.c
│   └── inventory.h
└── tests/
    └── test_inventory.c
```

## Suggested Functions
- `int add_item(const char *sku, const char *name, int qty, double price, int reorder);`
- `struct InventoryItem* find_by_sku(const char *sku);`
- `void generate_low_stock_report();`
- `int save_inventory_csv(const char *filename);`

## Data Structures
```c
struct InventoryItem { char sku[16]; char name[64]; int qty; double price; int reorder_level; };
```

## File Handling
Read and write CSV inventory files using fprintf and fscanf/fgets.

## Memory Considerations
Static struct array storage (max 200 items).

## Error Handling
Return error status when inventory limit is reached or item SKU is missing.

## Testing Checklist
- [ ] Verify searching for existing SKU returns correct product details.
- [ ] Verify low-stock report lists only items at or below reorder level.
- [ ] Verify CSV export correctly formats item records.

## Expected Learning Outcomes
- Building business inventory data models.
- Implementing searching and reporting functions on struct arrays.

## Industry Relevance
Directly applicable to supply chain, retail, and warehouse management software.

## Interview Relevance
Standard system design and record management coding challenge.

## Portfolio Value
Practical business application showcasing struct arrays and CSV persistence.

## Builds On
- Chapter 09 / Project 02 (employee_roster) - Adds SKU searching, reorder quantity alerts, and binary/text file persistence.

## Hints
- **Hint 1**: Hint 1: Use strcmp to match SKU strings in search functions.
- **Hint 2**: Hint 2: Keep inventory array count variable to track current item count.
- **Hint 3**: Hint 3: Format CSV rows with commas: SKU,Name,Qty,Price,ReorderLevel.

## Optional Extensions
- Add stock movement audit history log.
- Add price total valuation summary.

## Completion Criteria
- Performs fast SKU lookups, flags low-stock items correctly, and loads/saves CSV data accurately.
