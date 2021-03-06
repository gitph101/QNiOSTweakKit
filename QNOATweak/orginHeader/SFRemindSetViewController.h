//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "NSXMLParserDelegate.h"
#import "SFGlobalAlertViewDelegate.h"
#import "SFSetterTableViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString, SFSetterTableViewCell, UITableView;

@interface SFRemindSetViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate, SFSetterTableViewCellDelegate, SFGlobalAlertViewDelegate, NSXMLParserDelegate>
{
    SFSetterTableViewCell *_currentSelectedCell;
    double labHeigh;
    _Bool _isRemind;
    _Bool _isSound;
    _Bool _IMpush;
    _Bool _OApush;
    _Bool _IMnoDisturbing;
    _Bool _OAnoDisturbing;
    _Bool _IMLocalVoiceSet;
    NSNumber *_remindCycle;
    UITableView *_tableView;
    NSArray *_dataArray;
    NSMutableArray *_elemAry;
    NSMutableArray *_valueAry;
    NSMutableDictionary *_xmlDic;
}

@property(retain, nonatomic) NSMutableDictionary *xmlDic; // @synthesize xmlDic=_xmlDic;
@property(retain, nonatomic) NSMutableArray *valueAry; // @synthesize valueAry=_valueAry;
@property(retain, nonatomic) NSMutableArray *elemAry; // @synthesize elemAry=_elemAry;
@property(nonatomic) _Bool IMLocalVoiceSet; // @synthesize IMLocalVoiceSet=_IMLocalVoiceSet;
@property(nonatomic) _Bool OAnoDisturbing; // @synthesize OAnoDisturbing=_OAnoDisturbing;
@property(nonatomic) _Bool IMnoDisturbing; // @synthesize IMnoDisturbing=_IMnoDisturbing;
@property(nonatomic) _Bool OApush; // @synthesize OApush=_OApush;
@property(nonatomic) _Bool IMpush; // @synthesize IMpush=_IMpush;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isSound; // @synthesize isSound=_isSound;
@property(nonatomic) _Bool isRemind; // @synthesize isRemind=_isRemind;
- (void).cxx_destruct;
- (void)dealloc;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parserDidStartDocument:(id)arg1;
- (_Bool)parser:(id)arg1;
- (id)getNotificationSetStateTitle;
- (void)globalAlertView:(id)arg1 clickedButtonIndex:(long long)arg2;
- (void)OAnoDisturbingRequstFailWithItem:(id)arg1;
- (void)OAnoDisturbingRequestSuccessWithItem:(id)arg1;
- (void)OApushRequstFailWithItem:(id)arg1;
- (void)OApushRequestSuccessWithItem:(id)arg1;
- (void)IMnoDisturbingRequstFailWithItem:(id)arg1;
- (void)IMnoDisturbingRequestSuccessWithItem:(id)arg1;
- (void)IMpushSetRequestFailWithItem:(id)arg1;
- (void)IMpushSetRequestSuccessWithItem:(id)arg1;
- (void)getIMpushSetRequestFailWithItem:(id)arg1;
- (void)getIMpushSetRequestSuccessWithItem:(id)arg1;
- (void)sendIMSoundRequestFailWithItem:(id)arg1;
- (void)sendIMSoundRequestSuccessWithItem:(id)arg1;
- (void)sendOASoundRequestFailWithItem:(id)arg1;
- (void)sendOASoundRequestSuccessWithItem:(id)arg1;
- (void)OAnoDisturbingRequest:(id)arg1;
- (void)OApushSetRequest:(id)arg1;
- (void)IMnoDisturbingRequest:(id)arg1;
- (void)IMpushSetRequest:(id)arg1;
- (void)getIMpushSetRequest;
- (void)setterTableViewCell:(id)arg1 switchOpened:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)preperHeighWithLabel:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)sfRemindeWillEnterForeground;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initDataArray;
- (void)statusInit;
- (id)getString:(id)arg1;
- (void)setNoDisturbing:(_Bool)arg1;
@property(retain, nonatomic) NSNumber *remindCycle; // @synthesize remindCycle=_remindCycle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

