/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoMetaLivePhotoMetaAnalyzer : VCPVideoMetaAnalyzer {
    NSMutableData * _deSerializedMetaBuffer;
    NSArray * _desiredKeysArray;
    VCPVideoMetaFocusAnalyzer * _metaFocusAnalyzer;
    VCPVideoMetaMotionAnalyzer * _metaMotionAnalyzer;
    long long  _onceDesiredKeysArray;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _prevEstimatedCenterMv;
}

+ (id)defalutDesiredKeysArray;

- (void).cxx_destruct;
- (int)convertLivePhotoBinary:(id)arg1 toDictionary:(id)arg2;
- (int)convertLivePhotoStruct:(struct FigLivePhotoMetadata { unsigned int x1; struct FigLivePhotoMetadataV1Struct { float x_2_1_1; long long x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; BOOL x_2_1_9; BOOL x_2_1_10; unsigned short x_2_1_11; unsigned int x_2_1_12; struct FigLivePhotoDetectedFaceV1Struct { long long x_13_2_1; float x_13_2_2; float x_13_2_3; float x_13_2_4; float x_13_2_5; int x_13_2_6; short x_13_2_7; unsigned short x_13_2_8; } x_2_1_13[0]; } x2; }*)arg1 toDictionary:(id)arg2;
- (int)finalize;
- (id)init;
- (id)privateResults;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2;

@end
