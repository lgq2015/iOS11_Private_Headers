/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface NetTopoDeviceConnectionLayer : NetTopoObjectLayer {
    struct CGPath { } * _arrowhead;
    struct CGColor { } * _clearColor;
    CAShapeLayer * _connectionLineLayer;
    unsigned long long  _connectionMediumFallback;
    unsigned long long  _connectionStyle;
    struct CGPoint { 
        double x; 
        double y; 
    }  _downstreamConnectionPoint;
    struct CGPath { } * _hitTestPath;
    struct CGColor { } * _lineColorActive;
    struct CGColor { } * _lineColorEthernet;
    struct CGColor { } * _lineColorInactive;
    struct CGColor { } * _lineColorWiFi;
    struct CGColor { } * _selectedLineColor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _siblingMergePoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _upstreamConnectionPoint;
    unsigned long long  _upstreamConnectionSide;
    unsigned long long  _upstreamDeviceSpatialRelationship;
    struct CGColor { } * _whiteColor;
}

@property (nonatomic, readonly) unsigned long long connectionMedium;
@property (nonatomic) unsigned long long connectionMediumFallback;
@property (nonatomic) unsigned long long connectionStyle;
@property (nonatomic) struct CGPoint { double x1; double x2; } downstreamConnectionPoint;
@property (nonatomic, readonly) struct CGPath { }*hitTestPath;
@property (nonatomic) struct CGPoint { double x1; double x2; } siblingMergePoint;
@property (nonatomic) struct CGPoint { double x1; double x2; } upstreamConnectionPoint;
@property (nonatomic) unsigned long long upstreamConnectionSide;
@property (nonatomic) unsigned long long upstreamDeviceSpatialRelationship;

- (void)addBottomWindingConnectionToPath:(struct CGPath { }*)arg1 withOffset:(double)arg2;
- (void)addCurvedArrowConnectionToPath:(struct CGPath { }*)arg1 withOffset:(double)arg2;
- (void)addSideWindingConnectionToPath:(struct CGPath { }*)arg1 withOffset:(double)arg2;
- (unsigned long long)connectionMedium;
- (unsigned long long)connectionMediumFallback;
- (unsigned long long)connectionStyle;
- (void)dealloc;
- (id)debugDescription;
- (id)describeOne:(id)arg1 uiLayer:(id)arg2 indent:(unsigned long long)arg3;
- (struct CGPoint { double x1; double x2; })downstreamConnectionPoint;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getUserInteractionBounds;
- (struct CGPath { }*)hitTestPath;
- (void)initNetTopoDeviceConnectionLayerCommonWithStyle:(int)arg1 andOwningView:(id)arg2;
- (id)initWithUIStyle:(int)arg1 andOwningView:(id)arg2;
- (void)layoutSublayers;
- (struct CGPath { }*)newConnectionPathWithOffset:(double)arg1;
- (void)setConnectionMediumFallback:(unsigned long long)arg1;
- (void)setConnectionStyle:(unsigned long long)arg1;
- (void)setDownstreamConnectionPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNeedsDisplay;
- (void)setSelected:(bool)arg1;
- (void)setSiblingMergePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setUpstreamConnectionPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setUpstreamConnectionSide:(unsigned long long)arg1;
- (void)setUpstreamDeviceSpatialRelationship:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })siblingMergePoint;
- (struct CGPoint { double x1; double x2; })upstreamConnectionPoint;
- (unsigned long long)upstreamConnectionSide;
- (unsigned long long)upstreamDeviceSpatialRelationship;

@end
