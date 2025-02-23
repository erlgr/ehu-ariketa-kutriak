n: .word -5

main:
  push {r11, lr}
  mov r11, sp
  push {r0, r1} @erabiltzen diren erregistroak
  ldr r0, n
  ldr r0, [n]
  adr r1, n
  cmp r0, #0
  bge ena_pos
  bl neg
buk:
  pop{r0, r1, r11, pc} @programaren amaiera

ena_pos:
  bl pos
  b buk

pos:
  push{r11, pc}
  mov r11, sp
  add r0, r0, #1
  pop{lr}

  
neg:
  push{r11, lr}
  mov r11, sp
  sub r1, r1, #1
  pop{lr}

