#include <avr/io.h>
#include <util/delay.h>

// Control pins
#define RS PB0
#define EN PB1
#define LCD_CTRL PORTB

// Data pins (D4-D7)
#define LCD_DATA PORTA

void lcd_cmd(unsigned char cmd){
    // Send high nibble
    LCD_DATA = (LCD_DATA & 0xF0) | (cmd >> 4);
    LCD_CTRL &= ~(1<<RS);
    LCD_CTRL |= (1<<EN);
    _delay_ms(1);
    LCD_CTRL &= ~(1<<EN);

    // Send low nibble
    LCD_DATA = (LCD_DATA & 0xF0) | (cmd & 0x0F);
    LCD_CTRL &= ~(1<<RS);
    LCD_CTRL |= (1<<EN);
    _delay_ms(1);
    LCD_CTRL &= ~(1<<EN);

    _delay_ms(2);
}

void lcd_data(unsigned char data){
    // Send high nibble
    LCD_DATA = (LCD_DATA & 0xF0) | (data >> 4);
    LCD_CTRL |= (1<<RS);
    LCD_CTRL |= (1<<EN);
    _delay_ms(1);
    LCD_CTRL &= ~(1<<EN);

    // Send low nibble
    LCD_DATA = (LCD_DATA & 0xF0) | (data & 0x0F);
    LCD_CTRL |= (1<<RS);
    LCD_CTRL |= (1<<EN);
    _delay_ms(1);
    LCD_CTRL &= ~(1<<EN);

    _delay_ms(2);
}

void lcd_init(){
    DDRA = 0x0F;   // PA0-PA3 as output for data
    DDRB = 0x03;   // PB0, PB1 as output for control

    _delay_ms(20);
    lcd_cmd(0x28); // 4-bit, 2-line, 5x8 font
    lcd_cmd(0x0C); // Display ON, cursor OFF
    lcd_cmd(0x06); // Auto increment cursor
    lcd_cmd(0x01); // Clear display
}

int main(void){
    lcd_init();
    lcd_data('H');
    lcd_data('E');
    lcd_data('L');
    lcd_data('L');
    lcd_data('O');

    while(1);
}
