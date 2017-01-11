//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DITaskInfoSection.h"

#import "DISelectionViewControllerDelegate.h"
#import "DISwithCellDelegate.h"

@class NSString, UITableView;

@interface DITaskTimeSection : DITaskInfoSection <DISwithCellDelegate, DISelectionViewControllerDelegate>
{
    struct {
        unsigned int isEstimatedTimeShow:1;
        unsigned int isSpentTimeShow:1;
    } _shownFlag;
    _Bool _onlyShowExits;
    _Bool _isDataDirty;
    UITableView *_tableView;
}

+ (id)formateStringForMinutes:(long long)arg1;
@property(nonatomic) _Bool isDataDirty; // @synthesize isDataDirty=_isDataDirty;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool onlyShowExits; // @synthesize onlyShowExits=_onlyShowExits;
- (void).cxx_destruct;
- (void)on_pressedClearForSpent:(id)arg1;
- (void)on_pressedClearForEstimate:(id)arg1;
- (long long)p_indexOfSpentTime;
- (long long)p_indexOfEstimatedTime;
- (void)p_selectionSpentTimeInController:(id)arg1;
- (void)p_selectionEstimatedTimeInController:(id)arg1;
- (void)p_selectionEndTimeInController:(id)arg1;
- (void)p_selectionStartTimeInController:(id)arg1;
- (id)p_scheduledViewController;
- (id)p_startTimeText;
- (void)switchCell:(id)arg1 valueChanged:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)tableView:(id)arg1 didSelectRow:(long long)arg2 inController:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRow:(long long)arg2;
- (id)tableView:(id)arg1 cellForRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRow:(long long)arg2;
- (void)registerInTableView:(id)arg1;
- (void)dealloc;
- (void)setTask:(id)arg1;
- (void)cleanDataDirty;
- (_Bool)willEveryRowShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
