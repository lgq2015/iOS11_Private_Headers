/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface TitleAudioCompositionItem : MovieCompositionItem {
    NSString * _baseFilename;
}

@property (nonatomic, retain) NSString *baseFilename;

- (void).cxx_destruct;
- (id)baseFilename;
- (bool)hasSeparateInOut;
- (id)initWithClip:(id)arg1 themeID:(id)arg2;
- (void)setBaseFilename:(id)arg1;
- (id)speedRangesForSourceRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 destinationRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (void)switchToAsset:(int)arg1;

@end
