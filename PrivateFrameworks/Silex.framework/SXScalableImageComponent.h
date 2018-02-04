/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXScalableImageComponent : SXComponent

@property (nonatomic, readonly) NSString *accessibilityCaption;
@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) SXFormattedText *captionComponent;
@property (nonatomic, readonly) NSString *imageIdentifier;
@property (nonatomic, readonly) bool userControllable;

+ (id)typeString;

- (Class)componentViewClass;

@end
