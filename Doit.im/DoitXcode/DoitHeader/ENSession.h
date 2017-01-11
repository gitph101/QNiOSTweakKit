//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ENBusinessNoteStoreClientDelegate.h"
#import "ENLinkedNoteStoreClientDelegate.h"
#import "ENOAuthAuthenticatorDelegate.h"

@class EDAMUser, ENAuthCache, ENNoteStoreClient, ENOAuthAuthenticator, ENPreferencesStore, ENUserStoreClient, NSArray, NSDate, NSLocale, NSObject<OS_dispatch_queue>, NSString;

@interface ENSession : NSObject <ENLinkedNoteStoreClientDelegate, ENBusinessNoteStoreClientDelegate, ENOAuthAuthenticatorDelegate>
{
    _Bool _isAuthenticated;
    _Bool _supportsLinkedAppNotebook;
    id <ENSDKLogging> _logger;
    NSString *_sourceApplication;
    NSLocale *_locale;
    ENOAuthAuthenticator *_authenticator;
    CDUnknownBlockType _authenticationCompletion;
    NSString *_sessionHost;
    EDAMUser *_user;
    ENPreferencesStore *_preferences;
    NSString *_primaryAuthenticationToken;
    ENUserStoreClient *_userStore;
    ENNoteStoreClient *_primaryNoteStore;
    ENNoteStoreClient *_businessNoteStore;
    NSString *_businessShardId;
    ENAuthCache *_authCache;
    NSArray *_notebooksCache;
    NSDate *_notebooksCacheDate;
    NSObject<OS_dispatch_queue> *_thumbnailQueue;
    ENUserStoreClient *_userStorePendingRevocation;
}

