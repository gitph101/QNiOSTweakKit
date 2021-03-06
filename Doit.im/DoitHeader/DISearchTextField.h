//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString, UIButton, UIImageView, UITextField;

@interface DISearchTextField : UIControl
{
    UIImageView *_searchFlag;
    UIButton *_clearButton;
    UITextField *_textField;
    id <DISearchTextFieldDelegate> _delegate;
}

@property(nonatomic) __weak id <DISearchTextFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property(retain, nonatomic) NSString *text; // @dynamic text;

@end

