/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _Foot : _Geometry {
    BOOL  _animFrame;
    BOOL  _frameDisplayTime60th;
    unsigned char  _state;
    NSMutableArray * _texs;
}

@property (nonatomic) BOOL animFrame;
@property (nonatomic) BOOL frameDisplayTime60th;
@property (nonatomic) unsigned char state;
@property (nonatomic, retain) NSMutableArray *texs;

- (void).cxx_destruct;
- (BOOL)animFrame;
- (BOOL)frameDisplayTime60th;
- (void)setAnimFrame:(BOOL)arg1;
- (void)setFrameDisplayTime60th:(BOOL)arg1;
- (void)setState:(unsigned char)arg1;
- (void)setTexs:(id)arg1;
- (unsigned char)state;
- (id)texs;

@end
