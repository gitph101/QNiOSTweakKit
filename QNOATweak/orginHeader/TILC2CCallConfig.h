//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TILC2CCallBaseConfig, TILC2CCallListener, TILC2CResponderConfig, TILC2CSponsorConfig;

@interface TILC2CCallConfig : NSObject
{
    TILC2CCallBaseConfig *_baseConfig;
    TILC2CCallListener *_callListener;
    TILC2CSponsorConfig *_sponsorConfig;
    TILC2CResponderConfig *_responderConfig;
}

@property(retain, nonatomic) TILC2CResponderConfig *responderConfig; // @synthesize responderConfig=_responderConfig;
@property(retain, nonatomic) TILC2CSponsorConfig *sponsorConfig; // @synthesize sponsorConfig=_sponsorConfig;
@property(retain, nonatomic) TILC2CCallListener *callListener; // @synthesize callListener=_callListener;
@property(retain, nonatomic) TILC2CCallBaseConfig *baseConfig; // @synthesize baseConfig=_baseConfig;
- (void).cxx_destruct;

@end

