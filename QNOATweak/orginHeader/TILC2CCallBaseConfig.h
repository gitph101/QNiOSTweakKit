//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TILC2CCallBaseConfig : NSObject
{
    _Bool _isSponsor;
    unsigned int _heartBeatInterval;
    long long _callType;
    NSString *_peerId;
}

@property(nonatomic) unsigned int heartBeatInterval; // @synthesize heartBeatInterval=_heartBeatInterval;
@property(retain, nonatomic) NSString *peerId; // @synthesize peerId=_peerId;
@property(nonatomic) _Bool isSponsor; // @synthesize isSponsor=_isSponsor;
@property(nonatomic) long long callType; // @synthesize callType=_callType;
- (void).cxx_destruct;

@end

