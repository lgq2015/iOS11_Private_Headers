/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKTSDMutableBrushStroke : AKTSDBrushStroke {
    UIColor * color;
    int  join;
    double  miterLimit;
    NSString * strokeName;
    double  width;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) int join;
@property (nonatomic) double miterLimit;
@property (nonatomic, copy) NSString *strokeName;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)join;
- (double)miterLimit;
- (void)setColor:(id)arg1;
- (void)setJoin:(int)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setStrokeName:(id)arg1;
- (void)setWidth:(double)arg1;
- (id)strokeName;
- (double)width;

@end
