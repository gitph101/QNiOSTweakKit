//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DITaskDetailViewController.h"

#import "DITaskSendToViewControllerDelegate.h"

@class Contact, NSString;

@interface DITaskDetailForSendController : DITaskDetailViewController <DITaskSendToViewControllerDelegate>
{
    CDUnknownBlockType _SendCompletionBlock;
    Contact *_contact;
}

@property(retain, nonatomic) Contact *contact; // @synthesize contact=_contact;
@property(copy, nonatomic) CDUnknownBlockType SendCompletionBlock; // @synthesize SendCompletionBlock=_SendCompletionBlock;
- (void).cxx_destruct;
- (void)p_sendToContact:(id)arg1 autoCompleted:(_Bool)arg2;
- (void)sendToController:(id)arg1 didSelectContact:(id)arg2 autoCompleted:(_Bool)arg3;
- (void)on_sendTo:(id)arg1;
- (void)p_initNavigationItems;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setTask:(id)arg1;
- (void)dealloc;
- (id)initWithTask:(id)arg1 sendTo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
