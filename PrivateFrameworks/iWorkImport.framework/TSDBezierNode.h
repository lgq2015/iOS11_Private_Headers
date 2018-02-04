/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDBezierNode : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  mIn;
    struct CGPoint { 
        double x; 
        double y; 
    }  mNode;
    struct CGPoint { 
        double x; 
        double y; 
    }  mOut;
    int  mReflectedState;
    bool  mSelected;
    int  mType;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } inControlPoint;
@property (nonatomic, readonly) bool isCollapsed;
@property (nonatomic) struct CGPoint { double x1; double x2; } nodePoint;
@property (nonatomic) struct CGPoint { double x1; double x2; } outControlPoint;
@property (nonatomic) int reflectedState;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) int type;

+ (id)bezierNodeWithPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)bezierNodeWithPoint:(struct CGPoint { double x1; double x2; })arg1 inControlPoint:(struct CGPoint { double x1; double x2; })arg2 outControlPoint:(struct CGPoint { double x1; double x2; })arg3;

- (void)balanceControlPoints;
- (void)collapse;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CGPoint { double x1; double x2; })inControlPoint;
- (bool)isCollapsed;
- (bool)isSelected;
- (void)moveToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })nodePoint;
- (struct CGPoint { double x1; double x2; })outControlPoint;
- (int)reflectedState;
- (id)reflectedStateString;
- (void)setInControlPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInControlPoint:(struct CGPoint { double x1; double x2; })arg1 reflect:(int)arg2 constrain:(bool)arg3;
- (void)setInControlPointFromReflection:(struct CGPoint { double x1; double x2; })arg1 constrain:(bool)arg2;
- (void)setNode:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNodePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOutControlPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOutControlPoint:(struct CGPoint { double x1; double x2; })arg1 reflect:(int)arg2 constrain:(bool)arg3;
- (void)setReflectedState:(int)arg1;
- (void)setSelected:(bool)arg1;
- (void)setType:(int)arg1;
- (void)swapControlPoints;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (int)type;
- (id)typeString;
- (bool)underPoint:(struct CGPoint { double x1; double x2; })arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 andTolerance:(double)arg3 returningType:(long long*)arg4;
- (void)updateReflectedState;

@end
