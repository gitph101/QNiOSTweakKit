//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "SFGlobalAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSDecimalNumber, NSString, UIButton, UILabel, UITableView, UITextField;

@interface SFTaxPlanViewController : BaseViewController <UITextFieldDelegate, SFGlobalAlertViewDelegate>
{
    _Bool _isLastCharNotDot;
    NSString *_hrmsalarydetailidFromMoneyVC;
    NSString *_tichengShoruFromMoneyVC;
    NSString *_islocal;
    UITableView *_tableView;
    UILabel *_shuiQianGongZiZongENumLabel;
    UILabel *_benYueShuiqian_leijiJieyuLabel;
    UILabel *_yingJiaoGeShuiNumLabel;
    UITextField *_wantDrawTF;
    UILabel *_yuJiShuiENumLabel;
    UILabel *_huanJieKuanNumLabel;
    UILabel *_yuJiShiFaNumLabel;
    UILabel *_yuJiJieYuNumLabel;
    UILabel *_leijiJieShuiNumlabel;
    UILabel *_benYueKeLingQuJinEFanWeiLabel;
    UIButton *_autoDrawCashBtn;
    NSString *_isAutoDrawCashStr;
    NSString *_allSaveMoney;
    NSString *_hrmsalaryid;
    NSString *_hrmsalarydetailid;
    NSString *_preTaxEncome;
    NSString *_payBorrowMoney;
    NSString *_preTaxEncome_andAllsaveMoney;
    NSString *_allPreIncomeTax;
    NSString *_allPlanIncomeTax;
    NSString *_levelmoney;
    double _canDrawMinNum;
    double _canDrawMaxNum;
    double _wantNumFloat;
    double _preTaxEncome_andAllSaveNumFloat;
    NSString *_yujishuiENumStr;
    NSString *_huanJiekuanNumStr;
    NSString *_yujishiFaNumStr;
    NSString *_yujijieyuNumStr;
    NSString *_leijiJieShuiNumStr;
    NSDecimalNumber *_tichengDecnum;
    NSDecimalNumber *_preTaxEncome_andAllSaveDecNum;
    NSDecimalNumber *_wantDecNum;
    NSDecimalNumber *_yujiShuiEDecNum;
    NSDecimalNumber *_payBorrowDecNum;
    NSDecimalNumber *_yuJiShiFaDecNum;
    NSDecimalNumber *_yujiJieYuDecNum;
    NSDecimalNumber *_preTaxEncomeDecNum;
    NSDecimalNumber *_allSaveMoneyDecNum;
    NSDecimalNumber *_canDrawMinDecNum;
    NSDecimalNumber *_canDrawMaxDecNum;
    NSDecimalNumber *_allPreIncomeTaxDecNum;
    NSDecimalNumber *_allPlanIncomeTaxDecNum;
    NSDecimalNumber *_leijiJieShuiDecNum;
    NSDecimalNumber *_levelmoneyDecNum;
}

