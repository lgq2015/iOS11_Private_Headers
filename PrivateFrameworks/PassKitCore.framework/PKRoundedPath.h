/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKRoundedPath : NSObject {
    struct CGPath { } * _CGPath;
    NSMutableArray * _points;
}

@property (retain) struct CGPath { }*CGPath;
@property (nonatomic, retain) NSMutableArray *points;

+ (id)pathWithEllipseInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)pathWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)pathWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;

- (void).cxx_destruct;
- (struct CGPath { }*)CGPath;
- (void)addContinuousCornerToPath:(struct CGPath { }*)arg1 trueCorner:(struct CGPoint { double x1; double x2; })arg2 cornerRadius:(struct CGSize { double x1; double x2; })arg3 corners:(unsigned long long)arg4 portion:(unsigned long long)arg5 clockwise:(bool)arg6 fullRadius:(bool)arg7;
- (void)addLineToPointX:(double)arg1 y:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (void)closeSubpath;
- (void)dealloc;
- (id)initWithPoints:(struct CGPoint { double x1; double x2; }*)arg1 count:(long long)arg2;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 smoothPillShapes:(bool)arg4;
- (id)points;
- (void)setCGPath:(struct CGPath { }*)arg1;
- (void)setPoints:(id)arg1;

@end