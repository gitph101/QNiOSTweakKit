//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PacketsAnalyseTool : NSObject
{
    NSString *_outPutString;
    NSString *_outPutFilePath;
}

+ (id)instance;
@property(retain, nonatomic) NSString *outPutString; // @synthesize outPutString=_outPutString;
- (void)asyncSaveResult;
- (void)saveResult;
- (void)delaySaveResult;
- (void)analysePackets:(id)arg1 len:(int)arg2 isSend:(_Bool)arg3;
- (void)dealloc;
- (id)init;

@end
