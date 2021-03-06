//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIViewController.h"

#import "DILeftMenuSettingsCellButtonDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIButton, UITableView;

@interface DILeftMenuViewController : SIViewController <DILeftMenuSettingsCellButtonDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_menuTable;
    int _selectedBoxType;
    UIButton *_syncButton;
    NSArray *_currentboxes;
    _Bool _isSyncBtnRotationStop;
    id <DILeftMenuViewControllerDelegate> _vcDelegate;
    NSMutableArray *_cellTypes;
    long long _syncBtnTransfromDegree;
    long long _animationIDIndex;
    NSString *_animationID;
}

@property(retain, nonatomic) NSString *animationID; // @synthesize animationID=_animationID;
@property(nonatomic) long long animationIDIndex; // @synthesize animationIDIndex=_animationIDIndex;
@property(nonatomic) long long syncBtnTransfromDegree; // @synthesize syncBtnTransfromDegree=_syncBtnTransfromDegree;
@property(nonatomic) _Bool isSyncBtnRotationStop; // @synthesize isSyncBtnRotationStop=_isSyncBtnRotationStop;
@property(retain, nonatomic) NSMutableArray *cellTypes; // @synthesize cellTypes=_cellTypes;
@property(nonatomic) id <DILeftMenuViewControllerDelegate> vcDelegate; // @synthesize vcDelegate=_vcDelegate;
- (void).cxx_destruct;
- (void)p_reloadData;
- (void)syncStarted;
- (void)rotationEnded;
- (void)endRotation;
- (void)beginRotation:(id)arg1;
- (void)finishSync:(id)arg1;
- (void)didClickSyncButton:(id)arg1;
- (void)selectCellForBox:(int)arg1;
- (void)didClickContactButton:(id)arg1;
- (void)didClickNoticeButton:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)willChangeStatusBarFrame:(id)arg1;
- (void)refreshBoxes;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

