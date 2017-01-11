//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMSRqdThreadInfo, NSMutableArray, NSString;

@interface IMSRqdStackCollector : NSObject
{
    NSString *procName;
    _Bool needSymbol;
    NSMutableArray *allThreadInfos;
    IMSRqdThreadInfo *crashThreadInfo;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool needSymbol; // @synthesize needSymbol;
@property(retain, nonatomic) NSString *procName; // @synthesize procName;
- (id)createAddrInfo:(id)arg1 index:(int)arg2;
- (id)createAddrInfos:(id)arg1;
- (_Bool)needCheckFirstLineOcMsg;
- (void)collectAllThreadsWithCrashThread:(int)arg1;
-     // Error parsing type: v40@0:8^{__darwin_mcontext64={__darwin_arm_exception_state64=QII}{__darwin_arm_thread_state64=[29Q]QQQQII}{__darwin_arm_neon_state64=[32T]II}}16i24^I28i36, name: collectThreads:crashThread:resumedThreads:resumedThreadCount:
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
