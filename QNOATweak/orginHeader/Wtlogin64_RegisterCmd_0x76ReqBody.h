//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface Wtlogin64_RegisterCmd_0x76ReqBody : NSObject
{
    BOOL _cDevType;
    BOOL _cReserved;
    unsigned int _dwAccType;
    unsigned int _dwCountry;
    unsigned int _dwLanguage;
    unsigned int _dwSdkAppid;
    NSString *_aDevOSVer;
    NSString *_aAppName;
    NSString *_aAppVersion;
    NSData *_aGUID;
    NSData *_aPwdMd5;
}

@property BOOL cReserved; // @synthesize cReserved=_cReserved;
@property(retain) NSData *aPwdMd5; // @synthesize aPwdMd5=_aPwdMd5;
@property(retain) NSData *aGUID; // @synthesize aGUID=_aGUID;
@property unsigned int dwSdkAppid; // @synthesize dwSdkAppid=_dwSdkAppid;
@property unsigned int dwLanguage; // @synthesize dwLanguage=_dwLanguage;
@property unsigned int dwCountry; // @synthesize dwCountry=_dwCountry;
@property(retain) NSString *aAppVersion; // @synthesize aAppVersion=_aAppVersion;
@property(retain) NSString *aAppName; // @synthesize aAppName=_aAppName;
@property(retain) NSString *aDevOSVer; // @synthesize aDevOSVer=_aDevOSVer;
@property BOOL cDevType; // @synthesize cDevType=_cDevType;
@property unsigned int dwAccType; // @synthesize dwAccType=_dwAccType;
- (void).cxx_destruct;

@end

