//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SouFunIMSearchResultModel : NSObject
{
    NSString *_imusername;
    NSString *_username;
    NSString *_nickname;
    NSString *_usertype;
    NSString *_logourl;
    NSString *_sname;
}

+ (id)EncodeGB2312Str:(id)arg1;
+ (void)requestSearchAgentResult:(id)arg1 start:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)requestSearchResult:(id)arg1 start:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) NSString *sname; // @synthesize sname=_sname;
@property(copy, nonatomic) NSString *logourl; // @synthesize logourl=_logourl;
@property(copy, nonatomic) NSString *usertype; // @synthesize usertype=_usertype;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *imusername; // @synthesize imusername=_imusername;
- (void).cxx_destruct;

@end
