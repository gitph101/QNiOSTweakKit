//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "DISubtaskCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DISubtaskCell, NSMutableArray, NSString, SubTask, Task, UITableView;

@interface DISubtasksView : UIView <DISubtaskCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    id <DISubtasksViewDelegate> _subtaskViewDelegate;
    Task *_ownerTask;
    NSMutableArray *_subtasks;
    NSMutableArray *_deletedSubtasks;
    UITableView *_subtaskTable;
    NSMutableArray *_rowHeights;
    UIView *_firstResponderCell;
    SubTask *_editingSubTask;
    DISubtaskCell *_editingCell;
}

@property(retain, nonatomic) DISubtaskCell *editingCell; // @synthesize editingCell=_editingCell;
@property(retain, nonatomic) SubTask *editingSubTask; // @synthesize editingSubTask=_editingSubTask;
@property(retain, nonatomic) UIView *firstResponderCell; // @synthesize firstResponderCell=_firstResponderCell;
@property(retain, nonatomic) NSMutableArray *rowHeights; // @synthesize rowHeights=_rowHeights;
@property(retain, nonatomic) UITableView *subtaskTable; // @synthesize subtaskTable=_subtaskTable;
@property(retain, nonatomic) NSMutableArray *deletedSubtasks; // @synthesize deletedSubtasks=_deletedSubtasks;
@property(retain, nonatomic) NSMutableArray *subtasks; // @synthesize subtasks=_subtasks;
@property(retain, nonatomic) Task *ownerTask; // @synthesize ownerTask=_ownerTask;
@property(nonatomic) id <DISubtasksViewDelegate> subtaskViewDelegate; // @synthesize subtaskViewDelegate=_subtaskViewDelegate;
- (void).cxx_destruct;
- (void)subtaskCell:(id)arg1 deleteSubtask:(id)arg2;
- (void)subtaskCell:(id)arg1 completeSubtask:(id)arg2;
- (void)subtaskCell:(id)arg1 didEndEditSubtask:(id)arg2;
- (void)subtaskCell:(id)arg1 didChangeHeight:(float)arg2;
- (void)subtaskCell:(id)arg1 didBeginEditSubtask:(id)arg2;
- (_Bool)subtaskCell:(id)arg1 shouldBeginEditSubtask:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)firstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
