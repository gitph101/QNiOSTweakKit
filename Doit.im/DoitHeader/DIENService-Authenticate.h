//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DIENService.h"

@interface DIENService (Authenticate)
+ (_Bool)handleOpenURL:(id)arg1;
+ (id)credentials;
+ (void)authenticateWithViewController:(id)arg1 preferRegistration:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)couldAuthByEvernoteAPP;
+ (void)clearAuthenticate;
+ (void)unauthenticate;
+ (_Bool)isAuthenticated;
@end

