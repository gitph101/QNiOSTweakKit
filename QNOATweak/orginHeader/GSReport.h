//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GSApp, GSConf, GSHardWare, GSOs, GSUser, NSString;

@interface GSReport : NSObject
{
    NSString *_timeStr;
    GSHardWare *_hardWare;
    GSOs *_os;
    GSApp *_app;
    GSConf *_conf;
    GSUser *_user;
}

@property(retain, nonatomic) GSUser *user; // @synthesize user=_user;
@property(retain, nonatomic) GSConf *conf; // @synthesize conf=_conf;
@property(retain, nonatomic) GSApp *app; // @synthesize app=_app;
@property(retain, nonatomic) GSOs *os; // @synthesize os=_os;
@property(retain, nonatomic) GSHardWare *hardWare; // @synthesize hardWare=_hardWare;
@property(copy, nonatomic) NSString *timeStr; // @synthesize timeStr=_timeStr;
- (void).cxx_destruct;
- (id)init;

@end

