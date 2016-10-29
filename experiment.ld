OUTPUT_FORMAT(binary)

SECTIONS {
    . = 0;
    .data : { *(.data) }
    . = .;
    .text : { *(.text) }
    /DISCARD/ : { *(.*) }
}