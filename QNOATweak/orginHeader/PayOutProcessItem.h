//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface PayOutProcessItem : NSObject
{
    NSString *_createtime;
    NSString *_payoutstatus;
    NSArray *_processlist;
    NSString *_money;
    NSString *_payoutto;
    NSString *_payoutinstructions;
}

+ (id)PayOutProcessWithDic:(id)arg1;
@property(copy, nonatomic) NSString *payoutinstructions; // @synthesize payoutinstructions=_payoutinstructions;
@property(copy, nonatomic) NSString *payoutto; // @synthesize payoutto=_payoutto;
@property(copy, nonatomic) NSString *money; // @synthesize money=_money;
@property(copy, nonatomic) NSArray *processlist; // @synthesize processlist=_processlist;
@property(copy, nonatomic) NSString *payoutstatus; // @synthesize payoutstatus=_payoutstatus;
@property(copy, nonatomic) NSString *createtime; // @synthesize createtime=_createtime;
- (void).cxx_destruct;

@end

