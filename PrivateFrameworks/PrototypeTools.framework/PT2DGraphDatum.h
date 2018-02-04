/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PT2DGraphDatum : NSObject <PT2DGraphDatum> {
    UIColor * _color;
    struct CGPoint { 
        double x; 
        double y; 
    }  _graphPoint;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) struct CGPoint { double x1; double x2; } graphPoint;

+ (id)datumWithPoint:(struct CGPoint { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (id)color;
- (struct CGPoint { double x1; double x2; })graphPoint;
- (void)setColor:(id)arg1;
- (void)setGraphPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
