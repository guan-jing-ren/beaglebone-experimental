SECTIONS {
    . = 0;
    .data : { *(.data) }
    . = .;
    .text : { *(.text) }
    . = 0x4030B800;
    /DISCARD/ : { *(.*) }
}