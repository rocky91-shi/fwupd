ACPI WPBT
=========

Introduction
------------

This plugin checks if the WPBT table has been exported. Although unused by
Linux, Microsoft Windows will unconditionally execute the EXE file specified by
the WPBT table. WPBT should be disabled in the firmware setup menu, and it
certainly should not be enabled by default at the factory.

This is used by CompuTrace for legitimate hardware recovery and less commonly
to install OEM-specific drivers and utilities on a "clean" windows tool.

The result will be stored in a security attribute for HSI.
