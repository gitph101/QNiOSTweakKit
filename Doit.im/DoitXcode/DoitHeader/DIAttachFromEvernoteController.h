//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIViewController.h"

#import "DIEvernoteLinkControllerDelegate.h"
#import "DINotebookSelectionDelegate.h"
#import "DISearchTextFieldDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DIEvernoteLinkController, DINotebookSelectionController, DISearchTextField, NSMutableArray, NSSet, NSString, UILabel, UITableView, WPFDropDownView;

@interface DIAttachFromEvernoteController : SIViewController <UITableViewDataSource, UITableViewDelegate, DISearchTextFieldDelegate, DINotebookSelectionDelegate, DIEvernoteLinkControllerDelegate>
{
    NSSet *_excludeNoteGuids;
    CDUnknownBlockType _selectBlock;
    NSMutableArray *_noteMetadatas;
    NSMutableArray *_filterMetadatas;
    NSString *_notebookGUID;
    NSString *_searchKeyword;
    UITableView *_tableView;
    DISearchTextField *_searchTextField;
    UILabel *_noNotesLabel;
    WPFDropDownView *_dropDownView;
    DINotebookSelectionController *_notebookController;
    DIEvernoteLinkController *_linkController;
    struct CGRect _keyboardFrame;
}

@property(retain, nonatomic) DIEvernoteLinkController *linkController; // @synthesize linkController=_linkController;
@property(retain, nonatomic) DINotebookSelectionController *notebookController; // @synthesize notebookController=_notebookController;
@property(retain, nonatomic) WPFDropDownView *dropDownView; // @synthesize dropDownView=_dropDownView;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(retain, nonatomic) UILabel *noNotesLabel; // @synthesize noNotesLabel=_noNotesLabel;
@property(retain, nonatomic) DISearchTextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(retain, nonatomic) NSString *notebookGUID; // @synthesize notebookGUID=_notebookGUID;
@property(retain, nonatomic) NSMutableArray *filterMetadatas; // @synthesize filterMetadatas=_filterMetadatas;
@property(retain, nonatomic) NSMutableArray *noteMetadatas; // @synthesize noteMetadatas=_noteMetadatas;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(retain, nonatomic) NSSet *excludeNoteGuids; // @synthesize excludeNoteGuids=_excludeNoteGuids;
- (void).cxx_destruct;
- (void)evernoteLinkControllerLinkSuccess:(id)arg1;
- (void)notebookController:(id)arg1 didSelectNoteBook:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)searchTextFieldShouldReturn:(id)arg1;
- (void)searchTextFieldDidPressedCancel:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)p_updateTableViewFrameWithKeyboardFrame:(struct CGRect)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

