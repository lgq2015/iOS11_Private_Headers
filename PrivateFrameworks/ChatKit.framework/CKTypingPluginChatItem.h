/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTypingPluginChatItem : CKTypingChatItem {
    NSString * _plugInBundleID;
    NSData * _typingIndicatorData;
}

@property (nonatomic, copy) NSString *plugInBundleID;
@property (nonatomic, readonly) NSData *typingIndicatorData;

- (void).cxx_destruct;
- (Class)cellClass;
- (id)iconImage;
- (id)indicatorLayer;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)plugInBundleID;
- (void)setPlugInBundleID:(id)arg1;
- (id)typingIndicatorData;

@end
