# Design of Magneto-Rheological (MR) Damper for Aircraft Landing Gear (Jan–May 2023)

Designed and analyzed a magneto-rheological (MR) fluid shock absorber concept for aircraft landing gear to improve controllable damping response versus conventional hydraulic dampers.

## Tools
- AutoCAD (3D CAD modeling)
- ANSYS Workbench (Static Structural)
- ANSYS Fluent (MR fluid behavior + UDF material model)
- C (Fluent UDF)

## What I did
- Built a 3D CAD model of the shock absorber in AutoCAD (piston, cylinder, spring) and generated the solid using extrusion.
- Ran static structural analysis in ANSYS Workbench to evaluate deformation/stress under a representative applied load.
- Studied MR fluid behavior (off/on magnetic field states) and implemented a Fluent UDF for viscosity modeling.

## CAD Model (key dimensions)
| Parameter | Value |
|---|---:|
| Piston head | 55 mm |
| Length of piston head | 30 mm |
| Length of piston rod | 150 mm |
| Height of cylinder | 132 mm |
| Outer diameter of cylinder | 57 mm |
| Thickness of cylinder | 1 mm |

## Structural Analysis (ANSYS)
- Analysis type: Static Structural
- Applied load used in the report: 5437 kN
- Outputs reviewed: total deformation, equivalent strain, equivalent stress

## MR Fluid Notes (from literature summary)
- Off-state viscosity range noted: ~0.1 to 1 Pa·s (ambient conditions)
- On-state yield stress values noted: typical ~20 to 1000 kPa; viscosity can increase orders of magnitude with field

## Fluent UDF
A user-defined material model was implemented for MR-fluid-inspired viscosity behavior using a yield-stress relationship driven by magnetic field input.

See: `udf/Bingham_viscosity_udf.c`

## Repo Structure
- `docs/` – project report and documentation
- `cad/` – CAD files / screenshots
- `ansys/` – simulation setup + results screenshots
- `udf/` – Fluent UDF code
- `media/` – images used in this README

## Credits
Team project (B.E. Aerospace Engineering, 2022–23).
