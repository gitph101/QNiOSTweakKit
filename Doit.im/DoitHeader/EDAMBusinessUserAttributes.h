//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FATObject.h"

@class NSString;

@interface EDAMBusinessUserAttributes : FATObject
{
    NSString *_title;
    NSString *_location;
    NSString *_department;
    NSString *_mobilePhone;
    NSString *_linkedInProfileUrl;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSString *linkedInProfileUrl; // @synthesize linkedInProfileUrl=_linkedInProfileUrl;
@property(retain, nonatomic) NSString *mobilePhone; // @synthesize mobilePhone=_mobilePhone;
@property(retain, nonatomic) NSString *department; // @synthesize department=_department;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

