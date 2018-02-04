/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCarAutoReplier : NSObject <IMDAutoReplying> {
    CARAutomaticDNDStatus * _automaticDNDStatus;
    NSMutableDictionary * _propertiesForChatIdentifiers;
    NSObject<OS_dispatch_queue> * _queue;
    <IMDAutoReplyDelegate> * _replyDelegate;
}

@property (nonatomic, retain) CARAutomaticDNDStatus *automaticDNDStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *propertiesForChatIdentifiers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) <IMDAutoReplyDelegate> *replyDelegate;
@property (readonly) Class superclass;

- (bool)_audience:(unsigned long long)arg1 allowsRepliesToChat:(id)arg2;
- (unsigned long long)_autoReplyAudiencePreference;
- (bool)_contactsContainsParticipants:(id)arg1;
- (id)_customizedAutoReplyMessage;
- (bool)_favoritesContainsParticipants:(id)arg1;
- (void)_handleGeneratedAutoReplyText:(id)arg1 forChat:(id)arg2;
- (void)_handleReceivedUrgentRequestForMessages:(id)arg1;
- (bool)_hasRecentOutgoingMessagesInChat:(id)arg1;
- (bool)_isActive;
- (id)_propertiesForChat:(id)arg1;
- (void)_updateDNDStatus;
- (bool)_urgentTriggerMatchInText:(id)arg1;
- (id)automaticDNDStatus;
- (void)dealloc;
- (id)init;
- (void)processMessages:(id)arg1 inChat:(id)arg2;
- (id)propertiesForChatIdentifiers;
- (id)queue;
- (id)replyDelegate;
- (void)setAutomaticDNDStatus:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setReplyDelegate:(id)arg1;

@end
