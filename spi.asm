include 'ti84pceg.inc'

section .data

;   DEFINES
ti.WaitShort = 00003B4h
ti.WaitLong  = 00003B8h

pSpiRange    = 0D000h
mpSpiRange   = 0F80000h
spiValid     = 8
pSpiValid    = pSpiRange + spiValid
mpSpiValid   = mpSpiRange + spiValid
spiStatus    = 12
pSpiStatus   = pSpiRange + spiStatus
mpSpiStatus  = mpSpiRange + spiStatus
spiData      = 24
pSpiData     = pSpiRange + spiData
mpSpiData    = mpSpiRange + spiData

lcd          = ti.vRam + 8
lcd.width    = ti.lcdWidth
lcd.height   = ti.lcdHeight
lcd.size     = lcd.width * lcd.height

;macro spi cmd, params&
;	ld	a, cmd
;	call	spiCmd
;	match any, params
;		iterate param, any
;			ld	a, param
;			call	spiParam
;		end iterate
;	end match
;end macro
;;   END DEFINES
;;Jacobly's SPI stuff
;	;;;;;Jacobly's stuff

public spiParam
spiParam:
	scf
	virtual
		jr	nc, $
		load .jr_nc : byte from $$
	end virtual
	db	.jr_nc
public spiCmd
spiCmd:
	or	a, a
	ld	hl, mpSpiData or spiValid shl 8
	ld	b, 3
.loop:	rla
	rla
	rla
	ld	(hl), a
	djnz	.loop
	ld	l, h
	ld	(hl), 1
.wait:	ld	l, spiStatus + 1
.wait1:	ld	a, (hl)
	and	a, $f0
	jr	nz, .wait1
	dec	l
.wait2:	bit	2, (hl)
	jr	nz, .wait2
	ld	l, h
	ld	(hl), a
	ret