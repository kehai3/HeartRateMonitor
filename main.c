/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include <stdio.h>

int returnTime = 0;


void print_int(resultsHRM){
    char output_string[20];
    sprintf(output_string, "%d\n", resultsHRM);
    UART_PutString(output_string);
}
        
void print_float(float resultsHRM){
    char output_string[200];
    sprintf(output_string, "%.6f\n", resultsHRM);
    UART_PutString (output_string);
}
        
        

void setSeg(int num, int didgit, int point)
{
    
    if (num == 0)
    {
        Seg_A_Write(0);
        Seg_B_Write(0);
        Seg_C_Write(0);
        Seg_D_Write(0);
        Seg_E_Write(0);
        Seg_F_Write(0);
        Seg_G_Write(1);
        Seg_P_Write(1);
    }
    else if (num == 1)
    {
        Seg_A_Write(1);
        Seg_B_Write(0);
        Seg_C_Write(0);
        Seg_D_Write(1);
        Seg_E_Write(1);
        Seg_F_Write(1);
        Seg_G_Write(1);
        Seg_P_Write(1);
    }
    else if (num == 2)
    {
        Seg_A_Write(0);
        Seg_B_Write(0);
        Seg_C_Write(1);
        Seg_D_Write(0);
        Seg_E_Write(0);
        Seg_F_Write(1);
        Seg_G_Write(0);
        Seg_P_Write(1);
    }
    else if (num == 3)
    {
        Seg_A_Write(0);
        Seg_B_Write(0);
        Seg_C_Write(0);
        Seg_D_Write(0);
        Seg_E_Write(1);
        Seg_F_Write(1);
        Seg_G_Write(0);
        Seg_P_Write(1);
    }
    else if (num == 4)
    {
        Seg_A_Write(1);
        Seg_B_Write(0);
        Seg_C_Write(0);
        Seg_D_Write(1);
        Seg_E_Write(1);
        Seg_F_Write(0);
        Seg_G_Write(0);
        Seg_P_Write(1);
    }
    else if (num == 5)
    {
        Seg_A_Write(0);
        Seg_B_Write(1);
        Seg_C_Write(0);
        Seg_D_Write(0);
        Seg_E_Write(1);
        Seg_F_Write(0);
        Seg_G_Write(0);
        Seg_P_Write(1);
    }
    else if (num == 6)
    {
        Seg_A_Write(0);
        Seg_B_Write(1);
        Seg_C_Write(0);
        Seg_D_Write(0);
        Seg_E_Write(0);
        Seg_F_Write(0);
        Seg_G_Write(0);
        Seg_P_Write(1);
    }
    else if (num == 7)
    {
        Seg_A_Write(0);
        Seg_B_Write(0);
        Seg_C_Write(0);
        Seg_D_Write(1);
        Seg_E_Write(1);
        Seg_F_Write(1);
        Seg_G_Write(1);
        Seg_P_Write(1);
    }
    else if (num == 8)
    {
        Seg_A_Write(0);
        Seg_B_Write(0);
        Seg_C_Write(0);
        Seg_D_Write(0);
        Seg_E_Write(0);
        Seg_F_Write(0);
        Seg_G_Write(0);
        Seg_P_Write(1);
    }
    else if (num == 9)
    {
        Seg_A_Write(0);
        Seg_B_Write(0);
        Seg_C_Write(0);
        Seg_D_Write(0);
        Seg_E_Write(1);
        Seg_F_Write(0);
        Seg_G_Write(0);
        Seg_P_Write(1);
    }
    else if (num==10)  //blank
    {
        Seg_A_Write(1);
        Seg_B_Write(1);
        Seg_C_Write(1);
        Seg_D_Write(1);
        Seg_E_Write(1);
        Seg_F_Write(1);
        Seg_G_Write(1);
        Seg_P_Write(1);
    }
    else if (num==11)  //cm
    {
        Seg_A_Write(1);
        Seg_B_Write(1);
        Seg_C_Write(1);
        Seg_D_Write(0);
        Seg_E_Write(0);
        Seg_F_Write(1);
        Seg_G_Write(0);
        Seg_P_Write(1);
    }
    else if (num==12)  //inches
    {
        Seg_A_Write(1);
        Seg_B_Write(1);
        Seg_C_Write(0);
        Seg_D_Write(1);
        Seg_E_Write(1);
        Seg_F_Write(1);
        Seg_G_Write(1);
        Seg_P_Write(1);
    }
    else if (num==13)  //C
    {
        Seg_A_Write(0);
        Seg_B_Write(1);
        Seg_C_Write(1);
        Seg_D_Write(0);
        Seg_E_Write(0);
        Seg_F_Write(0);
        Seg_G_Write(1);
        Seg_P_Write(1);
    }
    else if (num==14)  //A
    {
        Seg_A_Write(0);
        Seg_B_Write(0);
        Seg_C_Write(0);
        Seg_D_Write(1);
        Seg_E_Write(0);
        Seg_F_Write(0);
        Seg_G_Write(0);
        Seg_P_Write(1);
    }
    else if (num==15)  //L
    {
        Seg_A_Write(1);
        Seg_B_Write(1);
        Seg_C_Write(1);
        Seg_D_Write(0);
        Seg_E_Write(0);
        Seg_F_Write(0);
        Seg_G_Write(1);
        Seg_P_Write(1);
    }
    else if (num==16)  //r
    {
        Seg_A_Write(1);
        Seg_B_Write(1);
        Seg_C_Write(1);
        Seg_D_Write(1);
        Seg_E_Write(0);
        Seg_F_Write(1);
        Seg_G_Write(0);
        Seg_P_Write(1);
    }
    else if (num==17)  //E
    {
        Seg_A_Write(0);
        Seg_B_Write(1);
        Seg_C_Write(1);
        Seg_D_Write(0);
        Seg_E_Write(0);
        Seg_F_Write(0);
        Seg_G_Write(0);
        Seg_P_Write(1);
    }
    else if (num==18)  //d
    {
        Seg_A_Write(1);
        Seg_B_Write(0);
        Seg_C_Write(0);
        Seg_D_Write(0);
        Seg_E_Write(0);
        Seg_F_Write(1);
        Seg_G_Write(0);
        Seg_P_Write(1);
    }
    
    
    if (didgit == 1)
    {
        Didgit_1_Write(0);
        Didgit_2_Write(1);
        Didgit_3_Write(1);
        Didgit_4_Write(1);
    }
    else if (didgit == 2)
    {
        Didgit_1_Write(1);
        Didgit_2_Write(0);
        Didgit_3_Write(1);
        Didgit_4_Write(1);
    }
    else if (didgit == 3)
    {
        Didgit_1_Write(1);
        Didgit_2_Write(1);
        Didgit_3_Write(0);
        Didgit_4_Write(1);
    }
    else if (didgit == 4)
    {
        Didgit_1_Write(1);
        Didgit_2_Write(1);
        Didgit_3_Write(1);
        Didgit_4_Write(0);
    }
    
    Seg_P_Write(~point);
    
    CyDelay(4);
    
    
        Didgit_1_Write(1);
        Didgit_2_Write(1);
        Didgit_3_Write(1);
        Didgit_4_Write(1);
    
}

