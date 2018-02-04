/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKSignatureView : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _accumulatedSignatureDirtyRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _aggregateInvalid;
    AKBitmapFIFO * _bitmapFifo;
    CHBoxcarFilterPointFIFO * _boxcarFIFO;
    struct CGColor { } * _cgColor;
    double  _currentWeight;
    CHQuadCurvePointFIFO * _interpolatingFIFO;
    bool  _isAddingPointWithoutSmoothing;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastPoint;
    double  _lastSetNeedsDisplayCallToSuperTime;
    double  _maxPressure;
    double  _maxThickness;
    double  _minPressure;
    double  _minThickness;
    UIColor * _strokeColor;
    CHPointStrokeFIFO * _strokeFIFO;
    struct CGPoint { 
        double x; 
        double y; 
    }  _strokeLastLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _strokeStartLocation;
    double  _strokeStartTime;
    unsigned long long  _totalPointsAdded;
    id  _trackingTouchID;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unionDrawingRect;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } aggregateInvalid;
@property (nonatomic, retain) AKBitmapFIFO *bitmapFifo;
@property (nonatomic, retain) CHBoxcarFilterPointFIFO *boxcarFIFO;
@property (nonatomic) double currentWeight;
@property (nonatomic, readonly) double interfaceScale;
@property (nonatomic, retain) CHQuadCurvePointFIFO *interpolatingFIFO;
@property bool isAddingPointWithoutSmoothing;
@property (nonatomic) double maxPressure;
@property (nonatomic) double maxThickness;
@property (nonatomic) double minPressure;
@property (nonatomic) double minThickness;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic, retain) CHPointStrokeFIFO *strokeFIFO;
@property struct CGPoint { double x1; double x2; } strokeLastLocation;
@property struct CGPoint { double x1; double x2; } strokeStartLocation;
@property double strokeStartTime;
@property unsigned long long totalPointsAdded;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unionDrawingRect;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_forceRedisplay;
- (double)_windowBackingScaleFactor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })aggregateInvalid;
- (bool)ak_forceAvailableForTouch:(id)arg1;
- (id)bitmapFifo;
- (id)boxcarFIFO;
- (void)clear;
- (void)continueStroke;
- (void)continueStrokeWithoutSmoothing;
- (struct CGPath { }*)copyStrokedInterpolatedPath;
- (double)currentWeight;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)handleCoalescedTouches:(id)arg1 forTouch:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)interfaceScale;
- (id)interpolatingFIFO;
- (bool)isAddingPointWithoutSmoothing;
- (double)maxPressure;
- (double)maxThickness;
- (double)minPressure;
- (double)minThickness;
- (void)setAggregateInvalid:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBitmapFifo:(id)arg1;
- (void)setBoxcarFIFO:(id)arg1;
- (void)setCurrentWeight:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInterpolatingFIFO:(id)arg1;
- (void)setIsAddingPointWithoutSmoothing:(bool)arg1;
- (void)setMaxPressure:(double)arg1;
- (void)setMaxThickness:(double)arg1;
- (void)setMinPressure:(double)arg1;
- (void)setMinThickness:(double)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeFIFO:(id)arg1;
- (void)setStrokeLastLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStrokeStartLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStrokeStartTime:(double)arg1;
- (void)setTotalPointsAdded:(unsigned long long)arg1;
- (void)setUnionDrawingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)startStroke;
- (id)strokeColor;
- (id)strokeFIFO;
- (struct CGPoint { double x1; double x2; })strokeLastLocation;
- (struct CGPoint { double x1; double x2; })strokeStartLocation;
- (double)strokeStartTime;
- (void)teardown;
- (void)terminateStroke;
- (unsigned long long)totalPointsAdded;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unionDrawingRect;
- (double)weightForTouch:(id)arg1;
- (double)weightForValue:(double)arg1;

@end
