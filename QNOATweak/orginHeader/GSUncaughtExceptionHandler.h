//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GSUncaughtExceptionHandler : NSObject
{
    _Bool dismissed;
}

+ (void)InstallUncaughtExceptionHandler;
+ (id)backtrace;
- (void)handleException:(id)arg1;
- (void)validateAndSaveCriticalApplicationData;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

@end
