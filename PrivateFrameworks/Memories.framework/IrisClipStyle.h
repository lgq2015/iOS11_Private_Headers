/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface IrisClipStyle : NSObject {
    IrisClip * _irisClip;
}

@property (nonatomic) IrisClip *irisClip;

- (void).cxx_destruct;
- (void)adjustGeometryOfIntroClip:(id)arg1 outroClip:(id)arg2;
- (bool)buildIntro;
- (bool)buildOutro;
- (id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2;
- (int)duration;
- (double)idealDuration;
- (double)idealPhotoDuration;
- (id)irisClip;
- (double)maximumDuration;
- (double)maximumPhotoDuration;
- (double)minimumDuration;
- (double)minimumPhotoDuration;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })preferredInTransitionDurationRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })preferredOutTransitionDurationRange;
- (double)projectAspectRatio;
- (int)projectFrameRate;
- (void)setIrisClip:(id)arg1;

@end
