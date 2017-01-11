//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIViewController.h"

#import "UITextViewDelegate.h"

@class DIEvaluateStarView, NSString, UILabel, UITextView, UIView;

@interface DIEvaluateController : SIViewController <UITextViewDelegate>
{
    DIEvaluateStarView *_starView;
    UIView *_seperateLine;
    UITextView *_textView;
    UILabel *_placeHolderLabel;
    _Bool _ignoreFrameChangeOnce;
    id <DIEvaluateControllerDelegate> _delegate;
}

@property(nonatomic) _Bool ignoreFrameChangeOnce; // @synthesize ignoreFrameChangeOnce=_ignoreFrameChangeOnce;
@property(nonatomic) __weak id <DIEvaluateControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)on_starValueChanged:(id)arg1;
- (void)p_keyboardWillHide:(id)arg1;
- (void)p_keyboardWillShow:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
@property(nonatomic) unsigned long long starCount; // @dynamic starCount;
- (id)textView;
@property(retain, nonatomic) NSString *text; // @dynamic text;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
