/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVInstructionGraphSourceNode : PVInstructionGraphNode {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    PVTransformAnimation * _transformAnimation;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (nonatomic, retain) PVTransformAnimation *transformAnimation;

- (void).cxx_destruct;
- (id)getAllSourceNodes;
- (id)init;
- (id)instructionGraphNodeDescription;
- (bool)isPortrait;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setTransformAnimation:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (id)transformAnimation;

@end
