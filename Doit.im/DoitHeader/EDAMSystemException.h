//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FATException.h"

@class NSNumber, NSString;

@interface EDAMSystemException : FATException
{
    NSNumber *_errorCode;
    NSString *_message;
    NSNumber *_rateLimitDuration;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *rateLimitDuration; // @synthesize rateLimitDuration=_rateLimitDuration;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;

@end

