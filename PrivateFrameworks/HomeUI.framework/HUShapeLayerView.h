/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUShapeLayerView : UIView {
    bool  _fillColorMatchesTintColor;
    id /* block */  _pathLayoutBlock;
}

@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic) bool fillColorMatchesTintColor;
@property (nonatomic, readonly) CAShapeLayer *layer;
@property (nonatomic, copy) id /* block */ pathLayoutBlock;

+ (Class)layerClass;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)didMoveToSuperview;
- (id)fillColor;
- (bool)fillColorMatchesTintColor;
- (id)initWithPathLayoutBlock:(id /* block */)arg1;
- (void)layoutSubviews;
- (id /* block */)pathLayoutBlock;
- (void)setFillColor:(id)arg1;
- (void)setFillColorMatchesTintColor:(bool)arg1;
- (void)setPathLayoutBlock:(id /* block */)arg1;
- (void)tintColorDidChange;

@end
