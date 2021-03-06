//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SFGlobalAlertViewDelegate.h"

@class NSMutableArray, NSString, SFGlobalAlertView, UILabel;

@interface SFTabChangeView : UIView <SFGlobalAlertViewDelegate>
{
    long long currentIndex;
    double selfWidth;
    double selfHeight;
    UILabel *messLabel;
    _Bool _clicked;
    NSString *_messCount;
    id <SFTabChangeViewModelDelegate> _delegate;
    CDUnknownBlockType _tabTypeBlock;
    SFGlobalAlertView *_warninGlobalAlertView;
    long long _btnIndex;
    NSMutableArray *_tabBtnModleArray;
}

@property(retain, nonatomic) NSMutableArray *tabBtnModleArray; // @synthesize tabBtnModleArray=_tabBtnModleArray;
@property(nonatomic) long long btnIndex; // @synthesize btnIndex=_btnIndex;
@property(retain, nonatomic) SFGlobalAlertView *warninGlobalAlertView; // @synthesize warninGlobalAlertView=_warninGlobalAlertView;
@property(copy, nonatomic) CDUnknownBlockType tabTypeBlock; // @synthesize tabTypeBlock=_tabTypeBlock;
@property(nonatomic) __weak id <SFTabChangeViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isClicked) _Bool clicked; // @synthesize clicked=_clicked;
@property(retain, nonatomic) NSString *messCount; // @synthesize messCount=_messCount;
- (void).cxx_destruct;
- (void)globalAlertView:(id)arg1 clickedButtonIndex:(long long)arg2;
- (void)changeTab:(long long)arg1;
- (void)changeMyBtn;
- (void)getUserInfoFailWithResponseItem:(id)arg1;
- (void)getUserInfoSuccessWithResponseItem:(id)arg1;
- (void)buttonClickEvent:(id)arg1;
- (void)changeVC:(CDUnknownBlockType)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)createBtnWithFrame:(struct CGRect)arg1 Model:(id)arg2 Tag:(unsigned long long)arg3;
- (void)createTempUserBtnFrame:(struct CGRect)arg1 Model:(id)arg2 Tag:(unsigned long long)arg3;
- (void)createUI;
- (double)setWidthWithMessNum:(long long)arg1;
- (void)initData;
- (void)changeMessgeMarkStatusNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

