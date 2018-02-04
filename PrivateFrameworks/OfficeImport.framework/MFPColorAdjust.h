/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPColorAdjust : NSObject {
    struct MFPColorMatrix { float x1[5][5]; } * mColorMatrix;
    int  mColorMatrixFlags;
    bool  mEnabled;
    float  mGamma;
    struct MFPColorMatrix { float x1[5][5]; } * mGrayMatrix;
    NSDictionary * mRecolorMap;
    float  mThreshold;
    struct { 
        OITSUColor *mLow; 
        OITSUColor *mHigh; 
    }  mTransparentRange;
}

- (struct MFPColorMatrix { float x1[5][5]; }*)colorMatrix;
- (int)colorMatrixFlags;
- (void)dealloc;
- (float)gamma;
- (struct MFPColorMatrix { float x1[5][5]; }*)grayMatrix;
- (id)init;
- (bool)isEnabled;
- (id)recolorMap;
- (void)setColorMatrix:(struct MFPColorMatrix { float x1[5][5]; }*)arg1;
- (void)setColorMatrixFlags:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGamma:(float)arg1;
- (void)setGrayMatrix:(struct MFPColorMatrix { float x1[5][5]; }*)arg1;
- (void)setRecolorMap:(id)arg1;
- (void)setThreshold:(float)arg1;
- (void)setTransparentLow:(id)arg1 high:(id)arg2;
- (float)threshold;
- (id)transparentHigh;
- (id)transparentLow;

@end
