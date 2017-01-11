//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DIObjectListViewController.h"

#import "DIGroupSectionViewDelegate.h"
#import "DIProjectCellDelegate.h"

@class DIToolBar, NSString;

@interface DIProjectListViewController : DIObjectListViewController <DIGroupSectionViewDelegate, DIProjectCellDelegate>
{
    DIToolBar *_topToolbar;
}

@property(retain, nonatomic) DIToolBar *topToolbar; // @synthesize topToolbar=_topToolbar;
- (void).cxx_destruct;
- (void)refresh;
- (void)actor:(id)arg1 didEditProject:(id)arg2 editType:(int)arg3;
- (void)deactivateProject:(id)arg1;
- (void)activateProject:(id)arg1;
- (void)unTrashItem:(id)arg1;
- (void)trashItem:(id)arg1;
- (_Bool)p_deleteProject:(id)arg1;
- (void)addProject:(id)arg1;
- (void)showMoreToolItems:(id)arg1;
- (void)showLeftMenu:(id)arg1;
- (void)checkBoxClickedInProjectCell:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)unsetTableViewEditing:(id)arg1;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateBackgroundView;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadTableContent;
- (void)setMultiSelectionEditingBarButtonItems;
- (void)setNormalNaviBarButtonItems;
- (void)updateTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