@property(nonatomic) _Bool isLastCharNotDot; // @synthesize isLastCharNotDot=_isLastCharNotDot;
@property(retain, nonatomic) NSDecimalNumber *levelmoneyDecNum; // @synthesize levelmoneyDecNum=_levelmoneyDecNum;
@property(retain, nonatomic) NSDecimalNumber *leijiJieShuiDecNum; // @synthesize leijiJieShuiDecNum=_leijiJieShuiDecNum;
@property(retain, nonatomic) NSDecimalNumber *allPlanIncomeTaxDecNum; // @synthesize allPlanIncomeTaxDecNum=_allPlanIncomeTaxDecNum;
@property(retain, nonatomic) NSDecimalNumber *allPreIncomeTaxDecNum; // @synthesize allPreIncomeTaxDecNum=_allPreIncomeTaxDecNum;
@property(retain, nonatomic) NSDecimalNumber *canDrawMaxDecNum; // @synthesize canDrawMaxDecNum=_canDrawMaxDecNum;
@property(retain, nonatomic) NSDecimalNumber *canDrawMinDecNum; // @synthesize canDrawMinDecNum=_canDrawMinDecNum;
@property(retain, nonatomic) NSDecimalNumber *allSaveMoneyDecNum; // @synthesize allSaveMoneyDecNum=_allSaveMoneyDecNum;
@property(retain, nonatomic) NSDecimalNumber *preTaxEncomeDecNum; // @synthesize preTaxEncomeDecNum=_preTaxEncomeDecNum;
@property(retain, nonatomic) NSDecimalNumber *yujiJieYuDecNum; // @synthesize yujiJieYuDecNum=_yujiJieYuDecNum;
@property(retain, nonatomic) NSDecimalNumber *yuJiShiFaDecNum; // @synthesize yuJiShiFaDecNum=_yuJiShiFaDecNum;
@property(retain, nonatomic) NSDecimalNumber *payBorrowDecNum; // @synthesize payBorrowDecNum=_payBorrowDecNum;
@property(retain, nonatomic) NSDecimalNumber *yujiShuiEDecNum; // @synthesize yujiShuiEDecNum=_yujiShuiEDecNum;
@property(retain, nonatomic) NSDecimalNumber *wantDecNum; // @synthesize wantDecNum=_wantDecNum;
@property(retain, nonatomic) NSDecimalNumber *preTaxEncome_andAllSaveDecNum; // @synthesize preTaxEncome_andAllSaveDecNum=_preTaxEncome_andAllSaveDecNum;
@property(retain, nonatomic) NSDecimalNumber *tichengDecnum; // @synthesize tichengDecnum=_tichengDecnum;
@property(retain, nonatomic) NSString *leijiJieShuiNumStr; // @synthesize leijiJieShuiNumStr=_leijiJieShuiNumStr;
@property(retain, nonatomic) NSString *yujijieyuNumStr; // @synthesize yujijieyuNumStr=_yujijieyuNumStr;
@property(retain, nonatomic) NSString *yujishiFaNumStr; // @synthesize yujishiFaNumStr=_yujishiFaNumStr;
@property(retain, nonatomic) NSString *huanJiekuanNumStr; // @synthesize huanJiekuanNumStr=_huanJiekuanNumStr;
@property(retain, nonatomic) NSString *yujishuiENumStr; // @synthesize yujishuiENumStr=_yujishuiENumStr;
@property(nonatomic) double preTaxEncome_andAllSaveNumFloat; // @synthesize preTaxEncome_andAllSaveNumFloat=_preTaxEncome_andAllSaveNumFloat;
@property(nonatomic) double wantNumFloat; // @synthesize wantNumFloat=_wantNumFloat;
@property(nonatomic) double canDrawMaxNum; // @synthesize canDrawMaxNum=_canDrawMaxNum;
@property(nonatomic) double canDrawMinNum; // @synthesize canDrawMinNum=_canDrawMinNum;
@property(retain, nonatomic) NSString *levelmoney; // @synthesize levelmoney=_levelmoney;
@property(retain, nonatomic) NSString *allPlanIncomeTax; // @synthesize allPlanIncomeTax=_allPlanIncomeTax;
@property(retain, nonatomic) NSString *allPreIncomeTax; // @synthesize allPreIncomeTax=_allPreIncomeTax;
@property(retain, nonatomic) NSString *preTaxEncome_andAllsaveMoney; // @synthesize preTaxEncome_andAllsaveMoney=_preTaxEncome_andAllsaveMoney;
@property(retain, nonatomic) NSString *payBorrowMoney; // @synthesize payBorrowMoney=_payBorrowMoney;
@property(retain, nonatomic) NSString *preTaxEncome; // @synthesize preTaxEncome=_preTaxEncome;
@property(retain, nonatomic) NSString *hrmsalarydetailid; // @synthesize hrmsalarydetailid=_hrmsalarydetailid;
@property(retain, nonatomic) NSString *hrmsalaryid; // @synthesize hrmsalaryid=_hrmsalaryid;
@property(retain, nonatomic) NSString *allSaveMoney; // @synthesize allSaveMoney=_allSaveMoney;
@property(retain, nonatomic) NSString *isAutoDrawCashStr; // @synthesize isAutoDrawCashStr=_isAutoDrawCashStr;
@property(retain, nonatomic) UIButton *autoDrawCashBtn; // @synthesize autoDrawCashBtn=_autoDrawCashBtn;
@property(retain, nonatomic) UILabel *benYueKeLingQuJinEFanWeiLabel; // @synthesize benYueKeLingQuJinEFanWeiLabel=_benYueKeLingQuJinEFanWeiLabel;
@property(retain, nonatomic) UILabel *leijiJieShuiNumlabel; // @synthesize leijiJieShuiNumlabel=_leijiJieShuiNumlabel;
@property(retain, nonatomic) UILabel *yuJiJieYuNumLabel; // @synthesize yuJiJieYuNumLabel=_yuJiJieYuNumLabel;
@property(retain, nonatomic) UILabel *yuJiShiFaNumLabel; // @synthesize yuJiShiFaNumLabel=_yuJiShiFaNumLabel;
@property(retain, nonatomic) UILabel *huanJieKuanNumLabel; // @synthesize huanJieKuanNumLabel=_huanJieKuanNumLabel;
@property(retain, nonatomic) UILabel *yuJiShuiENumLabel; // @synthesize yuJiShuiENumLabel=_yuJiShuiENumLabel;
@property(retain, nonatomic) UITextField *wantDrawTF; // @synthesize wantDrawTF=_wantDrawTF;
@property(retain, nonatomic) UILabel *yingJiaoGeShuiNumLabel; // @synthesize yingJiaoGeShuiNumLabel=_yingJiaoGeShuiNumLabel;
@property(retain, nonatomic) UILabel *benYueShuiqian_leijiJieyuLabel; // @synthesize benYueShuiqian_leijiJieyuLabel=_benYueShuiqian_leijiJieyuLabel;
@property(retain, nonatomic) UILabel *shuiQianGongZiZongENumLabel; // @synthesize shuiQianGongZiZongENumLabel=_shuiQianGongZiZongENumLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *islocal; // @synthesize islocal=_islocal;
@property(copy, nonatomic) NSString *tichengShoruFromMoneyVC; // @synthesize tichengShoruFromMoneyVC=_tichengShoruFromMoneyVC;
@property(copy, nonatomic) NSString *hrmsalarydetailidFromMoneyVC; // @synthesize hrmsalarydetailidFromMoneyVC=_hrmsalarydetailidFromMoneyVC;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)timeVerifyFailWithResponseItem:(id)arg1;
- (void)timeVerifySuccessWithResponseItem:(id)arg1;
- (void)getServerTime;
- (void)doConfirmActionWithTime:(id)arg1;
- (void)globalAlertView:(id)arg1 clickedButtonIndex:(long long)arg2;
- (void)sendTaxplanConfirmRequestFail:(id)arg1;
- (void)sendTaxplanConfirmRequestSuccess:(id)arg1;
- (void)sureActEvent:(id)arg1;
- (void)comeBackToMoneyVC;
- (void)sendTaxplanRequestFail:(id)arg1;
- (_Bool)isBetweenMinNumStr:(id)arg1 andMaxNumStr:(id)arg2 withInput:(id)arg3;
- (id)returnTaxDecNum:(id)arg1 percentNumStr:(id)arg2 andStaticNumStr:(id)arg3;
- (id)personalShouldPayTaxWighInputStr:(id)arg1;
- (id)calculateTaxWithReturnGeshuiYuceDecNum;
- (_Bool)isPureFloat:(id)arg1;
- (_Bool)isPureInt:(id)arg1;
- (id)changeToDecNumWithStr:(id)arg1;
- (id)holdTwoDecimalWithStr:(id)arg1;
- (void)wantGetMoney:(id)arg1;
- (_Bool)isDrawcashNumAvailble;
- (_Bool)isLegalDotWithInputStr:(id)arg1;
- (_Bool)isLegalNumberStr:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)sendTaxplanRequestSuccess:(id)arg1;
- (void)sendRequest;
- (void)salaryExplain;
- (void)creatRightExplainButttonItem;
- (void)callBackKeyboard;
- (void)setNewUserInterface;
- (void)viewDidLoad;
- (id)initWithCommission:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

