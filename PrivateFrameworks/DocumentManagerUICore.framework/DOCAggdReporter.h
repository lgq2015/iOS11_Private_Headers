/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCAggdReporter : NSObject {
    unsigned long long  _recentsViewStartTime;
}

+ (bool)enabled;
+ (id)sharedReporter;

- (void)startToMeasureTimeToLoad:(unsigned long long)arg1;
- (void)stopToMeasureTimeToLoad:(unsigned long long)arg1;

@end
