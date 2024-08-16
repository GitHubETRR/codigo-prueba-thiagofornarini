Algoritmo Tp_diagrama_de_flujo
	Escribir 'Ingrese el programa que necesita'
	Escribir '(1) - forma cartesiana'
	Escribir '(2) - forma polar'
	Escribir '(3) - suma de numeros complejos y resultado a gusto'
	Escribir '(4) - calculadora de resistencia y capacitor o inductor'
	Escribir '(5) - calculadora de resistencia y capacitor o inductor pero ingresando el modulo y el angulo'
	Leer programa
	Segun programa  Hacer
		1:
			programa_1()
		2:
			programa_2()
		3:
			programa_3()
		4:
			programa_4()
		5:
			programa_5()
		De Otro Modo:
			Escribir '¿usted es tonto?'
	FinSegun
FinAlgoritmo

Funcion programa_1()
	Escribir 'Elegiste forma cartesiana'
	Escribir '¿Cuanto vale a?'
	Leer a
	Escribir '¿Cuanto vale b?'
	Leer b
	Si a<0 Entonces
		Si b>0 Entonces
			ANGULO <- 180+ATAN(b/a)*(180/pi)
		SiNo
			ANGULO <- 270-ATAN(b/a)*(180/pi)
		FinSi
	SiNo
		Si b<0 Entonces
			ANGULO <- 360+ATAN(b/a)*(180/pi)
		SiNo
			ANGULO <- ATAN(b/a)*(180/pi)
		FinSi
	FinSi
	MODULO <- Raiz(a*a+b*b)
	Escribir 'El valor del angulo es: ',ANGULO
	Escribir 'Y el valor del modulo es: ',MODULO
FinFuncion

Funcion programa_2()
	Escribir 'elejiste forma polar'
	Escribir '¿Cuanto vale h?'
	Leer h
	Escribir '¿Cuanto vale a?'
	Leer a
	ejex <- COS(a/180*pi)*h
	ejey <- SEN(a/180*pi)*h
	Escribir 'Su numero en forma rectangular es ',ejex,' + ',ejey,'j'
FinFuncion

Funcion programa_3()
	Escribir 'Elegiste la suma de numeros complejos'
	Escribir 'a1+bj1+a2+bj2'
	Escribir 'ingrese el valor de a1'
	Leer a1
	Escribir 'ingrese el valor de bj1'
	Leer b1
	Escribir 'ingrese el valor de a2'
	Leer a2
	Escribir 'ingrese el valor de bj2'
	Leer b2
	a <- a1+a2
	bj <- b1+b2
	Escribir 'Elije la forma en la que quiere expresar su reusltado'
	Escribir 'Forma rectangular(1) - Forma polar (2)'
	Leer forma
	Segun forma  Hacer
		1:
			Escribir 'El resutado de la suma es=',a,'+',bj,'j'
		2:
			Si a<0 Entonces
				Si bj>0 Entonces
					ang <- 180+ATAN(bj/a)*(180/pi)
				SiNo
					ang <- 270-ATAN(bj/a)*(180/pi)
				FinSi
			SiNo
				Si bj<0 Entonces
					ang <- 360+ATAN(bj/a)*(180/pi)
				SiNo
					ang <- ATAN(bj/a)*(180/pi)
				FinSi
			FinSi
			modd <- Raiz(a*a+bj*bj)
			Escribir 'El valor del aungulo es: ', ang
			Escribir 'El valor del modulo es: ', modd
		De Otro Modo:
			Escribir 'no hay'
	FinSegun
FinFuncion

Funcion programa_4()
	Escribir 'ingrese la impedancia deseada, primero parte real y segundo parte imagianaria'
	Leer P_R
	Leer P_I
	Escribir 'Ingrese la Frecuencia'
	Leer F
	Si P_I=0 Entonces
		Escribir 'Su circuito es completamente resistivo, R= ',P_R
	SiNo
		Si P_I>0 Entonces
			L <- P_I/(2*pi*F)
			Escribir 'Su resistencia es ',P_R,' y su inductancia ',L,'H'
		SiNo
			C <- 1/(2*pi*F*P_I)
			Escribir 'Su resistencia es ',P_R,' y su inductancia es ',abs(C),'F'
		FinSi
	FinSi
FinFuncion

Funcion modz = punt()
	Escribir 'ingrese modulo de la tension'
	Leer mV
	Escribir 'ingrese el modulo de la corriente'
	Leer mI
	modz <- mV/mI
FinFuncion

Funcion angz = puntt()
	Escribir 'ingrese el angulo de la corriente'
	Leer aI
	Escribir 'ingrese el angulo de la tension'
	Leer aV
	angz <- aV-aI
FinFuncion

Funcion ba(angz,modz)
	ejex <- COS(angz/180*pi)*modz
	ejey <- SEN(angz/180*pi)*modz
	Escribir 'Ingrese la Frecuencia'
	Leer F
	Si ejey=0 Entonces
		Escribir 'Su circuito es completamente resistivo, R= ',ejex
	SiNo
		Si ejey>0 Entonces
			L <- ejey*(2*pi*F)
			Escribir 'Su resistencia es ',ejex,' y su inductancia ',L,'H'
		SiNo
			C <- 1/(2*pi*F*ejey)
			Escribir 'Su resistencia es ',ejex,' y su capacitancia es ',abs(C),'F'
		FinSi
	FinSi
FinFuncion

Funcion programa_5()
	modz <- punt()
	angz <- puntt()
	ba(angz,modz)
FinFuncion
