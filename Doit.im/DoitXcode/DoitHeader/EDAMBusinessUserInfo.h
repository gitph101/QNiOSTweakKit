//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FATObject.h"

@class NSNumber, NSString;

@interface EDAMBusinessUserInfo : FATObject
{
    NSNumber *_businessId;
    NSString *_businessName;
    NSNumber *_role;
    NSString *_email;
    NSNumber *_updated;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *updated; // @synthesize updated=_updated;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSNumber *role; // @synthesize role=_role;
@property(retain, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
@property(retain, nonatomic) NSNumber *businessId; // @synthesize businessId=_businessId;
- (void).cxx_destruct;

@end

