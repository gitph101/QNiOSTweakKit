//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIViewController.h"

#import "DISelectionViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DISelectionViewController, NSMutableArray, NSString, UITableView;

@interface DIDateTimeSettingsViewController : SIViewController <UITableViewDataSource, UITableViewDelegate, DISelectionViewControllerDelegate>
{
    UITableView *_tableView;
    DISelectionViewController *_selectionController;
    NSMutableArray *_rowTags;
    NSMutableArray *_rowNumberInSections;
}

@property(retain, nonatomic) NSMutableArray *rowNumberInSections; // @synthesize rowNumberInSections=_rowNumberInSections;
@property(retain, nonatomic) NSMutableArray *rowTags; // @synthesize rowTags=_rowTags;
@property(retain, nonatomic) DISelectionViewController *selectionController; // @synthesize selectionController=_selectionController;
- (void).cxx_destruct;
- (void)selection:(id)arg1 didSelectItemWithTitle:(id)arg2 atIndex:(long long)arg3;
- (void)showWorkingTimeSelection;
- (void)showWeekStartsOnSelection;
- (void)showTimeFormatSelection;
- (void)showDateFormatSelection;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)indexPathOfRowTag:(id)arg1;
- (id)tagForRowAtIndexPath:(id)arg1;
- (void)loadSectionInfos;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

