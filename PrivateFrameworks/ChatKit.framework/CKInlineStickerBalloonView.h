/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKInlineStickerBalloonView : CKImageBalloonView

@property (nonatomic, retain) NSString *stickerAccessibilityDescription;

- (void)addFilter:(id)arg1;
- (void)clearFilters;
- (void)configureForMessagePart:(id)arg1;
- (void)setCanUseOpaqueMask:(bool)arg1;
- (void)setHasTail:(bool)arg1;
- (void)setOutlineMask:(id)arg1;
- (void)setTailMask:(id)arg1;

@end
