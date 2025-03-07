#ifndef __MAILALARM_H__
#define __MAILALARM_H__

#include <string.h>

#define BTC_MODE  1
#define ETH_MODE  2
#define BNB_MODE  3
#define OKB_MODE  4

#define SMTP_HOST "smtp.qq.com"
#define SMTP_PORT 465
#define SMPT_DOMAIN "qq.com"

#define SENDER_NAME "Ticker"
#define AUTHOR_EMAIL "1005082178@qq.com"
#define AUTHOR_PASSWORD "cqhcedczpeksbdgh"

#define RECIPIENT_NAME "fff100508"
#define RECIPIENT_EMAIL "fff100508@163.com"

#define HEADER_CONTENT "CPTicker Price Alarm"

void smtpInit(); //SMTP初始化
bool sendMail(String msg); //发送邮件
void setAlarmPrice(); //设置预警价格
void showAlarmPriceDebug();
void readAlarmPriceConfig();
bool checkAlarmPrice(String price, int mode); //检查当前价格是否超预警值
String getAlarmPrice(int mode); //获取警戒值

#endif // __MAILALARM_H__