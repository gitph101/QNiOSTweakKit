//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TIMAVSpeedPkgResultItem : NSObject
{
    _Bool _isReceive;
    _Bool _isDelay;
    unsigned int _tag;
    unsigned int _timeOut;
    double _sendTime;
    double _recvTime;
}

@property(nonatomic) _Bool isDelay; // @synthesize isDelay=_isDelay;
@property(nonatomic) _Bool isReceive; // @synthesize isReceive=_isReceive;
@property(nonatomic) unsigned int timeOut; // @synthesize timeOut=_timeOut;
@property(nonatomic) double recvTime; // @synthesize recvTime=_recvTime;
@property(nonatomic) double sendTime; // @synthesize sendTime=_sendTime;
@property(nonatomic) unsigned int tag; // @synthesize tag=_tag;
- (id)init;

@end
