//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DITaskDetailViewController.h"

#import "DICommentEditorViewControllerDelegate.h"
#import "DITaskSendToViewControllerDelegate.h"

@class NSString;

@interface DITaskCommonDetailViewController : DITaskDetailViewController <DITaskSendToViewControllerDelegate, DICommentEditorViewControllerDelegate>
{
}

- (void)commentController:(id)arg1 postCommentText:(id)arg2;
- (void)sendToController:(id)arg1 didSelectContact:(id)arg2 autoCompleted:(_Bool)arg3;
- (void)on_addComment:(id)arg1;
- (void)on_sendTo:(id)arg1;
- (void)p_initNavigationItems;
- (void)setTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

