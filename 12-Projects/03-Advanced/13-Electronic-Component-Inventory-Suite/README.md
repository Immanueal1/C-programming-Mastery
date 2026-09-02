# Electronic Component Inventory Suite

**Difficulty**: Advanced  
**Project Type**: Record Management / Electronics  
**Estimated Time**: 6 - 8 hours  

## Objective
Build a hardware component inventory system tracking IC specs, supplier prices, and HTML catalog export.

## Problem Statement
Develop an engineering component management suite designed for electronics labs that tracks component specifications (part number, category, package footprint, quantity, unit price, datasheet URL), generates reorder reports, and exports HTML product catalogs.

## Why Build This?
Combines domain-specific hardware struct modeling, multi-field searching, inventory valuation calculations, and HTML catalog exporting.

## Concepts Used
- Dynamic Struct Arrays
- Multi-Field Search & Filter
- File Export Engines (HTML)
- Defensive Input Sanitization

## Prerequisites
Chapter 08 (Strings), Chapter 09 (Structures), Chapter 10 (File I/O), Chapter 11 (Dynamic Memory).

## Requirements
- **Requirement 1**: Define `struct Component` (part_num, category, footprint, stock, price, datasheet_url).
- **Requirement 2**: Implement search by category (e.g. 'Microcontroller', 'Resistor', 'OpAmp') and footprint.
- **Requirement 3**: Compute total inventory valuation summary.
- **Requirement 4**: Export styled HTML component catalog (`catalog.html`).

## Functional Requirements
- **Input**: Component specifications, search criteria.
- **Output**: Search queries, low-stock reports, generated HTML catalog file.
- **Validation**: Ensure part number uniqueness. Validate positive stock quantities.
- **Edge Cases**: Part number search not found.
HTML export with 0 components.
Datasheet URL containing special characters.

## Suggested Program Structure
```text
13-Electronic-Component-Inventory-Suite/
├── README.md
├── src/
│   ├── main.c
│   ├── component_db.c
│   └── component_db.h
└── tests/
    └── test_component_db.c
```

## Suggested Functions
- `int component_add(const struct Component *comp);`
- `int component_search_category(const char *cat, struct Component *out_list[], int *out_count);`
- `double component_total_valuation();`
- `int component_export_html_catalog(const char *filename);`

## Data Structures
```c
struct Component { char part_num[32]; char category[32]; char footprint[16]; int stock; double price; char datasheet_url[128]; };
struct ComponentDB { struct Component *items; size_t count; size_t capacity; };
```

## File Handling
Read/write component database binary file and export styled HTML catalog.

## Memory Considerations
Dynamic array expansion with `realloc` and cleanup with `free`.

## Error Handling
Return status codes for DB_FULL, PART_NOT_FOUND.

## Testing Checklist
- [ ] Verify adding components updates inventory count and dynamic array capacity.
- [ ] Verify search by category returns matching components only.
- [ ] Verify total valuation equals sum of (stock * price) across all items.

## Expected Learning Outcomes
- Modeling domain-specific engineering data structures.
- Building automated HTML document generators from C databases.

## Industry Relevance
Directly applicable to hardware engineering labs, PCB assembly inventory, and component management.

## Interview Relevance
Complex struct array modeling and data processing interview prompt.

## Portfolio Value
High quality hardware engineering application for GitHub portfolio showcase.

## Builds On
- Chapter 12 / Medium Project 06 (Warehouse-Inventory-Tracker) - Adds supplier metadata, electronic component specifications, and HTML catalog rendering.

## Hints
- **Hint 1**: Hint 1: Use strcasestr or tolower conversion for case-insensitive category searching.
- **Hint 2**: Hint 2: Calculate total valuation in a loop: total += items[i].stock * items[i].price.
- **Hint 3**: Hint 3: Hyperlink datasheet URLs in HTML output using <a href="...">Datasheet</a>.

## Optional Extensions
- Add DigiKey / Mouser API CSV importer.
- Add PCB bill-of-materials (BOM) checker.

## Completion Criteria
- Tracks electronic components, computes total inventory valuation, and exports styled HTML component catalog.
