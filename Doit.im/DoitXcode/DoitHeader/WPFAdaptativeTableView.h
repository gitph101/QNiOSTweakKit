//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@interface WPFAdaptativeTableView : UITableView
{
    struct CGSize _maxSize;
    struct CGSize _minSize;
}

@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
- (void)sizeToFit;
- (void)p_updateBounds;

@end
