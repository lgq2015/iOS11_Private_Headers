/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODILinear : NSObject {
    float  mConnectorWidth;
    bool  mIsHorizontal;
    bool  mIsTextCenteredHorizontally;
    bool  mIsTextCenteredVertically;
    unsigned int  mMaxPointCount;
    float  mPadding;
    float  mPointHeight;
    ODIState * mState;
    bool  mStretch;
    bool  mWithConnectors;
}

+ (bool)mapIdentifier:(id)arg1 state:(id)arg2;
+ (void)mapUnknownWithState:(id)arg1;

- (id)initWithState:(id)arg1;
- (void)map;
- (void)mapPoint:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)mapStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapStyleFromTransition:(id)arg1 shape:(id)arg2;
- (void)mapTransition:(id)arg1 pointBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)nextPointBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (void)setConnectorWidth:(float)arg1;
- (void)setIsHorizontal:(bool)arg1;
- (void)setIsTextCentered:(bool)arg1;
- (void)setIsTextCenteredHorizontally:(bool)arg1;
- (void)setIsTextCenteredVertically:(bool)arg1;
- (void)setLogicalBounds;
- (void)setMaxPointCount:(unsigned int)arg1;
- (void)setPadding:(float)arg1;
- (void)setPointHeight:(float)arg1;
- (void)setStretch:(bool)arg1;
- (void)setWithConnectors:(bool)arg1;

@end
