//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IMUserId : NSObject
{
    NSString *uidtype;
    unsigned int userappid;
    NSString *userid;
    unsigned long long tinyid;
    unsigned long long uin;
}

@property(nonatomic) unsigned long long uin; // @synthesize uin;
@property(nonatomic) unsigned long long tinyid; // @synthesize tinyid;
@property(retain, nonatomic) NSString *userid; // @synthesize userid;
@property(nonatomic) unsigned int userappid; // @synthesize userappid;
@property(retain, nonatomic) NSString *uidtype; // @synthesize uidtype;
- (void).cxx_destruct;

@end