+ (_Bool)checkSharedSessionSettings;
+ (id)sharedSession;
+ (void)setSharedSessionDeveloperToken:(id)arg1 noteStoreUrl:(id)arg2;
+ (void)setSharedSessionConsumerKey:(id)arg1 consumerSecret:(id)arg2 optionalHost:(id)arg3;
@property(retain, nonatomic) ENUserStoreClient *userStorePendingRevocation; // @synthesize userStorePendingRevocation=_userStorePendingRevocation;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *thumbnailQueue; // @synthesize thumbnailQueue=_thumbnailQueue;
@property(retain, nonatomic) NSDate *notebooksCacheDate; // @synthesize notebooksCacheDate=_notebooksCacheDate;
@property(retain, nonatomic) NSArray *notebooksCache; // @synthesize notebooksCache=_notebooksCache;
@property(retain, nonatomic) ENAuthCache *authCache; // @synthesize authCache=_authCache;
@property(retain, nonatomic) NSString *businessShardId; // @synthesize businessShardId=_businessShardId;
@property(retain, nonatomic) ENNoteStoreClient *businessNoteStore; // @synthesize businessNoteStore=_businessNoteStore;
@property(retain, nonatomic) ENNoteStoreClient *primaryNoteStore; // @synthesize primaryNoteStore=_primaryNoteStore;
@property(retain, nonatomic) ENUserStoreClient *userStore; // @synthesize userStore=_userStore;
@property(retain, nonatomic) NSString *primaryAuthenticationToken; // @synthesize primaryAuthenticationToken=_primaryAuthenticationToken;
@property(retain, nonatomic) ENPreferencesStore *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) EDAMUser *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *sessionHost; // @synthesize sessionHost=_sessionHost;
@property(copy, nonatomic) CDUnknownBlockType authenticationCompletion; // @synthesize authenticationCompletion=_authenticationCompletion;
@property(retain, nonatomic) ENOAuthAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property(nonatomic) _Bool supportsLinkedAppNotebook; // @synthesize supportsLinkedAppNotebook=_supportsLinkedAppNotebook;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) _Bool isAuthenticated; // @synthesize isAuthenticated=_isAuthenticated;
@property(copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(retain, nonatomic) id <ENSDKLogging> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)storeClientFailedAuthentication:(id)arg1;
- (void)authenticatorDidFailWithError:(id)arg1;
- (void)authenticatorDidAuthenticateWithCredentials:(id)arg1 authInfo:(id)arg2;
- (id)userStoreClientForBootstrapping;
- (id)authenticationTokenForLinkedNotebookRef:(id)arg1;
- (id)noteStoreUrlForBusinessStoreClient:(id)arg1;
- (id)authenticationTokenForBusinessStoreClient:(id)arg1;
- (id)userStoreUrl;
- (void)setCurrentProfileNameFromHost:(id)arg1;
- (id)currentProfileName;
- (id)authenticationTokenForNoteRef:(id)arg1;
- (id)shardIdForNoteRef:(id)arg1;
- (id)noteStoreForNotebook:(id)arg1;
- (id)noteStoreForNoteRef:(id)arg1;
- (id)noteStoreForLinkedNotebook:(id)arg1;
- (void)notifyAuthenticationChanged;
- (id)validBusinessAuthenticationResult;
- (id)primaryCredentials;
- (void)saveCredentialStore:(id)arg1;
- (void)addCredentials:(id)arg1;
- (id)credentialsForHost:(id)arg1;
- (id)credentialStore;
- (_Bool)isErrorDueToRestrictedAuth:(id)arg1;
- (void)downloadThumbnailForNote:(id)arg1 maxDimension:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadNote:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)findNotes_completeWithContext:(id)arg1 error:(id)arg2;
- (void)findNotes_processResultsWithContext:(id)arg1;
- (void)findNotes_nextFindInLinkedScopeWithContext:(id)arg1;
- (void)findNotes_findInLinkedScopeWithContext:(id)arg1;
- (void)findNotes_findInBusinessScopeWithContext:(id)arg1;
- (void)findNotes_findInPersonalScopeWithContext:(id)arg1;
- (void)findNotes_listNotebooksWithContext:(id)arg1;
- (void)findNotesWithSearch:(id)arg1 inNotebook:(id)arg2 orScope:(unsigned long long)arg3 sortOrder:(unsigned long long)arg4 maxResults:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)deleteNote:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shareNote:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)uploadNote_completeWithContext:(id)arg1 error:(id)arg2;
- (void)uploadNote_createWithContext:(id)arg1;
- (void)uploadNote_findSharedAppNotebookWithContext:(id)arg1;
- (void)uploadNote_findLinkedAppNotebookWithContext:(id)arg1;
- (void)uploadNote_updateWithContext:(id)arg1;
- (void)uploadNote_determineDestinationWithContext:(id)arg1;
- (void)uploadNote:(id)arg1 policy:(long long)arg2 toNotebook:(id)arg3 orReplaceNote:(id)arg4 progress:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)uploadNote:(id)arg1 notebook:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)listNotebooks_completeWithContext:(id)arg1 error:(id)arg2;
- (void)listNotebooks_prepareResultsWithContext:(id)arg1;
- (void)listNotebooks_processSharedNotebooksWithContext:(id)arg1;
- (void)listNotebooks_completePendingSharedNotebookWithContext:(id)arg1;
- (void)listNotebooks_fetchSharedNotebooksWithContext:(id)arg1;
- (void)listNotebooks_processBusinessNotebooksWithContext:(id)arg1;
- (void)listNotebooks_fetchBusinessNotebooksWithContext:(id)arg1;
- (void)listNotebooks_fetchSharedBusinessNotebooksWithContext:(id)arg1;
- (void)listNotebooks_listLinkedNotebooksWithContext:(id)arg1;
- (void)listNotebooks_listSharedNotebooksWithContext:(id)arg1;
- (void)listNotebooks_listNotebooksWithContext:(id)arg1;
- (void)listNotebooksWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)handleOpenURL:(id)arg1;
- (void)unauthenticate;
- (_Bool)appNotebookIsLinked;
- (int)userID;
@property(readonly, nonatomic) NSString *businessDisplayName;
@property(readonly, nonatomic) NSString *userDisplayName;
@property(readonly, nonatomic) _Bool isBusinessUser;
@property(readonly, nonatomic) _Bool isPremiumUser;
@property(readonly, nonatomic) _Bool isAuthenticationInProgress;
- (void)completeAuthenticationWithError:(id)arg1;
- (void)performPostAuthentication;
- (void)authenticateWithViewController:(id)arg1 preferRegistration:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)selectInitialSessionHost;
- (void)startup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
