//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ENNotebookChooserViewControllerDelegate.h"

@class ENNotebook, ENNotebookPickerButton, ENNotebookPickerView, NSArray, NSString, RMSTokenView, UIBarButtonItem, UITextField, UIWebView;

@interface ENSaveToEvernoteViewController : UIViewController <ENNotebookChooserViewControllerDelegate>
{
    id <ENSendToEvernoteViewControllerDelegate> _delegate;
    UIBarButtonItem *_saveButtonItem;
    UITextField *_titleField;
    UITextField *_notebookField;
    ENNotebookPickerView *_notebookPickerView;
    ENNotebookPickerButton *_notebookPickerButton;
    RMSTokenView *_tagsView;
    UIWebView *_noteView;
    NSArray *_notebookList;
    ENNotebook *_currentNotebook;
}

@property(retain, nonatomic) ENNotebook *currentNotebook; // @synthesize currentNotebook=_currentNotebook;
@property(retain, nonatomic) NSArray *notebookList; // @synthesize notebookList=_notebookList;
@property(retain, nonatomic) UIWebView *noteView; // @synthesize noteView=_noteView;
@property(retain, nonatomic) RMSTokenView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) ENNotebookPickerButton *notebookPickerButton; // @synthesize notebookPickerButton=_notebookPickerButton;
@property(retain, nonatomic) ENNotebookPickerView *notebookPickerView; // @synthesize notebookPickerView=_notebookPickerView;
@property(retain, nonatomic) UITextField *notebookField; // @synthesize notebookField=_notebookField;
@property(retain, nonatomic) UITextField *titleField; // @synthesize titleField=_titleField;
@property(retain, nonatomic) UIBarButtonItem *saveButtonItem; // @synthesize saveButtonItem=_saveButtonItem;
@property(nonatomic) __weak id <ENSendToEvernoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notebookChooser:(id)arg1 didChooseNotebook:(id)arg2;
- (void)cancel:(id)arg1;
- (void)save:(id)arg1;
- (void)showNotebookChooser;
- (void)updateCurrentNotebookDisplay;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

