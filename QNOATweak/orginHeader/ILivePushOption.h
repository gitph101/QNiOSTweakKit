//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ChannelInfo;

@interface ILivePushOption : NSObject
{
    _Bool _record;
    _Bool _waterMark;
    unsigned int _waterMarkId;
    ChannelInfo *_channelInfo;
    long long _sdkType;
    long long _rateType;
    long long _encodeType;
}

@property(nonatomic) long long encodeType; // @synthesize encodeType=_encodeType;
@property(nonatomic) long long rateType; // @synthesize rateType=_rateType;
@property(nonatomic) long long sdkType; // @synthesize sdkType=_sdkType;
@property(nonatomic) unsigned int waterMarkId; // @synthesize waterMarkId=_waterMarkId;
@property(nonatomic) _Bool waterMark; // @synthesize waterMark=_waterMark;
@property(nonatomic) _Bool record; // @synthesize record=_record;
@property(retain, nonatomic) ChannelInfo *channelInfo; // @synthesize channelInfo=_channelInfo;
- (void).cxx_destruct;

@end

