//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GSUserGrabInfo : NSObject
{
    _Bool _bBest;
    unsigned int _money;
    NSString *_hongbaoID;
    long long _grabTime;
    long long _userID;
    NSString *_userName;
}

@property(nonatomic) _Bool bBest; // @synthesize bBest=_bBest;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) long long userID; // @synthesize userID=_userID;
@property(nonatomic) unsigned int money; // @synthesize money=_money;
@property(nonatomic) long long grabTime; // @synthesize grabTime=_grabTime;
@property(copy, nonatomic) NSString *hongbaoID; // @synthesize hongbaoID=_hongbaoID;
- (void).cxx_destruct;

@end

