#include "main.h"

void main() {
   setup_adc_ports(NO_ANALOGS|VSS_VDD);
   setup_adc(ADC_CLOCK_DIV_2);
   setup_psp(PSP_DISABLED);
   setup_spi(SPI_SS_DISABLED);
   setup_wdt(WDT_OFF);
   setup_timer_0(RTCC_INTERNAL);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_timer_3(T3_DISABLED|T3_DIV_BY_1);
   setup_comparator(NC_NC_NC_NC);
   setup_vref(FALSE);

   while(true) {
      //Ativa Linha 1
      output_high(PIN_B0);
      output_low(PIN_B1);
      output_low(PIN_B2);
      output_low(PIN_B3);
      if(input_state(PIN_B4)) output_d(1);
      else if(input_state(PIN_B5)) output_d(2);
      else if(input_state(PIN_B6)) output_d(3);
      //Ativa Linha 2
      output_low(PIN_B0);
      output_high(PIN_B1);
      output_low(PIN_B2);
      output_low(PIN_B3);
      if(input_state(PIN_B4)) output_d(4);
      else if(input_state(PIN_B5)) output_d(5);
      else if(input_state(PIN_B6)) output_d(6);
      //Ativa Linha 3
      output_low(PIN_B0);
      output_low(PIN_B1);
      output_high(PIN_B2);
      output_low(PIN_B3);
      if(input_state(PIN_B4)) output_d(7);
      else if(input_state(PIN_B5)) output_d(8);
      else if(input_state(PIN_B6)) output_d(9);
      //Ativa Linha 4
      output_low(PIN_B0);
      output_low(PIN_B1);
      output_low(PIN_B2);
      output_high(PIN_B3);
      if(input_state(PIN_B4)) output_d(12);
      else if(input_state(PIN_B5)) output_d(0);
      else if(input_state(PIN_B6)) output_d(10);
      delay_ms(100);
   }
}
