//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OMCustomLogger : NSObject
{
    int logLevel;
    CDUnknownBlockType extLogger;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType extLogger; // @synthesize extLogger;
@property(nonatomic) int logLevel; // @synthesize logLevel;
- (void).cxx_destruct;
- (void)initLogger:(id)arg1 level:(id)arg2 cbLevel:(id)arg3 isPrint:(_Bool)arg4;
- (void)log:(int)arg1 tag:(id)arg2 file:(const char *)arg3 function:(const char *)arg4 line:(unsigned long long)arg5 format:(id)arg6;
- (void)callback:(long long)arg1 msg:(id)arg2;
- (id)init;

@end

