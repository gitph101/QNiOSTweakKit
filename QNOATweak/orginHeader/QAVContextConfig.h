//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QAVContextConfig : NSObject
{
    NSString *_sdk_app_id;
    NSString *_app_id_at3rd;
    NSString *_identifier;
    NSString *_account_type;
}

@property(copy, nonatomic) NSString *account_type; // @synthesize account_type=_account_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *app_id_at3rd; // @synthesize app_id_at3rd=_app_id_at3rd;
@property(copy, nonatomic) NSString *sdk_app_id; // @synthesize sdk_app_id=_sdk_app_id;
- (void)dealloc;

@end

