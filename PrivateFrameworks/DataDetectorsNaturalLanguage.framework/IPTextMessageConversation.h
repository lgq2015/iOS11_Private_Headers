/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPTextMessageConversation : NSObject {
    NSArray * _allMessages;
    NSMutableDictionary * _eventsByMessageIdentifierDictionary;
    IPCircularBufferArray * _lastMessages;
    NSMutableDictionary * _messageByMessageIdentifierDictionary;
}

@property (nonatomic, copy) NSArray *allMessages;
@property (retain) NSMutableDictionary *eventsByMessageIdentifierDictionary;
@property (retain) NSMutableDictionary *messageByMessageIdentifierDictionary;

+ (id)collapseMessages:(id)arg1;
+ (id)collapsedMessagesFromMessages:(id)arg1;

- (void).cxx_destruct;
- (void)_scanEventsInLastMessageOnly:(bool)arg1 synchronously:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)addMessage:(id)arg1;
- (id)allMessages;
- (id)eventsByMessageIdentifierDictionary;
- (id)eventsInPreviouslyScannedMessageWithIdentifier:(id)arg1;
- (id)init;
- (id)messageByMessageIdentifierDictionary;
- (id)messageForIdentifier:(id)arg1;
- (void)reset;
- (void)scanEventsInLastMessageOnly:(bool)arg1 synchronously:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setAllMessages:(id)arg1;
- (void)setEventsByMessageIdentifierDictionary:(id)arg1;
- (void)setMessageByMessageIdentifierDictionary:(id)arg1;

@end
