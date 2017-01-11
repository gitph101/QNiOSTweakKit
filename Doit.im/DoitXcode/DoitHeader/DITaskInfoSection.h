//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOObject.h"

#import "DITaskInfoSectionProtocol.h"

@class NSString, Task;

@interface DITaskInfoSection : SOObject <DITaskInfoSectionProtocol>
{
    id parent;
    long long section;
    Task *task;
}

@property(retain, nonatomic) Task *task; // @synthesize task;
@property(nonatomic) long long section; // @synthesize section;
@property(nonatomic) __weak id parent; // @synthesize parent;
- (void).cxx_destruct;
- (void)cleanDataDirty;
- (_Bool)isDataDirty;
- (id)tableView:(id)arg1 cellForRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRow:(long long)arg2;
- (void)registerInTableView:(id)arg1;
- (id)initWithTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

