//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DIContactInfoController.h"

#import "DITextFieldCellProtocol.h"
#import "DITextViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString;

@interface DIContactInfoController (UITableViewDatasourceAndDelegate) <UITableViewDataSource, UITableViewDelegate, DITextFieldCellProtocol, DITextViewCellDelegate>
- (_Bool)textViewCell:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewCell:(id)arg1 willChangeHeight:(double)arg2;
- (void)textViewCell:(id)arg1 didChangeText:(id)arg2;
- (_Bool)textFieldCell:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldCell:(id)arg1 textDidChange:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
