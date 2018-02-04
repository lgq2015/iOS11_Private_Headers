/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimateColorBehavior : PDAnimateBehavior {
    double  mBy;
    int  mColorSpace;
    int  mDirection;
    OADColor * mFrom;
    bool  mHasBy;
    bool  mHasColorDirection;
    bool  mHasColorSpace;
    bool  mHasFrom;
    bool  mHasTo;
    OADColor * mTo;
}

- (double*)by;
- (int)colorSpace;
- (int)direction;
- (id)from;
- (bool)hasBy;
- (bool)hasColorDirection;
- (bool)hasColorSpace;
- (bool)hasFrom;
- (bool)hasTo;
- (void)setBy:(double)arg1;
- (void)setColorSpace:(int)arg1;
- (void)setDirection:(int)arg1;
- (void)setFrom:(id)arg1;
- (void)setTo:(id)arg1;
- (id)to;

@end
