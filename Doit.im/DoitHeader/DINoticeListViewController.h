//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIViewController.h"

#import "DISynchronizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIColor, UIFont, UITableView, UIView;

@interface DINoticeListViewController : SIViewController <UITableViewDelegate, UITableViewDataSource, DISynchronizerDelegate>
{
    UIColor *_normalTextColor;
    UIColor *_agreeTextColor;
    UIFont *_btnTextFont;
    UIColor *_btnTextShadowColor;
    UIColor *_noticeTitleColor;
    UIFont *_noticeTextFont;
    UIFont *_noticeTextBoldFont;
    UIColor *_noticeBodyColor;
    UIColor *_timeTextColor;
    UIFont *_timeTextFont;
    UIColor *_separatorColor;
    _Bool _showTips;
    float _tableWidth;
    float _bodyXOffset;
    float _titleXOffset;
    NSMutableArray *_rowDatas;
    NSMutableArray *_noticesInViewing;
    UITableView *_noticesTableView;
    UIFont *_bodyFont;
    UIView *_noMsgView;
}

@property(retain, nonatomic) UIView *noMsgView; // @synthesize noMsgView=_noMsgView;
@property(nonatomic) float titleXOffset; // @synthesize titleXOffset=_titleXOffset;
@property(nonatomic) float bodyXOffset; // @synthesize bodyXOffset=_bodyXOffset;
@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(nonatomic) float tableWidth; // @synthesize tableWidth=_tableWidth;
@property(nonatomic) _Bool showTips; // @synthesize showTips=_showTips;
@property(retain, nonatomic) UITableView *noticesTableView; // @synthesize noticesTableView=_noticesTableView;
@property(retain, nonatomic) NSMutableArray *noticesInViewing; // @synthesize noticesInViewing=_noticesInViewing;
@property(retain, nonatomic) NSMutableArray *rowDatas; // @synthesize rowDatas=_rowDatas;
- (void).cxx_destruct;
- (void)onItemDataChanged:(id)arg1;
- (void)refresh;
- (void)loadNoticesData;
- (void)addNotice:(id)arg1 toRowData:(_Bool)arg2;
- (void)emptyNotice:(id)arg1;
- (void)viewProject:(id)arg1;
- (void)viewTask:(id)arg1;
- (void)acceptInvite:(id)arg1;
- (void)rejectInvite:(id)arg1;
- (void)close:(id)arg1;
- (void)back:(id)arg1;
- (void)removeNoticeAtIndexPath:(id)arg1;
- (void)insertNoticeDetailCell:(id)arg1 afterIndexPath:(id)arg2;
- (void)removeNoticeFromInViewing:(id)arg1;
- (void)addNoticeToInViewing:(id)arg1;
- (id)cellForNoticeBody:(id)arg1;
- (id)cellForNoticeTitle:(id)arg1;
- (id)viewBtnForBtnAtNoticeBody:(id)arg1;
- (float)heightForNoticeBodyView:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showLeftMenu:(id)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)unloadSubviews;
- (id)init;
- (id)viewForNoMessage;
- (id)formatNoticeTime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

