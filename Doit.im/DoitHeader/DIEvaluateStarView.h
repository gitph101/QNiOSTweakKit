//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSMutableArray;

@interface DIEvaluateStarView : UIControl
{
    NSMutableArray *_stars;
    double _starPadding;
    long long _starCount;
    long long _selectStarCount;
    struct CGSize _starSize;
}

@property(nonatomic) long long selectStarCount; // @synthesize selectStarCount=_selectStarCount;
@property(nonatomic) long long starCount; // @synthesize starCount=_starCount;
@property(nonatomic) struct CGSize starSize; // @synthesize starSize=_starSize;
@property(nonatomic) double starPadding; // @synthesize starPadding=_starPadding;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)on_pressedOnStar:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

