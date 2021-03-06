/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageAcknowledgmentDraftDescriptor : NSObject <CKMessageAcknowledgment> {
    long long  _messageAcknowledgmentType;
}

@property (nonatomic, readonly) UIColor *acknowledgmentImageColor;
@property (nonatomic, readonly) NSString *acknowledgmentImageName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long messageAcknowledgmentType;
@property (nonatomic, readonly) UIColor *selectedAcknowledgmentImageColor;
@property (nonatomic, readonly) UIColor *selectedBalloonColor;
@property (readonly) Class superclass;

+ (id)acknowledgmentBarColor;
+ (id)allMessageAcknowledgmentDescriptors;

- (id)acknowledgmentImageColor;
- (id)acknowledgmentImageName;
- (id)initWithMessageAcknowledgmentType:(long long)arg1;
- (long long)messageAcknowledgmentType;
- (id)selectedAcknowledgmentImageColor;
- (id)selectedBalloonColor;
- (long long)themeColor;

@end
