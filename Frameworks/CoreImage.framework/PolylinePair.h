/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface PolylinePair : NSObject {
    Polyline * _bottom;
    Polyline * _top;
    float  arclength;
    struct CGPoint { 
        double x; 
        double y; 
    }  axisV;
    struct CGPath { } * boundsPath;
    bool  isempty;
    float  maxsize;
    struct CGPoint { 
        double x; 
        double y; 
    }  normVbottom;
    struct CGPoint { 
        double x; 
        double y; 
    }  normVtop;
    unsigned int  nsegs;
    double  s0;
    double  s1;
    double  sdelta;
    double  seglength;
    float  xmax;
    float  xmin;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  xyBoundsRect;
    float  ymax;
    float  ymin;
}

@property struct CGPoint { double x1; double x2; } axisV;
@property (readonly, retain) Polyline *bottom;
@property (readonly) struct CGPath { }*boundsPath;
@property struct CGPoint { double x1; double x2; } normVbottom;
@property struct CGPoint { double x1; double x2; } normVtop;
@property double s0;
@property double s1;
@property (readonly, retain) Polyline *top;

- (void)accomodatePoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })axisV;
- (id)bottom;
- (struct CGPath { }*)boundsPath;
- (void)bridgeGapsLinear;
- (void)constructBezierWithToleranceTop:(float)arg1 bottom:(float)arg2;
- (id)createTopBottomRegion;
- (void)dealloc;
- (void)expandWithToleranceTop:(float)arg1 bottom:(float)arg2;
- (void)extrapolateAndJoinTopAndBottom;
- (id)initWithMaxsize:(float)arg1 segmentDelta:(float)arg2 andAxis:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })normVbottom;
- (struct CGPoint { double x1; double x2; })normVtop;
- (int)npoints;
- (double)s0;
- (double)s1;
- (void)setAxisV:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNormVbottom:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNormVtop:(struct CGPoint { double x1; double x2; })arg1;
- (void)setS0:(double)arg1;
- (void)setS1:(double)arg1;
- (id)top;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })xyBoundsRect;

@end
