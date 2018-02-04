/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface InfoDiagramCablingLayer : CALayer {
    CAShapeLayer * broadbandToWANInnerLineLayer;
    CAShapeLayer * broadbandToWANOuterLineLayer;
    <InfoDiagramCablingAnchorDelegate> * diagramAnchorPointDelegate;
    CAGradientLayer * internetGradientLayer;
    CAShapeLayer * internetInnerLineLayer;
    CAShapeLayer * internetOuterLineLayer;
    bool  isCompactWidth;
    CAShapeLayer * swapArcArrowLayer;
    CAShapeLayer * swapArcLineLayer;
    bool  swapCabling;
}

@property (nonatomic, retain) CAShapeLayer *broadbandToWANInnerLineLayer;
@property (nonatomic, retain) CAShapeLayer *broadbandToWANOuterLineLayer;
@property (nonatomic) <InfoDiagramCablingAnchorDelegate> *diagramAnchorPointDelegate;
@property (nonatomic, retain) CAGradientLayer *internetGradientLayer;
@property (nonatomic, retain) CAShapeLayer *internetInnerLineLayer;
@property (nonatomic, retain) CAShapeLayer *internetOuterLineLayer;
@property (nonatomic) bool isCompactWidth;
@property (nonatomic, retain) CAShapeLayer *swapArcArrowLayer;
@property (nonatomic, retain) CAShapeLayer *swapArcLineLayer;
@property (nonatomic) bool swapCabling;

- (id)broadbandToWANInnerLineLayer;
- (id)broadbandToWANOuterLineLayer;
- (void)commonInit;
- (void)createPathForSublayer:(id)arg1;
- (void)dealloc;
- (id)diagramAnchorPointDelegate;
- (id)initNoWANLinkFirstFrame;
- (id)initNoWANLinkLastFrame;
- (id)internetGradientLayer;
- (id)internetInnerLineLayer;
- (id)internetOuterLineLayer;
- (bool)isCompactWidth;
- (void)layoutSublayers;
- (void)setBroadbandToWANInnerLineLayer:(id)arg1;
- (void)setBroadbandToWANOuterLineLayer:(id)arg1;
- (void)setDiagramAnchorPointDelegate:(id)arg1;
- (void)setInternetGradientLayer:(id)arg1;
- (void)setInternetInnerLineLayer:(id)arg1;
- (void)setInternetOuterLineLayer:(id)arg1;
- (void)setIsCompactWidth:(bool)arg1;
- (void)setSwapArcArrowLayer:(id)arg1;
- (void)setSwapArcLineLayer:(id)arg1;
- (void)setSwapCabling:(bool)arg1;
- (id)swapArcArrowLayer;
- (id)swapArcLineLayer;
- (bool)swapCabling;

@end
