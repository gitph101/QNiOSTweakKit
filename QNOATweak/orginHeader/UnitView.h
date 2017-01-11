//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SFAddPhotoUnitDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UIScrollView;

@interface UnitView : UIView <SFAddPhotoUnitDelegate, UIScrollViewDelegate>
{
    _Bool _hasDelete;
    _Bool _frontMove;
    int _moveCount;
    NSMutableArray *_unitList;
    id <UnitViewDelegate> _delegate;
    UIButton *_defaultUnit;
    UIScrollView *_scrollView;
}

@property(nonatomic) int moveCount; // @synthesize moveCount=_moveCount;
@property(nonatomic) _Bool frontMove; // @synthesize frontMove=_frontMove;
@property(nonatomic) _Bool hasDelete; // @synthesize hasDelete=_hasDelete;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIButton *defaultUnit; // @synthesize defaultUnit=_defaultUnit;
@property(nonatomic) __weak id <UnitViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *unitList; // @synthesize unitList=_unitList;
- (void).cxx_destruct;
- (void)isNeedResetFrame;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)unitCellTouched:(id)arg1;
- (void)addNewUnit:(id)arg1 withName:(id)arg2;
- (void)buttonAddNewUnit:(id)arg1;
- (void)scrollViewAbleScroll;
- (struct CGSize)contentSizeForUIScrollView:(int)arg1;
- (void)setProperty;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
