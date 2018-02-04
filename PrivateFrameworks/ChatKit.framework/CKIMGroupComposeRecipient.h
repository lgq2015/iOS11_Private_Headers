/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKIMGroupComposeRecipient : MFComposeRecipient <CKIMComposeRecipient> {
    NSArray * _composeRecipients;
    NSString * _conversationGUID;
    NSString * _detailsString;
    NSArray * _handles;
    NSDate * _lastMessageDate;
    CKIMComposeRecipient * _matchingRecipient;
}

@property (nonatomic, retain) NSArray *composeRecipients;
@property (nonatomic, retain) NSString *conversationGUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *detailsString;
@property (nonatomic, retain) NSString *displayString;
@property (nonatomic, retain) NSArray *handles;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastMessageDate;
@property (nonatomic, retain) CKIMComposeRecipient *matchingRecipient;
@property (readonly) Class superclass;

+ (id)composeRecipientWithConversation:(id)arg1 searchTerm:(id)arg2 matchingRecipient:(id)arg3;

- (void).cxx_destruct;
- (id)address;
- (id)composeRecipients;
- (id)compositeName;
- (id)conversationGUID;
- (void)dealloc;
- (id)detailsString;
- (id)handles;
- (id)initWithGUID:(id)arg1 displayString:(id)arg2 detailsString:(id)arg3 handles:(id)arg4 lastMessageDate:(id)arg5 searchTerm:(id)arg6 matchingRecipient:(id)arg7;
- (bool)isRemovableFromSearchResults;
- (id)lastMessageDate;
- (id)matchingRecipient;
- (void)releaseIMReferences;
- (void)setComposeRecipients:(id)arg1;
- (void)setConversationGUID:(id)arg1;
- (void)setDetailsString:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setHandles:(id)arg1;
- (void)setLastMessageDate:(id)arg1;
- (void)setMatchingRecipient:(id)arg1;

@end
