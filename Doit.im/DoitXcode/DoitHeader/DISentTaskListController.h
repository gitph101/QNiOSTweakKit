//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIViewController.h"

#import "DIGroupSectionViewDelegate.h"
#import "DITaskCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewLongPressDelegate.h"

@class Contact, DIBottomToolBar, DIBottomToolBarTaskSelector, NSArray, NSMutableArray, NSString, UILabel, UITableView, UIView;

@interface DISentTaskListController : SIViewController <UITableViewDataSource, UITableViewLongPressDelegate, DIGroupSectionViewDelegate, DITaskCellDelegate>
{
    UITableView *_tableView;
    UILabel *_noDataLabel;
    DIBottomToolBar *_bottomToolbar;
    DIBottomToolBarTaskSelector *_bottomBarSelector;
    NSArray *_naviBarRightButtonItems;
    UIView *_editingNaviBarBottomSeparatorLine;
    NSMutableArray *_groups;
    Contact *_contact;
}

@property(retain, nonatomic) Contact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
- (void).cxx_destruct;
- (void)checkBoxClickedInTaskCell:(id)arg1;
- (void)groupSectionDidClose:(id)arg1;
- (void)groupSectionDidOpen:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didRecognizeLongPressOnRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)actor:(id)arg1 didEditTask:(id)arg2 editType:(int)arg3;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

