//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FATException.h"

@class NSString;

@interface EDAMNotFoundException : FATException
{
    NSString *_identifier;
    NSString *_key;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end
