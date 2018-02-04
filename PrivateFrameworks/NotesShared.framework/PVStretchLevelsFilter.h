/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface PVStretchLevelsFilter : CIFilter {
    NSNumber * inputHigh;
    CIImage * inputImage;
    NSNumber * inputLow;
    NSNumber * inputMid;
}

+ (id)customAttributes;
+ (id)filterWithName:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (id)init;
- (id)outputImage;

@end
