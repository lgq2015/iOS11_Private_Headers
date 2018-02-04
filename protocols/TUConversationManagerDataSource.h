/* made by EzioChiu.
 */

@protocol TUConversationManagerDataSource <NSObject>

@required

- (NSDictionary *)conversationsByGroupUUID;
- (<TUConversationManagerDataSourceDelegate> *)delegate;
- (void)invalidate;
- (void)registerWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setDelegate:(id <TUConversationManagerDataSourceDelegate>)arg1;

@end
