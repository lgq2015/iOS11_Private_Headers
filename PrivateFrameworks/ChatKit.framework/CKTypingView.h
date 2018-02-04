/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTypingView : UIView {
    CALayer<IMTypingIndicatorLayerProtocol> * _indicatorLayer;
}

@property (nonatomic, retain) CALayer<IMTypingIndicatorLayerProtocol> *indicatorLayer;

- (void).cxx_destruct;
- (id)indicatorLayer;
- (void)setIndicatorLayer:(id)arg1;

@end
