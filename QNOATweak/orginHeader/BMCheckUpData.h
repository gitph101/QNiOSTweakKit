//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BMCheckUpData : NSObject
{
    NSString *_module_ver;
    NSString *_module_ver_subway;
    NSString *_net;
    NSString *_os;
    NSString *_sv;
}

@property(retain, nonatomic) NSString *sv; // @synthesize sv=_sv;
@property(retain, nonatomic) NSString *os; // @synthesize os=_os;
@property(retain, nonatomic) NSString *net; // @synthesize net=_net;
@property(retain, nonatomic) NSString *module_ver_subway; // @synthesize module_ver_subway=_module_ver_subway;
@property(retain, nonatomic) NSString *module_ver; // @synthesize module_ver=_module_ver;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

