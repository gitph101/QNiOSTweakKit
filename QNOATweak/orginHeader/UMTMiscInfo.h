//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "UMTBase.h"

@class NSString;

@interface UMTMiscInfo : NSObject <UMTBase, NSCoding>
{
    int __time_zone;
    NSString *__language;
    NSString *__country;
    double __latitude;
    double __longitude;
    NSString *__carrier;
    int __latency;
    NSString *__display_name;
    int __access_type;
    NSString *__access_subtype;
    _Bool __time_zone_isset;
    _Bool __language_isset;
    _Bool __country_isset;
    _Bool __latitude_isset;
    _Bool __longitude_isset;
    _Bool __carrier_isset;
    _Bool __latency_isset;
    _Bool __display_name_isset;
    _Bool __access_type_isset;
    _Bool __access_subtype_isset;
}

@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetAccess_subtype;
- (_Bool)access_subtypeIsSet;
@property(retain, nonatomic, getter=access_subtype, setter=setAccess_subtype:) NSString *access_subtype;
- (void)unsetAccess_type;
- (_Bool)access_typeIsSet;
@property(nonatomic, getter=access_type, setter=setAccess_type:) int access_type;
- (void)unsetDisplay_name;
- (_Bool)display_nameIsSet;
@property(retain, nonatomic, getter=display_name, setter=setDisplay_name:) NSString *display_name;
- (void)unsetLatency;
- (_Bool)latencyIsSet;
@property(nonatomic, getter=latency, setter=setLatency:) int latency;
- (void)unsetCarrier;
- (_Bool)carrierIsSet;
@property(retain, nonatomic, getter=carrier, setter=setCarrier:) NSString *carrier;
- (void)unsetLongitude;
- (_Bool)longitudeIsSet;
@property(nonatomic, getter=longitude, setter=setLongitude:) double longitude;
- (void)unsetLatitude;
- (_Bool)latitudeIsSet;
@property(nonatomic, getter=latitude, setter=setLatitude:) double latitude;
- (void)unsetCountry;
- (_Bool)countryIsSet;
@property(retain, nonatomic, getter=country, setter=setCountry:) NSString *country;
- (void)unsetLanguage;
- (_Bool)languageIsSet;
@property(retain, nonatomic, getter=language, setter=setLanguage:) NSString *language;
- (void)unsetTime_zone;
- (_Bool)time_zoneIsSet;
@property(nonatomic, getter=time_zone, setter=setTime_zone:) int time_zone;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTime_zone:(int)arg1 language:(id)arg2 country:(id)arg3 latitude:(double)arg4 longitude:(double)arg5 carrier:(id)arg6 latency:(int)arg7 display_name:(id)arg8 access_type:(int)arg9 access_subtype:(id)arg10;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

