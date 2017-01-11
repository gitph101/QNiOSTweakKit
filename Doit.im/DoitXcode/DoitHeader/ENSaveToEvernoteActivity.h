//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivity.h"

#import "ENSendToEvernoteViewControllerDelegate.h"

@class ENNote, NSArray, NSString;

@interface ENSaveToEvernoteActivity : UIActivity <ENSendToEvernoteViewControllerDelegate>
{
    NSString *_noteTitle;
    id <ENSaveToEvernoteActivityDelegate> _delegate;
    ENNote *_preparedNote;
    NSArray *_notebooks;
}

+ (long long)activityCategory;
@property(retain, nonatomic) NSArray *notebooks; // @synthesize notebooks=_notebooks;
@property(retain, nonatomic) ENNote *preparedNote; // @synthesize preparedNote=_preparedNote;
@property(nonatomic) __weak id <ENSaveToEvernoteActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *noteTitle; // @synthesize noteTitle=_noteTitle;
- (void).cxx_destruct;
- (void)viewController:(id)arg1 didFinishWithSuccess:(_Bool)arg2 uploadError:(id)arg3;
- (id)defaultNoteTitleForViewController:(id)arg1;
- (id)noteForViewController:(id)arg1;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

