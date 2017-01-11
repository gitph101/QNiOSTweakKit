//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSNumber, UIButton, UILabel;

@interface DIRelativeReminderView : UIView
{
    UIButton *_pre;
    UIButton *_next;
    UILabel *_timeLabel;
    UILabel *_timeMeasureLabel;
    NSMutableArray *_timesArray;
    long long _currentSelectedIndex;
    id <DIRelativeReminderViewDelegate> _reminderViewDelegate;
    NSNumber *_interval;
}

@property(retain, nonatomic) NSNumber *interval; // @synthesize interval=_interval;
@property(nonatomic) id <DIRelativeReminderViewDelegate> reminderViewDelegate; // @synthesize reminderViewDelegate=_reminderViewDelegate;
@property(nonatomic) long long currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(retain, nonatomic) NSMutableArray *timesArray; // @synthesize timesArray=_timesArray;
@property(retain, nonatomic) UILabel *timeMeasureLabel; // @synthesize timeMeasureLabel=_timeMeasureLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIButton *next; // @synthesize next=_next;
@property(retain, nonatomic) UIButton *pre; // @synthesize pre=_pre;
- (void).cxx_destruct;
- (void)next:(id)arg1;
- (void)pre:(id)arg1;
- (void)refreshTimeLabel;
- (void)loadSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

