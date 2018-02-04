/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMMessageEditChatItem : IMAssociatedMessageChatItem <IMVisibleAssociatedMessageHost> {
    NSArray * _visibleAssociatedMessageChatItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSAttributedString *editedBody;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (setter=_setVisibleAssociatedMessageChatItems:, nonatomic, retain) NSArray *visibleAssociatedMessageChatItems;

- (void).cxx_destruct;
- (void)_setVisibleAssociatedMessageChatItems:(id)arg1;
- (id)editedBody;
- (id)visibleAssociatedMessageChatItems;

@end
