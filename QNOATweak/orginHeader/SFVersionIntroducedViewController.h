//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

@class NSDictionary, NSString;

@interface SFVersionIntroducedViewController : BaseViewController
{
    NSString *_appVersionId;
    NSDictionary *_dataDic;
}

@property(retain, nonatomic) NSDictionary *dataDic; // @synthesize dataDic=_dataDic;
@property(retain, nonatomic) NSString *appVersionId; // @synthesize appVersionId=_appVersionId;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)dictionaryWithJsonString:(id)arg1;
- (void)requestVersionIntroducedFail:(id)arg1;
- (void)requestVersionIntroducedSuccess:(id)arg1;
- (void)requestData;
- (struct CGSize)preperHeighWithLabel:(id)arg1;
- (void)creatView;
- (void)viewDidLoad;

@end
