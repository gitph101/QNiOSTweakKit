//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface SFLockCircle : UIView
{
    _Bool _isSelected;
    _Bool _isError;
}

@property(nonatomic) _Bool isError; // @synthesize isError=_isError;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void)resetCircle;
- (void)selectCircle;
- (void)selectErrorCircle;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithRadius:(double)arg1;

@end

