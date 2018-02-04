/* made by EzioChiu.
 */

@protocol SFCard <NSObject>

@required

- (NSString *)cardId;
- (NSArray *)cardSections;
- (NSString *)contextReferenceIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSArray *)dismissalCommands;
- (NSData *)entityIdentifier;
- (NSArray *)entityProtobufMessages;
- (NSString *)fbr;
- (bool)flexibleSectionOrder;
- (NSData *)intentMessageData;
- (NSString *)intentMessageName;
- (NSData *)intentResponseMessageData;
- (NSString *)intentResponseMessageName;
- (NSData *)jsonData;
- (unsigned long long)queryId;
- (NSString *)resultIdentifier;
- (void)setCardId:(NSString *)arg1;
- (void)setCardSections:(NSArray *)arg1;
- (void)setContextReferenceIdentifier:(NSString *)arg1;
- (void)setDismissalCommands:(NSArray *)arg1;
- (void)setEntityIdentifier:(NSData *)arg1;
- (void)setEntityProtobufMessages:(NSArray *)arg1;
- (void)setFbr:(NSString *)arg1;
- (void)setFlexibleSectionOrder:(bool)arg1;
- (void)setIntentMessageData:(NSData *)arg1;
- (void)setIntentMessageName:(NSString *)arg1;
- (void)setIntentResponseMessageData:(NSData *)arg1;
- (void)setIntentResponseMessageName:(NSString *)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setResultIdentifier:(NSString *)arg1;
- (void)setSource:(int)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setType:(int)arg1;
- (void)setUrlValue:(NSURL *)arg1;
- (int)source;
- (NSString *)title;
- (int)type;
- (NSURL *)urlValue;

@end
