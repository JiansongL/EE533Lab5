/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;


int isim_run(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    work_m_00000000000866782574_2073120511_init();
    work_m_00000000003287250962_2721743755_init();
    unisims_ver_m_00000000003834112310_2449448540_init();
    unisims_ver_m_00000000003912143520_2316096324_init();
    work_m_00000000000653674883_2136766020_init();
    work_m_00000000001721730778_2643235978_init();
    work_m_00000000001856605197_3866583278_init();
    work_m_00000000003200229175_0504217982_init();


    xsi_register_tops("work_m_00000000003200229175_0504217982");
    xsi_register_tops("work_m_00000000000866782574_2073120511");


    return xsi_run_simulation(argc, argv);

}
