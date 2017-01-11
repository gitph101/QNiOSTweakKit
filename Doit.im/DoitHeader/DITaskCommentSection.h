//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DITaskInfoSection.h"

@class NSMutableArray, UILabel, UITableView, UIView;

@interface DITaskCommentSection : DITaskInfoSection
{
    UIView *_sectionHeaderView;
    UILabel *_countLabel;
    NSMutableArray *_comments;
    UITableView *_tableView;
}

@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *comments; // @synthesize comments=_comments;
- (void).cxx_destruct;
- (id)sectionHeaderInTableView:(id)arg1;
- (double)sectionHeaderHeightInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRow:(long long)arg2;
- (void)addTaskComment:(id)arg1;
- (void)setTask:(id)arg1;
- (void)cleanDataDirty;
- (_Bool)isDataDirty;
- (void)registerInTableView:(id)arg1;
- (id)init;

@end

