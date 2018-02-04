/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPVideoProperties : NSObject <NSCopying> {
    UIColor * __overlappingControlsColor;
    NSString * _accessibilityText;
    bool  _hasAudio;
}

@property (setter=_setOverlappingControlsColor:, nonatomic, retain) UIColor *_overlappingControlsColor;
@property (nonatomic, copy) NSString *accessibilityText;
@property (nonatomic) bool hasAudio;

- (void).cxx_destruct;
- (id)_overlappingControlsColor;
- (void)_setOverlappingControlsColor:(id)arg1;
- (id)accessibilityText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasAudio;
- (void)setAccessibilityText:(id)arg1;
- (void)setHasAudio:(bool)arg1;

@end
