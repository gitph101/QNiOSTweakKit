//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLayoutConstraint, NSMutableArray, RMSTokenView, UIView;

@interface RMSTokenConstraintManager : NSObject
{
    RMSTokenView *_tokenView;
    UIView *_tokenContentView;
    NSLayoutConstraint *_heightConstraint;
    NSMutableArray *_updatingConstraints;
}

+ (id)manager;
@property(retain, nonatomic) NSMutableArray *updatingConstraints; // @synthesize updatingConstraints=_updatingConstraints;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(nonatomic) __weak UIView *tokenContentView; // @synthesize tokenContentView=_tokenContentView;
@property(nonatomic) __weak RMSTokenView *tokenView; // @synthesize tokenView=_tokenView;
- (void).cxx_destruct;
- (void)addConstraintsWithFormat:(id)arg1 withView:(id)arg2 toView:(id)arg3;
- (void)updateConstraintsForTokenLines:(id)arg1 andLineView:(id)arg2 withTextFieldFocus:(_Bool)arg3 isSearching:(_Bool)arg4;
- (void)setupConstraintsOnToken:(id)arg1;
- (void)setupConstraintsOnTextField:(id)arg1;
- (void)setupLineViewConstraints:(id)arg1;
- (void)setupContentViewConstraints:(id)arg1;
- (void)setupHeightConstraintFromOutlet:(id)arg1;

@end

