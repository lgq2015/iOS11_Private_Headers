/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimelineDataOperation : NSObject {
    bool  _canceled;
    NTKComplicationDataSource * _localDataSource;
    CLKComplication * _remoteComplication;
    <CLKComplicationDataSource> * _remoteDataSource;
    bool  _started;
}

@property (nonatomic, readonly) bool canceled;
@property (nonatomic, readonly) bool started;

+ (id)operationWithLocalDataSource:(id)arg1;
+ (id)operationWithRemoteDataSource:(id)arg1 complication:(id)arg2;

- (void).cxx_destruct;
- (void)_cancel;
- (id)_finalizedValidEntries:(id)arg1;
- (void)_start;
- (bool)_validateEntry:(id)arg1;
- (void)cancel;
- (bool)canceled;
- (void)start;
- (bool)started;

@end