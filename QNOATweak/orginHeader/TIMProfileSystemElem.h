//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TIMElem.h"

@class NSString;

@interface TIMProfileSystemElem : TIMElem
{
    long long type;
    NSString *fromUser;
    NSString *nickName;
}

@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(retain, nonatomic) NSString *fromUser; // @synthesize fromUser;
@property(nonatomic) long long type; // @synthesize type;
- (void).cxx_destruct;
- (id)description;

@end

