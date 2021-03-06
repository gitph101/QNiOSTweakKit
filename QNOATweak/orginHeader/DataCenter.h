//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, RSASecurity;

@interface DataCenter : NSObject
{
    RSASecurity *_security;
    NSArray *_cookies;
}

+ (id)sharedDataCenter;
@property(retain, nonatomic) NSArray *cookies; // @synthesize cookies=_cookies;
@property(retain, nonatomic) RSASecurity *security; // @synthesize security=_security;
- (void).cxx_destruct;
- (id)httpCookies;
- (void)deleteHTTPCookies;
- (void)saveHTTPCookies;
- (void)sendFailResponseItem:(id)arg1;
- (void)sendSuccessResponseItem:(id)arg1;
- (int)sendRequestWithRequestItem:(id)arg1;
- (id)decryptDataWithCipherString:(id)arg1;
- (id)encryptDataWithPlainString:(id)arg1;
- (id)generateRequestHeader;
- (id)init;
- (void)returnRulesNotificationStateWithResponseItem:(id)arg1;
- (int)sendToGetRulesNotificationStateWithDocid:(id)arg1 Target:(id)arg2 successSEL:(SEL)arg3 failSEL:(SEL)arg4;
- (void)returnSearchNotificationWithResponseItem:(id)arg1;
- (int)sendToSearchNotificationWithTypeCodeStr:(id)arg1 Target:(id)arg2 successSEL:(SEL)arg3 failSEL:(SEL)arg4;
- (void)returnIMNotificationRangeWithResponseItem:(id)arg1;
- (int)sendToGetNotificationRightWithTarget:(id)arg1 successSEL:(SEL)arg2 failSEL:(SEL)arg3;
- (void)returnIMFrequencyStateResponseItem:(id)arg1;
- (int)sendToServerIMFrequencyStateWithResourceIdRsa:(id)arg1 target:(id)arg2 successSEL:(SEL)arg3 failSEL:(SEL)arg4;
- (void)returnFangBindStateResponseItem:(id)arg1;
- (int)sendToGetFangBindStateRequestWithResourceIdRsa:(id)arg1 target:(id)arg2 successSEL:(SEL)arg3 failSEL:(SEL)arg4;
- (void)returnEmailLoginMessageWithResponseItem:(id)arg1;
- (int)sendEmailLoginRequestWithResourceIdRsa:(id)arg1 token:(id)arg2 deviceId:(id)arg3 emailAccount:(id)arg4 emailPwdDes:(id)arg5 target:(id)arg6 successSEL:(SEL)arg7 failSEL:(SEL)arg8;
- (void)returnWalletQAofHelpCenterData:(id)arg1;
- (int)sendWalletQAofHelpCenterRequestWithResourceIdRsa:(id)arg1 token:(id)arg2 offsetvalue:(long long)arg3 target:(id)arg4 successSEL:(SEL)arg5 failSEL:(SEL)arg6;
- (void)returnUserBehaviorIdResponseItem:(id)arg1;
- (int)sendUserBehaviorRecordWithBehaviorId:(long long)arg1 target:(id)arg2 successSEL:(SEL)arg3 failSEL:(SEL)arg4;
- (void)returnPhoneLoginBindingFangWithResponseItem:(id)arg1;
- (int)phoneLoginBindingFangWithMobile:(id)arg1 verifyCode:(id)arg2 resourceIdRsa:(id)arg3 token:(id)arg4 idCardNumber:(id)arg5 cityName:(id)arg6 userName:(id)arg7 deviceId:(id)arg8 target:(id)arg9 successSEL:(SEL)arg10 failSEL:(SEL)arg11;
- (void)returnFangVerifyCodeWithResponseItem:(id)arg1;
- (int)getFangVerifyCodeRequestWithResourceIdRsa:(id)arg1 token:(id)arg2 deviceId:(id)arg3 mobile:(id)arg4 target:(id)arg5 successSEL:(SEL)arg6 failSEL:(SEL)arg7;
- (void)returnPayoutProcess:(id)arg1;
- (int)sendPayoutProcessRequestWithResourceIdRsa:(id)arg1 token:(id)arg2 resoucename:(id)arg3 deviceId:(id)arg4 recordId:(id)arg5 target:(id)arg6 successSEL:(SEL)arg7 failSEL:(SEL)arg8;
- (void)returnSalaryData:(id)arg1;
- (int)sendSalaryDataRequestWithResourceIdRsa:(id)arg1 token:(id)arg2 idStr:(id)arg3 deviceId:(id)arg4 target:(id)arg5 successSEL:(SEL)arg6 failSEL:(SEL)arg7;
- (void)returnIncomeData:(id)arg1;
- (int)sendIncomeDataRequestWithResourceIdRsa:(id)arg1 token:(id)arg2 idStr:(id)arg3 deviceId:(id)arg4 target:(id)arg5 successSEL:(SEL)arg6 failSEL:(SEL)arg7;
- (void)returnBalanceHistoryData:(id)arg1;
- (int)sendHistoryMoneyRequestWithResourceIdRsa:(id)arg1 token:(id)arg2 pagenum:(long long)arg3 target:(id)arg4 successSEL:(SEL)arg5 failSEL:(SEL)arg6;
- (void)returnIncomeExpensesBalanceData:(id)arg1;
- (int)sendBalanceRequestWithResourceIdRsa:(id)arg1 token:(id)arg2 pagenum:(long long)arg3 target:(id)arg4 successSEL:(SEL)arg5 failSEL:(SEL)arg6;
- (void)parseDrawCashWithEncryptParaRequestData:(id)arg1;
- (int)sendDrawCashRequestWithEncryptPara:(id)arg1 target:(id)arg2 successSEL:(SEL)arg3 failSEL:(SEL)arg4;
- (void)parseUserTaxplanEncryptParaRequestData:(id)arg1;
- (int)sendTaxplanConfirmRequestWithEncryptPara:(id)arg1 target:(id)arg2 successSEL:(SEL)arg3 failSEL:(SEL)arg4;
- (void)parseUserTaxPlanRequestData:(id)arg1;
- (int)sendTaxplanRequestWithResourceIdRsa:(id)arg1 token:(id)arg2 hrmsalarydetailid:(id)arg3 target:(id)arg4 successSEL:(SEL)arg5 failSEL:(SEL)arg6;
- (void)parseUserWalletAgreementRequestData:(id)arg1;
- (int)sendWalletAgreementRequestWithResourceIdRsa:(id)arg1 token:(id)arg2 target:(id)arg3 successSEL:(SEL)arg4 failSEL:(SEL)arg5;
- (void)setWalletSetStateWithDict:(id)arg1;
- (void)parseUserWalletRequestData:(id)arg1;
- (int)sendWalletRequestWithResourceIdRsa:(id)arg1 token:(id)arg2 target:(id)arg3 successSEL:(SEL)arg4 failSEL:(SEL)arg5;
- (void)parseUserSalaryRequestData:(id)arg1;
- (int)sendSalaryRequestWithResourceIdRsa:(id)arg1 token:(id)arg2 target:(id)arg3 successSEL:(SEL)arg4 failSEL:(SEL)arg5;
- (void)returnLogin:(id)arg1;
- (int)requestLogin:(id)arg1 target:(id)arg2 successSEL:(SEL)arg3 failSEL:(SEL)arg4;
- (void)returnScanLoginInfo:(id)arg1;
- (int)requestScanLoginInfo:(id)arg1 target:(id)arg2 successSEL:(SEL)arg3 failSEL:(SEL)arg4;
- (void)returnGroupInfoData:(id)arg1;
- (int)requestJoinGroupInfo:(id)arg1 username:(id)arg2 signStr:(id)arg3 target:(id)arg4 successSEL:(SEL)arg5 failSEL:(SEL)arg6;
- (void)parseUserQRcodeRequestData:(id)arg1;
- (int)sendPersonalQRcodeRequestWithUserID:(id)arg1 token:(id)arg2 target:(id)arg3 successSEL:(SEL)arg4 failSEL:(SEL)arg5;
- (void)parsePersonalSuggestTionRequestData:(id)arg1;
- (int)sendPersonalSuggestionRequestWithUploadData:(id)arg1 serverName:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 productid:(id)arg5 version:(id)arg6 suggeContent:(id)arg7 target:(id)arg8 successSEL:(SEL)arg9 failSEL:(SEL)arg10;
- (void)getProductsRequestData:(id)arg1;
- (int)getSuggestProductsWithUserID:(id)arg1 token:(id)arg2 target:(id)arg3 successSEL:(SEL)arg4 failSEL:(SEL)arg5;
- (id)md5:(id)arg1;
- (void)parseUserSinatureRequestData:(id)arg1;
- (int)sendUserSinatureRequestWithInformation:(id)arg1 target:(id)arg2 successSEL:(SEL)arg3 failSEL:(SEL)arg4;
- (void)parsePersonalProfileRequestData:(id)arg1;
- (int)sendPersonalProfileRequestWithUploadData:(id)arg1 serverName:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 target:(id)arg5 successSEL:(SEL)arg6 failSEL:(SEL)arg7;
- (void)parseMessageDetailRequestData:(id)arg1;
- (void)parseVerifyPasswordRequestData:(id)arg1;
- (int)sendVerifyPasswordRequestWithUserName:(id)arg1 password:(id)arg2 target:(id)arg3 successSEL:(SEL)arg4 failSEL:(SEL)arg5;
- (void)parseVerifyRequestData:(id)arg1;
- (int)sendVerifyRequestWithUserID:(id)arg1 verifyCode:(id)arg2 type:(long long)arg3 target:(id)arg4 successSEL:(SEL)arg5 failSEL:(SEL)arg6;
- (void)parseMailVerifyCodeRequestData:(id)arg1;
- (int)sendMailVerifyCodeRequestWithUserID:(id)arg1 mail:(id)arg2 target:(id)arg3 successSEL:(SEL)arg4 failSEL:(SEL)arg5;
- (void)parseVerifyCodeRequestData:(id)arg1;
- (int)sendVerifyCodeRequestWithUserID:(id)arg1 mobilePhoneNumber:(id)arg2 target:(id)arg3 successSEL:(SEL)arg4 failSEL:(SEL)arg5;
- (void)setIMUserBasicInfoWithUserBasicInfo:(id)arg1;
- (void)parseUserInfoRequestData:(id)arg1;
- (int)sendUserInfoRequestWithUserID:(id)arg1 target:(id)arg2 successSEL:(SEL)arg3 failSEL:(SEL)arg4;
- (void)parseUserDynamicpwdRequestData:(id)arg1;
- (int)sendUserDynamicpwdWithUserName:(id)arg1 dynamicPwd:(id)arg2 tempToken:(id)arg3 target:(id)arg4 successSEL:(SEL)arg5 failSEL:(SEL)arg6;
- (void)parseUserLoginRequestData:(id)arg1;
- (int)sendUserLoginRequestWithUserName:(id)arg1 password:(id)arg2 target:(id)arg3 successSEL:(SEL)arg4 failSEL:(SEL)arg5;
- (void)parseApplyForPunchCardRequestData:(id)arg1;
- (int)sendApplyForPunchCardRequestWithUserID:(id)arg1 deviceId:(id)arg2 token:(id)arg3 bdkType:(id)arg4 bdkTime:(id)arg5 bdkDate:(id)arg6 bdkReason:(id)arg7 target:(id)arg8 successSEL:(SEL)arg9 failSEL:(SEL)arg10;
- (void)parseAppCoordInfoRequestData:(id)arg1;
- (int)sendAppCoordInfoRequestWithLongitude:(id)arg1 latitude:(id)arg2 appCoordId:(id)arg3 target:(id)arg4 successSEL:(SEL)arg5 failSEL:(SEL)arg6;
- (void)parsePhoneSignInRecordRequestData:(id)arg1;
- (int)sendPhoneSignInRecordWithUserID:(id)arg1 page:(long long)arg2 target:(id)arg3 successSEL:(SEL)arg4 failSEL:(SEL)arg5;
- (void)parseSearchAttendancePlaceRequestData:(id)arg1;
- (int)sendSearchAttendancePlaceRequestWithLongitude:(id)arg1 latitude:(id)arg2 keyword:(id)arg3 page:(long long)arg4 target:(id)arg5 successSEL:(SEL)arg6 failSEL:(SEL)arg7;
- (void)parsePhoneSignInRequestData:(id)arg1;
- (int)sendPhoneSignInRequestWithUserID:(id)arg1 deviceID:(id)arg2 companyID:(id)arg3 longitude:(id)arg4 latitude:(id)arg5 target:(id)arg6 successSEL:(SEL)arg7 failSEL:(SEL)arg8;
- (void)parseAttendancePointRequestData:(id)arg1;
- (int)sendAttendancePointRequestWithLongitude:(id)arg1 latitude:(id)arg2 target:(id)arg3 successSEL:(SEL)arg4 failSEL:(SEL)arg5;
- (void)parseShareStatisticRequestData:(id)arg1;
- (int)sendUserShareStatisticRequestWithTitle:(id)arg1 url:(id)arg2 sharePlatform:(id)arg3 target:(id)arg4 successSEL:(SEL)arg5 failSEL:(SEL)arg6;
- (void)parseWorkFlowIdRequestData:(id)arg1;
- (int)sendGetWorkflowidWithUserID:(id)arg1 token:(id)arg2 target:(id)arg3 successSEL:(SEL)arg4 failSEL:(SEL)arg5;
- (void)parseNormalModifyMainVCInitRequestData:(id)arg1;
- (int)sendNormalMainVCInitRequestWithUserID:(id)arg1 target:(id)arg2 successSEL:(SEL)arg3 failSEL:(SEL)arg4;
- (void)parseProcessWebDetailsRequestData:(id)arg1;
- (int)sendProcessWebDetailsRequestWithUserId:(id)arg1 workflowid:(id)arg2 detailid:(id)arg3 formid:(id)arg4 requestid:(id)arg5 detaildataid:(id)arg6 method:(id)arg7 target:(id)arg8 successSEL:(SEL)arg9 failSEL:(SEL)arg10;
- (void)returnReminderNoticeData:(id)arg1;
- (int)requestReminderNoticeWithResourceIdRsa:(id)arg1 deviceId:(id)arg2 token:(id)arg3 requestId:(id)arg4 target:(id)arg5 successSEL:(SEL)arg6 failSEL:(SEL)arg7;
- (void)parseApprovalIdeaRequestData:(id)arg1;
- (int)sendApprovalIdeaRequestWithUserId:(id)arg1 longTicket:(id)arg2 workflowId:(id)arg3 requestId:(id)arg4 remark:(id)arg5 logtype:(id)arg6 target:(id)arg7 successSEL:(SEL)arg8 failSEL:(SEL)arg9;
- (void)parseProcessDetailsRequestData:(id)arg1;
- (int)sendProcessDetailsRequestWithUserID:(id)arg1 processID:(id)arg2 workflowid:(id)arg3 target:(id)arg4 nextRequestIds:(id)arg5 successSEL:(SEL)arg6 failSEL:(SEL)arg7;
- (void)parseCompanyDoneListContentInitRequestData:(id)arg1;
- (int)sendCompanyDoneListContentInitRequestWithUserID:(id)arg1 startdate:(id)arg2 enddate:(id)arg3 page:(long long)arg4 searchcondation:(id)arg5 target:(id)arg6 successSEL:(SEL)arg7 failSEL:(SEL)arg8;
- (void)parseCompanyTodoListContentInitRequestData:(id)arg1;
- (int)sendCompanyTodoListContentInitRequestWithUserID:(id)arg1 companyID:(id)arg2 typeCode:(id)arg3 searchcondation:(id)arg4 startdate:(id)arg5 enddate:(id)arg6 title:(id)arg7 page:(long long)arg8 status:(id)arg9 target:(id)arg10 successSEL:(SEL)arg11 failSEL:(SEL)arg12;
- (void)parseCategoryModifyTodoContentInitRequestData:(id)arg1;
- (int)sendCategoryTodoContentInitRequestWithUserID:(id)arg1 categoryID:(id)arg2 status:(id)arg3 companyID:(id)arg4 target:(id)arg5 successSEL:(SEL)arg6 failSEL:(SEL)arg7;
- (void)parseCompanyListContentInitRequestData:(id)arg1;
- (int)sendCompanyListContentInitRequestWithUserID:(id)arg1 searchcondation:(id)arg2 startdate:(id)arg3 enddate:(id)arg4 type:(id)arg5 page:(long long)arg6 target:(id)arg7 successSEL:(SEL)arg8 failSEL:(SEL)arg9;
- (void)parseCompanyTodoContentInitRequestData:(id)arg1;
- (int)sendCompanyTodoContentInitRequestWithUserID:(id)arg1 status:(id)arg2 companyID:(id)arg3 target:(id)arg4 successSEL:(SEL)arg5 failSEL:(SEL)arg6;
- (void)parseSeniorModifyMainVCInitRequestData:(id)arg1;
- (int)sendSeniorMainVCInitRequestWithUserID:(id)arg1 status:(id)arg2 target:(id)arg3 successSEL:(SEL)arg4 failSEL:(SEL)arg5;
- (void)returnServerTimeVerifyWithReuestData:(id)arg1;
- (int)sendGetServerTimeRequestWithDeviceTime:(id)arg1 target:(id)arg2 successSEL:(SEL)arg3 failSEL:(SEL)arg4;
- (void)returnVersionIntroducedData:(id)arg1;
- (int)requestVersionIntroducedWithResourceIdRsa:(id)arg1 token:(id)arg2 deviceId:(id)arg3 appVersionId:(id)arg4 target:(id)arg5 successSEL:(SEL)arg6 failSEL:(SEL)arg7;
- (void)returnRecordVersionData:(id)arg1;
- (int)requestRecordVersionWithResourceIdRsa:(id)arg1 token:(id)arg2 deviceId:(id)arg3 pageNum:(long long)arg4 target:(id)arg5 successSEL:(SEL)arg6 failSEL:(SEL)arg7;
- (void)parseCheckVersionRequestData:(id)arg1;
- (int)sendCheckVersionRequestWithVersion:(id)arg1 target:(id)arg2 successSEL:(SEL)arg3 failSEL:(SEL)arg4;
- (void)returnWalletSetData:(id)arg1;
- (int)requestWalletSetWithIsautocashmoney:(id)arg1 Isplanmaxmoney:(id)arg2 target:(id)arg3 successSEL:(SEL)arg4 failSEL:(SEL)arg5;
- (void)parseRemindCycleRequestData:(id)arg1;
- (int)setTodoRemindCycleWithUserID:(id)arg1 token:(id)arg2 cycType:(id)arg3 pushType:(id)arg4 target:(id)arg5 successSEL:(SEL)arg6 failSEL:(SEL)arg7;
- (void)parseIMSoundRequestData:(id)arg1;
- (int)sendIMSoundRequestWithUserID:(id)arg1 string:(id)arg2 target:(id)arg3 successSEL:(SEL)arg4 failSEL:(SEL)arg5;
- (void)parseSoundRequestData:(id)arg1;
- (int)sendSoundRequestWithUserID:(id)arg1 soundStatus:(id)arg2 target:(id)arg3 successSEL:(SEL)arg4 failSEL:(SEL)arg5;
- (void)parseDeviceTokenRequestData:(id)arg1;
- (int)sendDeviceTokenRequestWithUserID:(id)arg1 deviceToken:(id)arg2 target:(id)arg3 successSEL:(SEL)arg4 failSEL:(SEL)arg5;

@end

