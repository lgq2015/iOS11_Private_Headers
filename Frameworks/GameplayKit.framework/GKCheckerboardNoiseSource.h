/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKCheckerboardNoiseSource : GKNoiseSource {
    double  _squareSize;
}

@property (nonatomic) double squareSize;

+ (id)checkerboardNoiseWithSquareSize:(double)arg1;

- (id)cloneModule;
- (id)init;
- (id)initWithSquareSize:(double)arg1;
- (void)setSquareSize:(double)arg1;
- (double)squareSize;
- (double)valueAt;

@end
