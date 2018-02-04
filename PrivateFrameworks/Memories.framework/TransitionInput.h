/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface TransitionInput : NSObject {
    int  _ID;
    KonaClip * _clip;
    struct CGSize { 
        double width; 
        double height; 
    }  _naturalSize;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (nonatomic) int ID;
@property (nonatomic) KonaClip *clip;
@property (nonatomic) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

- (int)ID;
- (id)clip;
- (id)description;
- (struct CGSize { double x1; double x2; })naturalSize;
- (void)setClip:(id)arg1;
- (void)setID:(int)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
