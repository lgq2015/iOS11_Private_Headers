/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface IKLink : NSObject {
    float  _angle;
    float  _angleInitial;
    float  _length;
    SKNode * _node;
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
    }  _position;
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
    }  _size;
}

@property (nonatomic, readonly) float angle;
@property (nonatomic) float angleInitial;
@property (nonatomic) float length;
@property (nonatomic, retain) SKNode *node;
@property (nonatomic) union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; } position;
@property (nonatomic) union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; } size;

- (void).cxx_destruct;
- (float)angle;
- (float)angleInitial;
- (id)initWithNode:(id)arg1;
- (float)length;
- (id)node;
- (double)normalizeAngle:(double)arg1;
- (union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })position;
- (void)rotateByAngle:(float)arg1;
- (void)setAngleInitial:(float)arg1;
- (void)setLength:(float)arg1;
- (void)setNode:(id)arg1;
- (void)setPosition:(union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })arg1;
- (void)setSize:(union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })arg1;
- (union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })size;

@end
