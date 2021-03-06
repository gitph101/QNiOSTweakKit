//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AnaDeviceUtil : NSObject
{
}

+ (long long)getParentProcessId;
+ (long long)getProcessId;
+ (id)getParentProcessName;
+ (id)getProcessName;
+ (_Bool)isReet;
+ (float)getFreeSDCard;
+ (int)getBatteryLevel;
+ (float)getCpuUsage;
+ (float)getFreeMemory;
+ (float)getTotalSpace;
+ (float)getFreeSpace;
+ (id)getMonthTimeStrBy:(double)arg1;
+ (id)getMonthTimeStr;
+ (id)getDayTimeStrBy:(double)arg1;
+ (id)getDayTimeStr;
+ (id)getFullTimeStrBy:(double)arg1;
+ (id)getOSName;
+ (id)get_sys_buildver;
+ (id)getOSVersion;
+ (id)getDeviceModel;
+ (id)getDeviceName;
+ (id)getMachineArch;
+ (id)model;
+ (id)generateUUID;

@end

