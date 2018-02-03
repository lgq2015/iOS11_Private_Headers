/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPortalView : UIView {
    UIView * _sourceView;
}

@property (nonatomic) bool hidesSourceView;
@property (nonatomic) bool matchesAlpha;
@property (nonatomic) bool matchesPosition;
@property (nonatomic) bool matchesTransform;
@property (nonatomic, readonly) CAPortalLayer *portalLayer;
@property (nonatomic) UIView *sourceView;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)description;
- (bool)hidesSourceView;
- (bool)matchesAlpha;
- (bool)matchesPosition;
- (bool)matchesTransform;
- (id)portalLayer;
- (void)setHidesSourceView:(bool)arg1;
- (void)setMatchesAlpha:(bool)arg1;
- (void)setMatchesPosition:(bool)arg1;
- (void)setMatchesTransform:(bool)arg1;
- (void)setSourceView:(id)arg1;
- (id)sourceView;

@end