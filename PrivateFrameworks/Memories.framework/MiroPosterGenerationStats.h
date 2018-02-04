/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroPosterGenerationStats : NSObject {
    double  _times;
}

@property (nonatomic, readonly) double*times;

- (void)printLabels;
- (void)printStats;
- (double*)times;

@end
