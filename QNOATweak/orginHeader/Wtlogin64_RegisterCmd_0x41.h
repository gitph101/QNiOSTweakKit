//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Wtlogin64_RegisterCmd.h"

@interface Wtlogin64_RegisterCmd_0x41 : Wtlogin64_RegisterCmd
{
    unsigned short wNextResendTime;
    unsigned short wTotalTimeOver;
}

@property unsigned short wTotalTimeOver; // @synthesize wTotalTimeOver;
@property unsigned short wNextResendTime; // @synthesize wNextResendTime;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encode:(id)arg1;
- (id)init;

@end
