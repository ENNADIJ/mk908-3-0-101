grep -nR 100 \* 1000 --binary-files=without-match --exclude "*.o" --exclude "*.ko" --exclude "*.cmd" --exclude "*.vscode-ctags" --exclude "*.ctags" --exclude "*.map" --exclude "*.txt" --exclude "*.symvers" --exclude .vscode-ctags --exclude .tmp_System.map --exclude System.map --exclude Module.symvers ../MK908-Kernel-NAND/drivers/
../MK908-Kernel-NAND/drivers/cir/bu92747guw_cir.c:43:#define CIR_IIC_SPEED 	100 * 1000
../MK908-Kernel-NAND/drivers/i2c/i2c-core.c:1578:	msg.scl_rate = 100 * 1000;
../MK908-Kernel-NAND/drivers/i2c/i2c-core.c:1596:	msg.scl_rate = 100 * 1000;
../MK908-Kernel-NAND/drivers/i2c/busses/i2c-rk29.c:40:#define RK29_I2C_ACK_TIMEOUT_COUNT			(100 * 1000)
../MK908-Kernel-NAND/drivers/i2c/busses/i2c-rk30.c:205:        i2c->i2c_init_hw(i2c, 100 * 1000);
../MK908-Kernel-NAND/drivers/i2c/busses/i2c-rk30.c:313:        msg.scl_rate = 100 * 1000;
../MK908-Kernel-NAND/drivers/i2c/busses/i2c-dev-rk29.c:20:#define I2C_DEV_SCL_RATE	100 * 1000
../MK908-Kernel-NAND/drivers/i2c/i2c-dev.c:327:                rdwr_pa[i].scl_rate = 100 * 1000;
../MK908-Kernel-NAND/drivers/mfd/wm8994-core.c:627:	xfer.scl_rate = 100 * 1000;
../MK908-Kernel-NAND/drivers/mfd/wm831x-i2c.c:36:	int scl_rate= 100 * 1000;
../MK908-Kernel-NAND/drivers/mfd/wm831x-i2c.c:93:	int scl_rate = 100 * 1000;
../MK908-Kernel-NAND/drivers/mmc/core/core.c:936:			min_uV = 1900 * 1000 + tmp * 100 * 1000;
../MK908-Kernel-NAND/drivers/mmc/core/core.c:937:			max_uV = min_uV + 100 * 1000;
../MK908-Kernel-NAND/drivers/rtc/rtc-HYM8563.c:29:#define RTC_SPEED 	100 * 1000
../MK908-Kernel-NAND/drivers/rtc/rtc-m41t66.c:99:#define RTC_SPEED 	100 * 1000
../MK908-Kernel-NAND/drivers/rtc/rtc-s35392a.c:26:#define RTC_RATE	100 * 1000
../MK908-Kernel-NAND/drivers/usb/otg/msm_otg.c:446:#define PHY_RESUME_TIMEOUT_USEC	(100 * 1000)
../MK908-Kernel-NAND/drivers/usb/phy/phy-msm-usb.c:458:#define PHY_RESUME_TIMEOUT_USEC	(100 * 1000)
../MK908-Kernel-NAND/drivers/usb/early/ehci-dbgp.c:641:			loop = 100 * 1000;
../MK908-Kernel-NAND/drivers/regulator/twl-regulator.c:751:			voltage = 2100 * 1000;
../MK908-Kernel-NAND/drivers/cpufreq/speedstep-lib.c:123:			msr_tmp, (msr_tmp * 100 * 1000));
../MK908-Kernel-NAND/drivers/cpufreq/speedstep-lib.c:125:	return msr_tmp * 100 * 1000;
../MK908-Kernel-NAND/drivers/cpufreq/speedstep-lib.c:200:		fsb = 100 * 1000;
../MK908-Kernel-NAND/drivers/media/rc/rc-loopback.c:218:	rc->timeout		= 100 * 1000 * 1000; /* 100 ms */
../MK908-Kernel-NAND/drivers/power/bq27541_battery.c:50:#define BQ27510_SPEED 			100 * 1000
../MK908-Kernel-NAND/drivers/video/hdmi/chips/anx7150/anx7150.h:11:#define ANX7150_SCL_RATE 100 * 1000
../MK908-Kernel-NAND/drivers/video/rockchip/hdmi/it66121/it66121.h:12:#define IT66121_I2C_RATE	100 * 1000
../MK908-Kernel-NAND/drivers/staging/rk29/eeprom/eeprom_at24c16.c:24:#define EEPROM_SPEED 	100 * 1000
../MK908-Kernel-NAND/drivers/staging/brcm80211/brcmsmac/wl_mac80211.c:1510:	SPINWAIT((atomic_read(&wl->callbacks) > callbacks), 100 * 1000);
../MK908-Kernel-NAND/drivers/pcmcia/m8xx_pcmcia.c:681:	clocks = (clocks * ADJ) / (100 * 1000);
