//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AsyncImageView, NSDictionary, NSString, UILabel;

@interface SouFunIMNoticeLinkView : UIView
{
    NSString *_message;
    NSDictionary *_linkDic;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    AsyncImageView *_linkImageView;
}

@property(retain, nonatomic) AsyncImageView *linkImageView; // @synthesize linkImageView=_linkImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSDictionary *linkDic; // @synthesize linkDic=_linkDic;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 withMessage:(id)arg2 withLinkDic:(id)arg3;

@end

