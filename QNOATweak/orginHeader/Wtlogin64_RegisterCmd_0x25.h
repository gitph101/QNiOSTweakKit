//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Wtlogin64_RegisterCmd.h"

@class NSString;

@interface Wtlogin64_RegisterCmd_0x25 : Wtlogin64_RegisterCmd
{
    NSString *msgCode;
    char msgCodeMd5[16];
    unsigned long long ddwSalt;
}

@property unsigned long long ddwSalt; // @synthesize ddwSalt;
@property(copy) NSString *msgCode; // @synthesize msgCode;
- (void).cxx_destruct;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encode:(id)arg1;
- (id)init;

@end

