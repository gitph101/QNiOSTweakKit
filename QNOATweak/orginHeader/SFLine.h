//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SFLine : NSObject
{
    _Bool _isFullLength;
    struct CGPoint _fromPoint;
    struct CGPoint _toPoint;
}

@property(nonatomic) _Bool isFullLength; // @synthesize isFullLength=_isFullLength;
@property(nonatomic) struct CGPoint toPoint; // @synthesize toPoint=_toPoint;
@property(nonatomic) struct CGPoint fromPoint; // @synthesize fromPoint=_fromPoint;
- (id)initWithFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 isFullLength:(_Bool)arg3;

@end
