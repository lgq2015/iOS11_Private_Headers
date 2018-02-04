/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _Arms : _Geometry {
    float  _curLeftBend;
    float  _curRightBend;
    float  _leftShoulderAdjustment;
    float  _leftShoulderX;
    float  _rightShoulderAdjustment;
    float  _rightShoulderX;
    NSNumber * _texArm;
    NSNumber * _texHandHour;
    NSArray * _texHandMnut;
    unsigned int  _vaoArm;
    unsigned int  _vaoHand;
    unsigned int  _vboArm;
    unsigned int  _vboHand;
}

@property (nonatomic) float curLeftBend;
@property (nonatomic) float curRightBend;
@property (nonatomic) float leftShoulderAdjustment;
@property (nonatomic) float leftShoulderX;
@property (nonatomic) float rightShoulderAdjustment;
@property (nonatomic) float rightShoulderX;
@property (nonatomic, retain) NSNumber *texArm;
@property (nonatomic, retain) NSNumber *texHandHour;
@property (nonatomic, retain) NSArray *texHandMnut;
@property (nonatomic) unsigned int vaoArm;
@property (nonatomic) unsigned int vaoHand;
@property (nonatomic) unsigned int vboArm;
@property (nonatomic) unsigned int vboHand;

- (void).cxx_destruct;
- (float)curLeftBend;
- (float)curRightBend;
- (float)leftShoulderAdjustment;
- (float)leftShoulderX;
- (float)rightShoulderAdjustment;
- (float)rightShoulderX;
- (void)setCurLeftBend:(float)arg1;
- (void)setCurRightBend:(float)arg1;
- (void)setLeftShoulderAdjustment:(float)arg1;
- (void)setLeftShoulderX:(float)arg1;
- (void)setRightShoulderAdjustment:(float)arg1;
- (void)setRightShoulderX:(float)arg1;
- (void)setTexArm:(id)arg1;
- (void)setTexHandHour:(id)arg1;
- (void)setTexHandMnut:(id)arg1;
- (void)setVaoArm:(unsigned int)arg1;
- (void)setVaoHand:(unsigned int)arg1;
- (void)setVboArm:(unsigned int)arg1;
- (void)setVboHand:(unsigned int)arg1;
- (id)texArm;
- (id)texHandHour;
- (id)texHandMnut;
- (unsigned int)vaoArm;
- (unsigned int)vaoHand;
- (unsigned int)vboArm;
- (unsigned int)vboHand;

@end
