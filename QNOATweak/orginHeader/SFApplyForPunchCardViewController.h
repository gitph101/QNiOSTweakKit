//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class NSArray, NSString, UIButton, UILabel, UITableView, UITextView;

@interface SFApplyForPunchCardViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate>
{
    UITableView *_applyForPunchCardTableView;
    UITextView *_reasonContentTV;
    UILabel *_placeHolderLable;
    NSArray *_dataArray;
    NSArray *_titleArray;
    UIButton *_submitBt;
    NSString *_type;
    NSString *_date;
    NSString *_time;
}

@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) UIButton *submitBt; // @synthesize submitBt=_submitBt;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UILabel *placeHolderLable; // @synthesize placeHolderLable=_placeHolderLable;
@property(retain, nonatomic) UITextView *reasonContentTV; // @synthesize reasonContentTV=_reasonContentTV;
@property(retain, nonatomic) UITableView *applyForPunchCardTableView; // @synthesize applyForPunchCardTableView=_applyForPunchCardTableView;
- (void).cxx_destruct;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)didReceiveMemoryWarning;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)initDataArray;
- (void)applyForPunchCardRequestFailWithResponseItem:(id)arg1;
- (void)applyForPunchCardRequestSuccessWithResponseItem:(id)arg1;
- (void)appleForPunchCardSubmit;
- (void)dismissKeyBoard;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

