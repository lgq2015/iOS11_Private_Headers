/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGTextMessage : SGMessage {
    NSString * _conversationIdentifier;
    NSArray * _recipients;
    CSPerson * _sender;
    bool  _senderIsAccountOwner;
}

@property (retain) NSString *conversationIdentifier;
@property (retain) NSArray *recipients;
@property (retain) CSPerson *sender;
@property (readonly) bool senderIsAccountOwner;

- (void).cxx_destruct;
- (id)conversationIdentifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSearchableItem:(id)arg1;
- (id)recipients;
- (id)sender;
- (bool)senderIsAccountOwner;
- (void)setConversationIdentifier:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (id)spotlightBundleIdentifier;
- (id)spotlightDomainIdentifier;

@end
