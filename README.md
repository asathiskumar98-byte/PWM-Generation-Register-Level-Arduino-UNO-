# 💡 PWM Generation — Register-Level (Arduino UNO)

This project demonstrates **Pulse Width Modulation (PWM)** using **Timer1** of the **ATmega328P (Arduino UNO)** — entirely through **register-level programming**, no Arduino functions involved.

---

## ⚙️ Hardware Used
- Arduino UNO (ATmega328P)
- LED connected to pin **D9 (OC1A)**
- 220Ω current-limiting resistor

---

## 🔌 Pin Configuration

| Component | Function | Arduino Pin | Port |
|------------|-----------|--------------|------|
| LED | PWM Output | D9 | PB1 (OC1A) |
| VCC | Power | +5V | — |
| GND | Ground | GND | — |

---

## 🧩 Code Explanation

### Registers Used
| Register | Purpose |
|-----------|----------|
| **TCCR1A** | Controls PWM mode and output behavior |
| **TCCR1B** | Sets waveform generation mode and prescaler |
| **OCR1A** | Output Compare Register (sets duty cycle) |
| **DDRB** | Configures PB1 as output |

### PWM Configuration
- **Mode:** Fast PWM (10-bit resolution)  
- **Output:** Non-inverting mode  
- **Prescaler:** 64  
- **PWM Frequency:** ~250 kHz  
- **Output Pin:** OC1A (PB1 → Arduino D9)

---

## ⚙️ Working Principle
1. Timer1 generates a **PWM signal** at OC1A pin.  
2. The **duty cycle** is adjusted from 0 → 100% → 0 in a smooth fade loop.  
3. LED brightness increases and decreases continuously.

---

## 🧰 Build & Upload
1. Compile using **AVR-GCC / Atmel Studio / PlatformIO**.  
2. Flash the HEX file to **Arduino UNO**.  
3. Observe the LED brightness fading up and down using hardware PWM.
