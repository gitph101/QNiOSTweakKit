//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface DICommentView : UIView
{
    float _fontSize;
}

@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;
- (void)setComments:(id)arg1;
- (void)removeAllSubviews;
- (id)commentViewForComment:(id)arg1 top:(float)arg2;
- (id)titleLabelForComment:(id)arg1 top:(float)arg2;
- (id)avatarForUser:(id)arg1 top:(float)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)formatCommentTime:(id)arg1;

@end
