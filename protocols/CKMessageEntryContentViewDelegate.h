/* made by EzioChiu.
 */

@protocol CKMessageEntryContentViewDelegate <UIScrollViewDelegate>

@required

- (void)messageEntryContentView:(CKMessageEntryContentView *)arg1 didPasteURL:(NSString *)arg2;
- (void)messageEntryContentView:(CKMessageEntryContentView *)arg1 didTapMediaObject:(CKMediaObject *)arg2;
- (bool)messageEntryContentView:(CKMessageEntryContentView *)arg1 shouldInsertMediaObjects:(NSArray *)arg2;
- (void)messageEntryContentViewCancelWasTapped:(CKMessageEntryContentView *)arg1 shelfPluginPayload:(IMPluginPayload *)arg2;
- (void)messageEntryContentViewDidBeginEditing:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewDidChange:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewDidEndEditing:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewDidTapHandwritingKey:(CKMessageEntryContentView *)arg1;
- (struct CGSize { double x1; double x2; })messageEntryContentViewMaxShelfPluginViewSize:(CKMessageEntryContentView *)arg1;
- (bool)messageEntryContentViewShouldBeginEditing:(CKMessageEntryContentView *)arg1;
- (void)messageEntryContentViewWasTapped:(CKMessageEntryContentView *)arg1 isLongPress:(bool)arg2;

@end