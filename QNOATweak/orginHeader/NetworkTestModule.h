//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NetworkTestByHttpStateDelegate.h"
#import "NetworkTestByTcpStateDelegate.h"

@class NSMutableDictionary, NSString, NSTimer, NetworkTestByHttp, NetworkTestByTcp;

@interface NetworkTestModule : NSObject <NetworkTestByHttpStateDelegate, NetworkTestByTcpStateDelegate>
{
    NetworkTestByHttp *_networkTestByHttp;
    NetworkTestByTcp *_networkTestByTcp;
    double _connectbeginTime;
    NSMutableDictionary *_paramsToReport;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSMutableDictionary *paramsToReport; // @synthesize paramsToReport=_paramsToReport;
@property(retain, nonatomic) NetworkTestByTcp *networkTestByTcp; // @synthesize networkTestByTcp=_networkTestByTcp;
@property(retain, nonatomic) NetworkTestByHttp *networkTestByHttp; // @synthesize networkTestByHttp=_networkTestByHttp;
- (void)ReportToRDM:(id)arg1;
- (void)onTimeout;
- (void)NetworkTestByTcp:(void *)arg1 withState:(int)arg2 andExParam:(void *)arg3;
- (void)NetworkTestByHttp:(void *)arg1 withState:(int)arg2 andExParam:(void *)arg3;
- (double)getCurTime;
- (void)startTestNetwork:(int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
