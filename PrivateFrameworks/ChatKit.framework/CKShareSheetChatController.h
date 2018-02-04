/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKShareSheetChatController : CKComposeChatController {
    bool  _alreadySetUp;
}

@property (nonatomic) bool alreadySetUp;

- (bool)alreadySetUp;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)sendComposition:(id)arg1;
- (void)setAlreadySetUp:(bool)arg1;
- (bool)shouldDismissAfterSend;
- (void)viewDidAppear:(bool)arg1;

@end
