//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TILCallError : NSObject
{
    int _code;
    NSString *_domain;
    NSString *_errMsg;
}

@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) int code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)initWithDomain:(id)arg1 code:(int)arg2 errMsg:(id)arg3;

@end
