//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSDate, NSString, UIDatePicker, UIPickerView;

@interface SFPopUpMenuView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    CDUnknownBlockType _block;
    NSArray *_titleArray;
    UIPickerView *_pickerView;
    UIDatePicker *_datePicker;
    long long _type;
    UIView *_backgroundView;
    NSDate *_pickerInitDate;
}

@property(retain, nonatomic) NSDate *pickerInitDate; // @synthesize pickerInitDate=_pickerInitDate;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)animationDownToHiden;
- (void)animationUpToShow;
- (void)showOnView:(id)arg1;
- (void)valueChange:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)creatUIWithType:(long long)arg1 titleArray:(id)arg2 menuViewFrame:(struct CGRect)arg3;
- (void)popUpViewWithBlock:(CDUnknownBlockType)arg1;
- (void)cancelButtonClicked;
- (id)stringWithDate:(id)arg1;
- (void)sureButtonClicked;
- (id)initWithType:(long long)arg1 titleArray:(id)arg2 menuViewFrame:(struct CGRect)arg3 initDate:(id)arg4;
- (id)initWithType:(long long)arg1 titleArray:(id)arg2 menuViewFrame:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
