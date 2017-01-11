//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTTelephonyNetworkInfo, MSFNetReachability, NSMutableDictionary;

@interface MSFNetworkEnv : NSObject
{
    CTTelephonyNetworkInfo *_info;
    MSFNetReachability *_reach;
    struct IMSFNetEnvEvent *_event;
    int _networkType;
    _Bool _isFirstTelephonyNetworkInfo;
    NSMutableDictionary *_wwanDict;
    int _networkTypeBackup;
    struct IMSFNetEnvEvent *_eEvent;
}

@property(readonly, nonatomic) int networkType; // @synthesize networkType=_networkType;
@property(nonatomic) struct IMSFNetEnvEvent *event; // @synthesize event=_eEvent;
- (void)updateNetworkTypeByBackup;
- (void)updateTelephonyNetworkInfoInstance;
- (id)getTelephonyNetworkInfoInstance;
- (void)reUpdateNetworkType;
- (void)updateNetworkType;
- (int)currentNetWorkType;
- (int)netStatus;
- (void)reachabilityChanged:(id)arg1;
- (void)onRadioAccessChanged;
- (void)onSystemClockChangedImpl;
- (void)onSystemClockChanged;
- (void)dealloc;
- (id)init;
- (void)generateWWANDict;

@end