void setDisp(int num, int dispPointWhere, int units)
{
    
    
    int n1 = 0,n2 = 0,n3 = 0,n4 = 0;
    if (dispPointWhere == 1)
    {
        n1 = 1;
    }
    else if (dispPointWhere == 2)
    {
        n2 = 1;
    }
    else if (dispPointWhere == 3)
    {
        n3 = 1;
    }
    else if (dispPointWhere == 4)
    {
        n4 = 1;
    }
    else
    {
        n1 = 0;
        n2 = 0;
        n3 = 0;
        n4 = 0;
    }
    
    if (units > 0)
    {
        if (units == 1)
        {
            setSeg(11,4,n4);
        }
        else if (units == 2)
        {
            setSeg(12,4,n4);
        }
    }
    else
    {
        setSeg(num % 10,4,n4);
        num = num/10;
    }
    setSeg(num %10,3,n3);
    num = num/10;
    setSeg(num %10,2,n2);
    num = num/10;
    setSeg(num,1,n1);
}

void runStartUp(int tnt, int tno)
{
    
    //show each displpay for 1 sec
    for (int j=1; j<5; j++)
    {
        for (int i=0; i<250; i++)
        {
            setSeg(8,j,1);
        }
    }
    
    //show group number 35
    for (int i=0; i<125; i++)
    {
        setSeg(tnt,3,0);
        setSeg(tno,4,0);
    }
    
    //show C
    //for (int i=0; i<100; i++)
    //{
    //    Seg_A_Write(0);
    //    Seg_B_Write(1);
    //    Seg_C_Write(1);
    //    Seg_D_Write(0);
    //    Seg_E_Write(0);
    //    Seg_F_Write(0);
    //    Seg_G_Write(1);
    //    Seg_P_Write(1);
    //    Didgit_4_Write(0);
    //    CyDelay(5);
    //}
    
        Didgit_1_Write(1);
        Didgit_2_Write(1);
        Didgit_3_Write(1);
        Didgit_4_Write(1);
    
    
}

