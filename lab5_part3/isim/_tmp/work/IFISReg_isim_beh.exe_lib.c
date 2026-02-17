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
    unisims_ver_m_00000000002063979698_0906273847_init();
    unisims_ver_m_00000000002063979698_1090753697_init();
    unisims_ver_m_00000000002063979698_3624584475_init();
    unisims_ver_m_00000000002063979698_2936927629_init();
    unisims_ver_m_00000000002063979698_0828989486_init();
    unisims_ver_m_00000000002063979698_1181634744_init();
    unisims_ver_m_00000000002063979698_3748069634_init();
    unisims_ver_m_00000000002063979698_2824876436_init();
    unisims_ver_m_00000000002063979698_0954149893_init();
    unisims_ver_m_00000000002063979698_1339563155_init();
    unisims_ver_m_00000000002063979698_1842314532_init();
    unisims_ver_m_00000000002063979698_0449334706_init();
    unisims_ver_m_00000000002063979698_2210470920_init();
    unisims_ver_m_00000000002063979698_4106628254_init();
    unisims_ver_m_00000000002063979698_1789049149_init();
    unisims_ver_m_00000000002063979698_0497387947_init();
    work_m_00000000001596217763_1748455536_init();
    unisims_ver_m_00000000003257999491_1759035934_init();
    unisims_ver_m_00000000001920171980_1593237687_init();
    work_m_00000000000132862862_3842698470_init();


    xsi_register_tops("work_m_00000000000132862862_3842698470");
    xsi_register_tops("work_m_00000000000866782574_2073120511");


    return xsi_run_simulation(argc, argv);

}
