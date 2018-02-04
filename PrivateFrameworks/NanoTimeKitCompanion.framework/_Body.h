/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _Body : _Geometry {
    BOOL  _animationDirection;
    BOOL  _animationFrame;
    union _GLKVector2 { 
        struct { 
            float x; 
            float y; 
        } ; 
        struct { 
            float s; 
            float t; 
        } ; 
        float v[2]; 
    }  _bone;
    float  _curBodyX;
    BOOL  _frameDisplayTime60th;
    float  _height;
    union _GLKVector2 { 
        struct { 
            float x; 
            float y; 
        } ; 
        struct { 
            float s; 
            float t; 
        } ; 
        float v[2]; 
    }  _offset;
    NSMutableArray * _shiftTexs12;
    NSMutableArray * _shiftTexs13;
    NSMutableArray * _shiftTexs14;
    NSMutableArray * _shiftTexs23;
    unsigned char  _state;
    NSArray * _texs;
    unsigned char  _waitingForFootRaise;
    float  _width;
}

@property (nonatomic) BOOL animationDirection;
@property (nonatomic) BOOL animationFrame;
@property (nonatomic) union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; } bone;
@property (nonatomic) float curBodyX;
@property (nonatomic) BOOL frameDisplayTime60th;
@property (nonatomic) float height;
@property (nonatomic) union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; } offset;
@property (nonatomic, retain) NSMutableArray *shiftTexs12;
@property (nonatomic, retain) NSMutableArray *shiftTexs13;
@property (nonatomic, retain) NSMutableArray *shiftTexs14;
@property (nonatomic, retain) NSMutableArray *shiftTexs23;
@property (nonatomic) unsigned char state;
@property (nonatomic, retain) NSArray *texs;
@property (nonatomic) unsigned char waitingForFootRaise;
@property (nonatomic) float width;

- (void).cxx_destruct;
- (BOOL)animationDirection;
- (BOOL)animationFrame;
- (union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })bone;
- (float)curBodyX;
- (BOOL)frameDisplayTime60th;
- (float)height;
- (union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })offset;
- (void)setAnimationDirection:(BOOL)arg1;
- (void)setAnimationFrame:(BOOL)arg1;
- (void)setBone:(union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })arg1;
- (void)setCurBodyX:(float)arg1;
- (void)setFrameDisplayTime60th:(BOOL)arg1;
- (void)setHeight:(float)arg1;
- (void)setOffset:(union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })arg1;
- (void)setShiftTexs12:(id)arg1;
- (void)setShiftTexs13:(id)arg1;
- (void)setShiftTexs14:(id)arg1;
- (void)setShiftTexs23:(id)arg1;
- (void)setState:(unsigned char)arg1;
- (void)setTexs:(id)arg1;
- (void)setWaitingForFootRaise:(unsigned char)arg1;
- (void)setWidth:(float)arg1;
- (id)shiftTexs12;
- (id)shiftTexs13;
- (id)shiftTexs14;
- (id)shiftTexs23;
- (unsigned char)state;
- (id)texs;
- (unsigned char)waitingForFootRaise;
- (float)width;

@end