CY_ISR(isr_timer_handler){
    char string[50];
    returnTime = Timer_Sig_ReadCounter();
    sprintf(string,"Time: %d\n",returnTime);
    UART_PutString(string);
    
    Timer_Sig_WriteCounter(65535);
    Timer_Sig_Stop();
    
    isr_1_ClearPending();
    Timer_Sig_ReadStatusRegister();
}


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    isr_1_StartEx(isr_timer_handler);
    //uart
    UART_Start();
    char string[50];
    
    //LED Strength
    int ledLevel = 0;
    
    //Comp_Use_Check init
    Comp_UseCheck_Start();
    PGA_UseCheck_Start();
    VDAC8_Comp_UseCheck_Ref_Start();
    VDAC8_PGA_UseCheck_Ref_Start();
    
    
    
    
    //EEPROM
    EEPROM_1_Start();
    //(volatile float CYXDATA *)CYDEV_EE_BASE;
    int teamNumTens = EEPROM_1_ReadByte(0);
    int teamNumOnes = EEPROM_1_ReadByte(1);
    int measureUnit = EEPROM_1_ReadByte(2);
    
    if ((teamNumOnes == 0 && teamNumTens == 0) || (teamNumOnes == 255 && teamNumTens == 255))
    {   
        teamNumOnes = 5;
        teamNumTens = 3;
        EEPROM_1_WriteByte(3, 0);
        EEPROM_1_WriteByte(5, 1);
    }
    
    if (measureUnit == 0 || measureUnit == 255)
    {
        measureUnit = 1;
    }
    
    //for (int i=0; i<100; i++)
    //{
    //    setSeg(teamNumTens,1,0);
    //    setSeg(teamNumOnes,2,0);
    //}   
    
    Comp_1_Start();
    
    // Start and stop timer so we can enabble it later
    Timer_Sig_Start();
    Timer_Sig_Stop();
    Timer_Sig_WriteCounter(65535);
    
    VDAC8_1_Start();
    VDAC8_2_Start();
    PGA_1_Start();    
    ADC_Start();
    //Timer_Sig_Start();                                                 Start here???????
    //ADC_Sig_Start();
    
    int Button_1_status = 0;
    int Button_2_status = 0;
    int Button_3_status = 0;
    int Button_4_status = 0;
    int Button_5_status = 0;
    
    int Button_1_pressedFor = 0;
    int Button_2_pressedFor = 0;
    int Button_3_pressedFor = 0;
    int Button_4_pressedFor = 0;
    int Button_5_pressedFor = 0;
    
    int buttonWasPressed = 0;
    int buttonWasPressedTime = 0;
    
    int level1=0;
    int timetodisp;
    //int level2;
    
    int distanceCount = 0;
    int displayingTime = 0;
    int displayingTimeCounter = 0;
    
    
    int menuMode = 0;
    int menuModeFlashCount = 0;
    int blinkCount = 0;
    int menuDispSelection = 4;
    int setUnitsTimerCount = 0;
    
    int fingerDetectYes = 0;
    int fingerDetectNo = 0;
    
    int fingerIsThere = 0;
    
    int timeDispCalc = 0;
    int timeDispRead = 0;
    int timeDispMode = 0;
    int timeDispPulse = 0;
    int timeDispDone = 0;
    
    runStartUp(teamNumTens,teamNumOnes);                                              //startup here??
    
    int teamNum = teamNumTens * 10 + teamNumOnes;
    
    for(;;)
    {
        
        //setDisp(0,0,0);
        //ledLevel = 16;
        //LED_Strength_Write(ledLevel);
        //    for(;;)
        //    {
        //        
        //        if (Comp_UseCheck_GetCompare() != 0)
        //        {
        //            LED_O_Write(0);
        //        }
        //        else
        //        {
        //            LED_O_Write(1);
        //        }
        //        
        //        
        //        
        //        CyDelay(100);
        //    }
        
       
        int result;
        ADC_StartConvert();
        ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
        result = ADC_GetResult32();
        print_int(result);

                
        //test for finger
        if (Comp_UseCheck_GetCompare() != 0)
        {
            //LED_O_Write(0);
            //sprintf(string,"Yes Finger\n");
            //UART_1_PutString(string);
            
            ledLevel = 18;
            
            if (fingerDetectYes < 7)
            {
                fingerDetectYes++;
            }
            
            if (fingerDetectYes >= 4 && fingerDetectYes <= 7)
            {
                fingerIsThere = 1;
            }
            //sprintf(string,"finger detected %d\n",fingerDetectYes);
            //UART_1_PutString(string);
            
            
            
            //while (ledLevel < 30)
            //{
            //    int foundPulse;
            //    for (int i = 0; i<4; i++)
            //    {
            //        if (Comp_UseCheck_GetCompare() == 0)
            //        {
            //            sprintf(string,"found at level %d\n",ledLevel);
            //            UART_1_PutString(string);
            //            
            //            foundPulse = 1;
            //            break;
            //        }
            //        
            //        CyDelay(100);
            //        
            //    }
            //    if (foundPulse == 1)
            //    {
            //        break;
            //    }
            //    else
            //    {
            //        ledLevel = ledLevel + 2;
            //    }
            //    
            //    
            //    
            //    
            //}
            
            
            
        }
        else
        {
            //LED_O_Write(1);
            
            if (fingerDetectYes > 0)
            {
                fingerDetectYes--;
            }
            
            if (fingerDetectYes > 0 && fingerDetectYes < 4)
            {
                fingerIsThere = 0;
            }
            
            //sprintf(string,"No Finger\n");
            //UART_1_PutString(string);
        }
        
        //set up once finger is recognised
        if (fingerIsThere == 1)
        {
            LED_O_Write(0);
            
            if (timeDispMode == 0)
            {
                timeDispCalc = 0;
                timeDispRead = 0;
                timeDispPulse = 0;
                timeDispMode = 1;
                LED_Strength_Write(17);
                  
                
                int result = 0;
                ADC_StartConvert();
                ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
                result = ADC_GetResult32();
                print_int(result);
             
            }
        }
            
           
            
        
        else
        {
            LED_O_Write(1);
            if (timeDispDone == 1)
            {
                timeDispMode = 0;
            }
        }
        
        timeDispDone = 0;
        
        //Show disp Calc
        if (timeDispMode == 1)
        {
            if (menuMode == 0)
            {
            setSeg(13,1,0);
            setSeg(14,2,0);
            setSeg(15,3,0);
            setSeg(13,4,0);
            }
            
            //sprintf(string,"timeDispCalc: %d\n",timeDispCalc);
            //UART_1_PutString(string);
            
            timeDispCalc++;
            if (timeDispCalc >= 125)
            {
                timeDispMode = 2;
                timeDispDone = 1;
            }
        }
        else if (timeDispMode == 2) //SHow disp Read
        {
            if (menuMode == 0)
            {
            setSeg(16,1,0);
            setSeg(17,2,0);
            setSeg(14,3,0);
            setSeg(18,4,0);
            }
            
            timeDispRead++;
            if (timeDispRead >= 125)
            {
                timeDispMode = 3;
                timeDispDone = 1;
            }
        }
        else if (timeDispMode == 3) //SHow pulse
        {
            if (menuMode == 0)
            {
            setSeg(1,1,0);
            setSeg(2,2,0);
            setSeg(3,3,0);
            setSeg(4,4,0);
            }
            
            timeDispPulse++;
            if (timeDispPulse >= 125)
            {
                timeDispMode = 3;
                timeDispPulse = 0;
                timeDispDone = 1;
            }
        }
        
        
        
        
        //test for button 1
        if (Button_1_Read() == 1 && Button_1_status == 0)
        {
            Button_1_status = 1;
            buttonWasPressed = 1;
            
            
            //test
            //ledLevel = ledLevel + 1;
            //LED_Strength_Write(ledLevel);
            
            sprintf(string,"Button 1\n");
            UART_PutString(string);
        }
        else if (Button_1_Read() == 1 && Button_1_status == 1)
        {
            
        }
        else if (Button_1_Read() == 0 && Button_1_status == 1)
        {
            Button_1_status = 0;
            
        }
        else
        {
            
        }
        
        //test for button 2
        if (Button_2_Read() == 1 && Button_2_status == 0)
        {
            Button_2_status = 1;
            buttonWasPressed = 1;
            
            //set measuremnet units
            if (measureUnit == 1 && menuMode == 0)
            {
                measureUnit = 2;
            }
            else if (measureUnit == 2 && menuMode == 0)
            {
                measureUnit = 1;
            }
            //EEPROM_1_WriteByte(measureUnit, 2);                 maybe????
            
            
        }
        else if (Button_2_Read() == 1 && Button_2_status == 1)
        {
            //show units for duration of button press
            if (menuMode == 0)
            {
                setSeg(10+measureUnit,4,0);
            }
        }
        else if (Button_2_Read() == 0 && Button_2_status == 1)
        {
            Button_2_status = 0;
            
        }
        else
        {
            
        }
        
        //test for button 3
        if (Button_3_Read() == 1 && Button_3_status == 0)
        {
            Button_3_status = 1;
            buttonWasPressed = 1;
            
            //test uart
            sprintf(string,"Button 3\n");
            UART_PutString(string);
            
            //test
            //ledLevel = ledLevel - 1;
            //LED_Strength_Write(ledLevel);
            
        }
        else if (Button_3_Read() == 1 && Button_3_status == 1)
        {
            
        }
        else if (Button_3_Read() == 0 && Button_3_status == 1)
        {
            Button_3_status = 0;
            
        }
        else
        {
            
        }
        
        
        //test for button 4
        if (Button_4_Read() == 1 && Button_4_status == 0)
        {
            Button_4_status = 1;
            buttonWasPressed = 1;
            
            
        }
        else if (Button_4_Read() == 1 && Button_4_status == 1)
        {
            
        }
        else if (Button_4_Read() == 0 && Button_4_status == 1)
        {
            Button_4_status = 0;
            
        }
        else
        {
            
        }
        
        //test for button 5
        if (Button_5_Read() == 1 && Button_5_status == 0)
        {
            
            Button_5_status = 1;
            buttonWasPressed = 1;
            
            sprintf(string,"Button 5\n");
            UART_PutString(string);
            
            if(menuMode == 0)
            {
                ledLevel = 0;
                //LED_Strength_Write(ledLevel);
            }
            
        }
        else if (Button_5_Read() == 1 && Button_5_status == 1)
        {
            
        }
        else if (Button_5_Read() == 0 && Button_5_status == 1)
        {
            Button_5_status = 0;
            
        }
        else
        {
            
        }
        
        
        //Displaying Time
        if (displayingTime)
        {
           
            if(measureUnit == 1)
            {
                setDisp(distanceCount,2,1);
            }
            else
            {
                setDisp(distanceCount * 394 / 1000,2,2);
            }
          
            displayingTimeCounter += 1;
            
            if (displayingTimeCounter >= 125)
            {
                displayingTimeCounter = 0;
                displayingTime = 0;
            }
            
        }
        
        
        
        
        //Menu mode 1
        if (menuMode == 1)
        {
            if (menuModeFlashCount < 63)
            {
                setDisp(teamNum,menuDispSelection,0);
            }
            else if (menuModeFlashCount < 94)
            {
                CyDelay(16);
            }
            else
            {
                menuModeFlashCount = 0;
            }
            
            menuModeFlashCount++;
            
            //select didgit
            if (buttonWasPressed == 1 && Button_4_status == 1 && menuDispSelection == 4)
            {
                menuDispSelection = 3;
            }
            else if (buttonWasPressed == 1 && Button_2_status == 1 && menuDispSelection == 3)
            {
                menuDispSelection = 4;
            }
            
            //incremen/decrament team number
            if (buttonWasPressed == 1 && Button_1_status == 1 && menuDispSelection == 3)
            {
                teamNum += 10;
            }
            else if (buttonWasPressed == 1 && Button_3_status == 1 && menuDispSelection == 3)
            {
                teamNum -= 10;
            }
            else if (buttonWasPressed == 1 && Button_1_status == 1 && menuDispSelection == 4)
            {
                teamNum += 1;
            }
            else if (buttonWasPressed == 1 && Button_3_status == 1 && menuDispSelection == 4)
            {
                teamNum -= 1;
            }
            
            if (teamNum < 0 || teamNum > 99)
            {
                teamNum = 0;
            }
            
            
            //exit menu 1 and save
            if (Button_5_status == 1 && buttonWasPressed == 1)
            {
                menuMode = 0;
                EEPROM_1_WriteByte(teamNum / 10, 0);
                EEPROM_1_WriteByte(teamNum % 10, 1);
                
            }
        }
        //menu 2
        else if (menuMode == 2)
        {
            
            if (menuModeFlashCount < 250)
            {
                setSeg(10 + measureUnit,4,1);
            }
            else if (menuModeFlashCount < 375)
            {
                CyDelay(4);
            }
            else
            {
                menuModeFlashCount = 0;
            }
            
            
            if (buttonWasPressed == 1 && (Button_1_status == 1 || Button_3_status == 1) && measureUnit == 1)
            {
                measureUnit = 2;
            }
            else if (buttonWasPressed == 1 && (Button_1_status == 1 || Button_3_status == 1) && measureUnit == 2)
            {
                measureUnit = 1;
            }
            
            
            //exit menu 2 and save
            if (Button_5_status == 1 && buttonWasPressed == 1)
            {
                menuMode = 0;
                EEPROM_1_WriteByte(measureUnit, 2);
                
            }
        }
        else if (fingerIsThere == 0 && timeDispMode == 0)
        {
            //idle blink at 1 Hz
            if (blinkCount >= 250)
            {
                blinkCount = 0;
            }
            
            if (blinkCount < 125)
            {
                //decimal disp
                setSeg(10,2,1);
                
                //LED Blink
                LED_Strength_Write(16);
            }
            else
            {
                //decimal disp
                setSeg(10,2,0);
                
                //LED Blink
                LED_Strength_Write(0);
            }
            
            blinkCount++;
        }
        
        
        
        //Enter Menu mode
        if (Button_1_status == 1 && Button_4_status == 1)
        {
            menuMode = 1;
            menuDispSelection = 4;
        }
        
        
     
        
        
        
        
        
        //Beeper
        
        if (buttonWasPressed == 1 || buttonWasPressedTime > 0)
        {
            if (buttonWasPressed == 1)
            {
                buttonWasPressedTime = 0;
                Beeper_Write(0);
            }
            
            if (buttonWasPressedTime >= 25 && menuMode == 0)
            {
                Beeper_Write(1);
            }
            else if (buttonWasPressedTime >= 13 && timeDispMode != 0)
            {
                Beeper_Write(1);
            }
            else if (buttonWasPressedTime >= 6 && menuMode == 1)
            {
                Beeper_Write(1);
            }
            else if (buttonWasPressedTime >= 25 && menuMode == 2)
            {
                Beeper_Write(1);
            }
            
            buttonWasPressed = 0;
            buttonWasPressedTime++;
            
            //CyDelay(4);
        }
        
       
      
        
        
        
       
        //delay here??
        
    
    
  
        //Brian's Stuff
//Prints integer to UART
//Changed UART_1 to UART

        
        
        
        
        //Printing onto UART
        //Start Conversion Function look at line 600
        
        
    }
}
/* [] END OF FILE */
