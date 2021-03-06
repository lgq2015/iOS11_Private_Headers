/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MemoriesDelegate : NSObject

+ (id)activeCoreProjectViewController;
+ (bool)allowSaving;
+ (id)currentProject;
+ (float)duckingAmount;
+ (unsigned long long)exportFrameRateMode;
+ (bool)forceTeardownDisplayOnProjectChange;
+ (bool)ignoreReadOnly;
+ (void)nukeCaches;
+ (unsigned long long)playbackFrameRateMode;
+ (long long)playbackPixelCount;
+ (void)setCurrentProject:(id)arg1;
+ (bool)shouldPlaySlowMoWhenPreviewing;
+ (bool)updateProjectAndCachesOnPhotosLibraryChange;

@end
