//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface BMPointQuadTree : NSObject
{
    CDStruct_dafdc2cb _bound;
    BMPointQuadTree *_northWest;
    BMPointQuadTree *_northEast;
    BMPointQuadTree *_southWest;
    BMPointQuadTree *_southEast;
    NSMutableArray *_points;
}

@property(retain, nonatomic) NSMutableArray *points; // @synthesize points=_points;
@property(retain, nonatomic) BMPointQuadTree *southEast; // @synthesize southEast=_southEast;
@property(retain, nonatomic) BMPointQuadTree *southWest; // @synthesize southWest=_southWest;
@property(retain, nonatomic) BMPointQuadTree *northEast; // @synthesize northEast=_northEast;
@property(retain, nonatomic) BMPointQuadTree *northWest; // @synthesize northWest=_northWest;
@property(nonatomic) CDStruct_90e2a262 bound; // @synthesize bound=_bound;
- (void).cxx_destruct;
- (id)pointsInBound:(CDStruct_90e2a262)arg1;
- (_Bool)isBounds:(CDStruct_90e2a262)arg1 intersectsWith:(CDStruct_90e2a262)arg2;
- (_Bool)insert:(id)arg1;
- (void)subdivide;
- (void)dealloc;
- (id)init;

@end

