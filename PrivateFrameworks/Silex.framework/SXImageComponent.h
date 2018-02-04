/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXImageComponent : SXComponent

@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) NSAttributedString *captionWithLocalizedRoleForSpeaking;
@property (nonatomic, readonly) NSString *imageIdentifier;
@property (nonatomic, readonly) bool shouldBeExposedToAssistiveTechnology;
@property (nonatomic, readonly) bool userControllable;

+ (id)typeString;

- (id)captionWithLocalizedRoleForSpeaking;
- (Class)componentViewClass;
- (bool)shouldBeExposedToAssistiveTechnology;

@end
