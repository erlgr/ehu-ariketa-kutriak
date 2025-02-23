n: .word -5

main:
  push {r11, lr}
  mov r11, sp
  push {r0, r1}
  ldr r0, n
  ldr r0, [n]
  adr r1, n
  cmp r0, #0
  bge ena_pos
  bl neg
buk:
  @programaren amaiera
  pop{r0, r1, r11, pc}

ena_pos:
  bl pos
  b buk

pos:
  @ aaaa
  push{r11, pc}
  mov r11, sp
  @...
  pop{lr}

  
neg:
  @ bbbbb
  push{r11, lr}
  pop{lr}

