/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMErrorLogger : IMLoggerOutput

+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
+ (id)sharedInstance;

- (long long)loggingLevel;

@end
