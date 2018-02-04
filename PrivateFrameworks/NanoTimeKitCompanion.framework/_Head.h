/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _Head : _Geometry {
    NSMutableArray * _blinkTexs;
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
    float  _curHeadTilt;
    float  _curHeadX;
    float  _height;
    int  _inAnimation;
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
    NSMutableArray * _texs;
    float  _width;
}

@property (nonatomic, retain) NSMutableArray *blinkTexs;
@property (nonatomic) union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; } bone;
@property (nonatomic) float curHeadTilt;
@property (nonatomic) float curHeadX;
@property (nonatomic) float height;
@property (nonatomic) int inAnimation;
@property (nonatomic) union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; } offset;
@property (nonatomic, retain) NSMutableArray *texs;
@property (nonatomic) float width;

- (void).cxx_destruct;
- (id)blinkTexs;
- (union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })bone;
- (float)curHeadTilt;
- (float)curHeadX;
- (float)height;
- (int)inAnimation;
- (union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })offset;
- (void)setBlinkTexs:(id)arg1;
- (void)setBone:(union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })arg1;
- (void)setCurHeadTilt:(float)arg1;
- (void)setCurHeadX:(float)arg1;
- (void)setHeight:(float)arg1;
- (void)setInAnimation:(int)arg1;
- (void)setOffset:(union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })arg1;
- (void)setTexs:(id)arg1;
- (void)setWidth:(float)arg1;
- (id)texs;
- (float)width;

@end
