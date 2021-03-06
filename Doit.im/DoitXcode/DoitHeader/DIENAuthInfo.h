//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DIENAuthInfo : NSObject
{
    NSString *_host;
    NSString *_username;
    NSString *_edamUserId;
    NSString *_noteStoreUrl;
    NSString *_webApiUrlPrefix;
    NSString *_authenticationToken;
}

@property(copy, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(copy, nonatomic) NSString *webApiUrlPrefix; // @synthesize webApiUrlPrefix=_webApiUrlPrefix;
@property(copy, nonatomic) NSString *noteStoreUrl; // @synthesize noteStoreUrl=_noteStoreUrl;
@property(copy, nonatomic) NSString *edamUserId; // @synthesize edamUserId=_edamUserId;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)updateFromDictionary:(id)arg1;
- (id)initFromDictionary:(id)arg1;
- (id)dictionary;

@end

