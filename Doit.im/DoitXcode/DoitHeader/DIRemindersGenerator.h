//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DIRemindersGenerator : NSObject
{
}

+ (id)getTaskFrom:(id)arg1 withRepresentedId:(id)arg2;
+ (id)formatTaskTimeInfoForReminder:(id)arg1;
+ (id)makeVirtualTaskForReminder:(id)arg1 andRepNo:(id)arg2 withCheckDate:(id)arg3;
+ (id)firingVirtualInstancesOfRepeatTask:(id)arg1;
+ (id)scheduleInfoFromReminder:(id)arg1 ofTask:(id)arg2;
+ (id)scheduleInfoOfTask:(id)arg1;
+ (id)getValidRemindersFromTasks:(id)arg1;
+ (id)validReminderScheduleInfosOf:(id)arg1;
+ (id)sortedReminderScheduleInfos;

@end

