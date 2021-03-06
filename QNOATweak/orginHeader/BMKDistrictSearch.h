//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BMKSearchBase.h"

#import "SearcherDelegate.h"

@class NSString, Searcher;

@interface BMKDistrictSearch : BMKSearchBase <SearcherDelegate>
{
    Searcher *_searcher;
    id <BMKDistrictSearchDelegate> _delegate;
}

@property(nonatomic) __weak id <BMKDistrictSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)transMapPointsToString:(CDStruct_c3b9c2ee *)arg1 count:(long long)arg2;
- (id)transMCPointsStringToPath:(id)arg1;
- (_Bool)parseDistrictResult:(id)arg1 district:(id)arg2;
- (void)onDistrictSearchResult:(id)arg1;
- (void)onGetExceptionInfo:(long long)arg1;
- (_Bool)districtSearch:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

