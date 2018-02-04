/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKComposeRecipientSelectionController : CKRecipientSelectionController <UITextFieldDelegate> {
    id /* block */  _sendBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKComposeRecipientSelectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *expandedRecipients;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *proposedRecipients;
@property (nonatomic, copy) id /* block */ sendBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateBackfillForNewRecipients;
- (void)addRecipient:(id)arg1;
- (bool)alwaysShowSearchResultsTable;
- (void)atomizeAndInvokeBlock:(id /* block */)arg1;
- (void)atomizeAndSendTimeoutHandler;
- (void)dealloc;
- (id)expandedRecipients;
- (bool)homogenizePreferredServiceForiMessage;
- (id)proposedRecipients;
- (void)recipientSelectionControllerDidChange;
- (void)reset;
- (id /* block */)sendBlock;
- (void)setSendBlock:(id /* block */)arg1;
- (bool)shouldAtomizeToConversationName;
- (bool)shouldSuppressSearchResultsTable;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
