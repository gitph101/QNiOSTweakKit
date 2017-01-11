//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString;

@interface SouFunIMAllMemberTopView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isGroupManager;
    _Bool _isGroupAdministrator;
    _Bool _isEdit;
    _Bool _isShowAllMemberView;
    _Bool _isShowTitle;
    NSArray *_membersArr;
    id <SouFunIMAllMemberTopViewDelegate> _topViewDelegate;
    NSMutableArray *_groupAdministrators;
    unsigned long long _totalCount;
}

@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) _Bool isShowTitle; // @synthesize isShowTitle=_isShowTitle;
@property(nonatomic) _Bool isShowAllMemberView; // @synthesize isShowAllMemberView=_isShowAllMemberView;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(retain, nonatomic) NSMutableArray *groupAdministrators; // @synthesize groupAdministrators=_groupAdministrators;
@property(nonatomic) _Bool isGroupAdministrator; // @synthesize isGroupAdministrator=_isGroupAdministrator;
@property(nonatomic) _Bool isGroupManager; // @synthesize isGroupManager=_isGroupManager;
@property(nonatomic) id <SouFunIMAllMemberTopViewDelegate> topViewDelegate; // @synthesize topViewDelegate=_topViewDelegate;
@property(retain, nonatomic) NSArray *membersArr; // @synthesize membersArr=_membersArr;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)atAllPeople;
- (id)createHeaderView;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)reloadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

