//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSString, NSURLConnection;

@interface DIAppVersionChecker : NSObject
{
    NSURLConnection *_theConn;
    NSMutableData *_receivedData;
    _Bool _manualCheck;
    id <DIAppVersionCheckerDelegate> _delegate;
    NSString *_remoteVersion;
    NSString *_downloadURL;
}

@property(retain, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(retain, nonatomic) NSString *remoteVersion; // @synthesize remoteVersion=_remoteVersion;
@property(nonatomic, getter=isManualCheck) _Bool manualCheck; // @synthesize manualCheck=_manualCheck;
@property(nonatomic) id <DIAppVersionCheckerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (_Bool)shouldUpgradeLocalVersion:(id)arg1 toRemoteVersion:(id)arg2;
- (void)checkNewVersion:(_Bool)arg1;

@end

