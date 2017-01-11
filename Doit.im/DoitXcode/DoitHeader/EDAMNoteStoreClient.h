//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EDAMNoteStore.h"

@class NSString;

@interface EDAMNoteStoreClient : NSObject <EDAMNoteStore>
{
    id <TProtocol> _inProtocol;
    id <TProtocol> _outProtocol;
}

- (void).cxx_destruct;
- (id)findInBusiness:(id)arg1 query:(id)arg2;
- (id)findRelated:(id)arg1 query:(id)arg2 resultSpec:(id)arg3;
- (id)authenticateToSharedNote:(id)arg1 noteKey:(id)arg2 authenticationToken:(id)arg3;
- (void)stopSharingNote:(id)arg1 guid:(id)arg2;
- (id)shareNote:(id)arg1 guid:(id)arg2;
- (void)emailNote:(id)arg1 parameters:(id)arg2;
- (id)getSharedNotebookByAuth:(id)arg1;
- (id)authenticateToSharedNotebook:(id)arg1 authenticationToken:(id)arg2;
- (int)expungeLinkedNotebook:(id)arg1 guid:(id)arg2;
- (id)listLinkedNotebooks:(id)arg1;
- (int)updateLinkedNotebook:(id)arg1 linkedNotebook:(id)arg2;
- (id)createLinkedNotebook:(id)arg1 linkedNotebook:(id)arg2;
- (int)expungeSharedNotebooks:(id)arg1 sharedNotebookIds:(id)arg2;
- (id)listSharedNotebooks:(id)arg1;
- (int)sendMessageToSharedNotebookMembers:(id)arg1 notebookGuid:(id)arg2 messageText:(id)arg3 recipients:(id)arg4;
- (int)setSharedNotebookRecipientSettings:(id)arg1 sharedNotebookId:(long long)arg2 recipientSettings:(id)arg3;
- (int)updateSharedNotebook:(id)arg1 sharedNotebook:(id)arg2;
- (id)shareNotebook:(id)arg1 sharedNotebook:(id)arg2 message:(id)arg3;
- (id)createSharedNotebook:(id)arg1 sharedNotebook:(id)arg2;
- (id)getPublicNotebook:(int)arg1 publicUri:(id)arg2;
- (id)getResourceAttributes:(id)arg1 guid:(id)arg2;
- (id)getResourceAlternateData:(id)arg1 guid:(id)arg2;
- (id)getResourceRecognition:(id)arg1 guid:(id)arg2;
- (id)getResourceByHash:(id)arg1 noteGuid:(id)arg2 contentHash:(id)arg3 withData:(_Bool)arg4 withRecognition:(_Bool)arg5 withAlternateData:(_Bool)arg6;
- (id)getResourceData:(id)arg1 guid:(id)arg2;
- (int)updateResource:(id)arg1 resource:(id)arg2;
- (int)unsetResourceApplicationDataEntry:(id)arg1 guid:(id)arg2 key:(id)arg3;
- (int)setResourceApplicationDataEntry:(id)arg1 guid:(id)arg2 key:(id)arg3 value:(id)arg4;
- (id)getResourceApplicationDataEntry:(id)arg1 guid:(id)arg2 key:(id)arg3;
- (id)getResourceApplicationData:(id)arg1 guid:(id)arg2;
- (id)getResource:(id)arg1 guid:(id)arg2 withData:(_Bool)arg3 withRecognition:(_Bool)arg4 withAttributes:(_Bool)arg5 withAlternateData:(_Bool)arg6;
- (id)getNoteVersion:(id)arg1 noteGuid:(id)arg2 updateSequenceNum:(int)arg3 withResourcesData:(_Bool)arg4 withResourcesRecognition:(_Bool)arg5 withResourcesAlternateData:(_Bool)arg6;
- (id)listNoteVersions:(id)arg1 noteGuid:(id)arg2;
- (id)copyNote:(id)arg1 noteGuid:(id)arg2 toNotebookGuid:(id)arg3;
- (int)expungeInactiveNotes:(id)arg1;
- (int)expungeNotes:(id)arg1 noteGuids:(id)arg2;
- (int)expungeNote:(id)arg1 guid:(id)arg2;
- (int)deleteNote:(id)arg1 guid:(id)arg2;
- (id)updateNote:(id)arg1 note:(id)arg2;
- (id)createNote:(id)arg1 note:(id)arg2;
- (id)getNoteTagNames:(id)arg1 guid:(id)arg2;
- (id)getResourceSearchText:(id)arg1 guid:(id)arg2;
- (id)getNoteSearchText:(id)arg1 guid:(id)arg2 noteOnly:(_Bool)arg3 tokenizeForIndexing:(_Bool)arg4;
- (id)getNoteContent:(id)arg1 guid:(id)arg2;
- (int)unsetNoteApplicationDataEntry:(id)arg1 guid:(id)arg2 key:(id)arg3;
- (int)setNoteApplicationDataEntry:(id)arg1 guid:(id)arg2 key:(id)arg3 value:(id)arg4;
- (id)getNoteApplicationDataEntry:(id)arg1 guid:(id)arg2 key:(id)arg3;
- (id)getNoteApplicationData:(id)arg1 guid:(id)arg2;
- (id)getNote:(id)arg1 guid:(id)arg2 withContent:(_Bool)arg3 withResourcesData:(_Bool)arg4 withResourcesRecognition:(_Bool)arg5 withResourcesAlternateData:(_Bool)arg6;
- (id)findNoteCounts:(id)arg1 filter:(id)arg2 withTrash:(_Bool)arg3;
- (id)findNotesMetadata:(id)arg1 filter:(id)arg2 offset:(int)arg3 maxNotes:(int)arg4 resultSpec:(id)arg5;
- (int)findNoteOffset:(id)arg1 filter:(id)arg2 guid:(id)arg3;
- (id)findNotes:(id)arg1 filter:(id)arg2 offset:(int)arg3 maxNotes:(int)arg4;
- (int)expungeSearch:(id)arg1 guid:(id)arg2;
- (int)updateSearch:(id)arg1 search:(id)arg2;
- (id)createSearch:(id)arg1 search:(id)arg2;
- (id)getSearch:(id)arg1 guid:(id)arg2;
- (id)listSearches:(id)arg1;
- (int)expungeTag:(id)arg1 guid:(id)arg2;
- (void)untagAll:(id)arg1 guid:(id)arg2;
- (int)updateTag:(id)arg1 tag:(id)arg2;
- (id)createTag:(id)arg1 tag:(id)arg2;
- (id)getTag:(id)arg1 guid:(id)arg2;
- (id)listTagsByNotebook:(id)arg1 notebookGuid:(id)arg2;
- (id)listTags:(id)arg1;
- (int)expungeNotebook:(id)arg1 guid:(id)arg2;
- (int)updateNotebook:(id)arg1 notebook:(id)arg2;
- (id)createNotebook:(id)arg1 notebook:(id)arg2;
- (id)getDefaultNotebook:(id)arg1;
- (id)getNotebook:(id)arg1 guid:(id)arg2;
- (id)listPublishedBusinessNotebooks:(id)arg1;
- (id)listNotebooks:(id)arg1;
- (id)getLinkedNotebookSyncChunk:(id)arg1 linkedNotebook:(id)arg2 afterUSN:(int)arg3 maxEntries:(int)arg4 fullSyncOnly:(_Bool)arg5;
- (id)getLinkedNotebookSyncState:(id)arg1 linkedNotebook:(id)arg2;
- (id)getFilteredSyncChunk:(id)arg1 afterUSN:(int)arg2 maxEntries:(int)arg3 filter:(id)arg4;
- (id)getSyncChunk:(id)arg1 afterUSN:(int)arg2 maxEntries:(int)arg3 fullSyncOnly:(_Bool)arg4;
- (id)getSyncStateWithMetrics:(id)arg1 clientMetrics:(id)arg2;
- (id)getSyncState:(id)arg1;
- (id)outProtocol;
- (id)inProtocol;
- (id)initWithInProtocol:(id)arg1 outProtocol:(id)arg2;
- (id)initWithProtocol:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

