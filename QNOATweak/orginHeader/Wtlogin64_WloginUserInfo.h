//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface Wtlogin64_WloginUserInfo : NSObject <NSCoding>
{
    unsigned long long dwUserUin;
    NSString *sUserMainAccount;
    unsigned short wFaceId;
    unsigned char cAge;
    unsigned char cGender;
    NSString *sNickName;
    NSString *sFaceUrl;
    unsigned long long _dwUserQQ;
}

@property unsigned long long dwUserQQ; // @synthesize dwUserQQ=_dwUserQQ;
@property(copy) NSString *sFaceUrl; // @synthesize sFaceUrl;
@property(retain) NSString *sNickName; // @synthesize sNickName;
@property unsigned char cGender; // @synthesize cGender;
@property unsigned char cAge; // @synthesize cAge;
@property unsigned short wFaceId; // @synthesize wFaceId;
@property(retain) NSString *sUserMainAccount; // @synthesize sUserMainAccount;
@property unsigned long long dwUserUin; // @synthesize dwUserUin;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)userinfo;
- (id)description;

@end

