/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharingResetJob : PLCloudSharingJob

+ (void)resetAllLocalState;

- (long long)daemonOperation;
- (void)run;
- (void)runDaemonSide;

@end
