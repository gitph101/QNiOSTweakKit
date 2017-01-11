//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RqdObjTransToJceBufferProtocol.h"

@class NSArray, NSDictionary, NSString;

@interface IMSRqdUserInfoPackage : NSObject <RqdObjTransToJceBufferProtocol>
{
    NSString *deviceId;
    NSString *proceName;
    NSDictionary *valueMap;
    int type;
    NSArray *summaryInfos;
}

@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSArray *summaryInfos; // @synthesize summaryInfos;
@property(retain, nonatomic) NSDictionary *valueMap; // @synthesize valueMap;
@property(retain, nonatomic) NSString *proceName; // @synthesize proceName;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)createWUPModel:(struct UserInfoPackage *)arg1;
- (void)setDataToBuffer:(JceOutputStream_31132a5e *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

