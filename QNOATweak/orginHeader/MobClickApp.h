//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MobClickApp : NSObject
{
    _Bool _crashReportEnabled;
    _Bool _backgroundTaskEnabled;
    _Bool _logEnabled;
    double _logSendInterval;
    int _reportPolicy;
    unsigned long long _backgroundTaskIdentifier;
    NSString *_appVersion;
    NSString *_appid;
    NSString *_channel;
    _Bool _encryptEnabled;
    _Bool _appCrashedHandlerInstalled;
}

+ (void)setAppVersion:(id)arg1;
+ (void)setLogSendInterval:(double)arg1;
+ (void)setLogEnabled:(_Bool)arg1;
+ (void)setCrashReportEnabled:(_Bool)arg1;
+ (void)setBackgroundTaskEnabled:(_Bool)arg1;
+ (void)setEncryptEnabled:(_Bool)arg1;
+ (int)verifyReportPolicy:(int)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) _Bool appCrashedHandlerInstalled; // @synthesize appCrashedHandlerInstalled=_appCrashedHandlerInstalled;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) double logSendInterval; // @synthesize logSendInterval=_logSendInterval;
@property(nonatomic) _Bool crashReportEnabled; // @synthesize crashReportEnabled=_crashReportEnabled;
@property(nonatomic) _Bool logEnabled; // @synthesize logEnabled=_logEnabled;
@property(nonatomic) _Bool backgroundTaskEnabled; // @synthesize backgroundTaskEnabled=_backgroundTaskEnabled;
@property(nonatomic) _Bool encryptEnabled; // @synthesize encryptEnabled=_encryptEnabled;
- (void)dealloc;
- (void)activeBackgroundTask;
- (void)noAppKeyException;
- (id)description;
@property(nonatomic) int reportPolicy; // @dynamic reportPolicy;

@end

