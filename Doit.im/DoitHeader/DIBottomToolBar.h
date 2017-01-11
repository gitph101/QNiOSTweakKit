//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface DIBottomToolBar : UIView
{
    UIView *_separatorLine;
    NSMutableArray *_objects;
    id _target;
    _Bool _singleLine;
    NSMutableArray *_actionItems;
}

@property(nonatomic) _Bool singleLine; // @synthesize singleLine=_singleLine;
@property(readonly, nonatomic) NSMutableArray *actionItems; // @synthesize actionItems=_actionItems;
- (void).cxx_destruct;
- (void)fillWithObjects;
- (void)fillWithFilter:(id)arg1;
- (void)fillWithGoal:(id)arg1;
- (void)fillWithContext:(id)arg1;
- (void)fillWithProject:(id)arg1;
- (void)fillWithTask:(id)arg1;
- (void)appendPickPrioritAction;
- (void)appendMoveToAction;
- (void)appendDeactiveAction;
- (void)appendActivateAction;
- (void)appendConvertToProjectAction;
- (void)appendUntrashAction;
- (void)appendPickProjectAction;
- (void)appendPickContextAction;
- (void)appendPickGoalAction;
- (void)fillActions;
- (void)resizeToolbar;
- (void)resetToolbarSize;
- (void)showMoreActions:(id)arg1;
- (void)refreshLayout;
- (id)buttonWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)addItemWithTitle:(id)arg1 image:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)setWithObjects:(id)arg1 target:(id)arg2;
- (void)removeAllItems;
- (id)initWithFrame:(struct CGRect)arg1;

@end
