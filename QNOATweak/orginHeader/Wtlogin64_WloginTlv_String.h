//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Wtlogin64_WloginTlv.h"

@class NSString;

@interface Wtlogin64_WloginTlv_String : Wtlogin64_WloginTlv
{
    NSString *sString;
}

@property(copy) NSString *sString; // @synthesize sString;
- (void).cxx_destruct;
- (int)encode:(id)arg1;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

