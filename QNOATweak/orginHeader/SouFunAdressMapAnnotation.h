//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"

@class NSString;

@interface SouFunAdressMapAnnotation : NSObject <MKAnnotation>
{
    struct CLLocationCoordinate2D coordinate;
    NSString *title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate;
- (void).cxx_destruct;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end

