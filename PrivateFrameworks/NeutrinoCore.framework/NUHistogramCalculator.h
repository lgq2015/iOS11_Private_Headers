/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUHistogramCalculator : NSObject {
    long long  _binCount;
    struct { 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } r; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } g; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } b; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } a; 
    }  _colorMatrix;
    struct { 
        double min; 
        double max; 
    }  _range;
}

@property (nonatomic) long long binCount;
@property (nonatomic) struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; } colorMatrix;
@property (nonatomic) struct { double x1; double x2; } range;

- (id)_computeHistogramForBufferBGRA8:(id)arg1 error:(out id*)arg2;
- (long long)binCount;
- (struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; })colorMatrix;
- (id)computeHistogramFromBuffer:(id)arg1 error:(out id*)arg2;
- (id)init;
- (struct { double x1; double x2; })range;
- (void)setBinCount:(long long)arg1;
- (void)setColorMatrix:(struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; })arg1;
- (void)setRange:(struct { double x1; double x2; })arg1;

@end
