/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCReportingController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _childReportingControllers;
    MPCReportingController * _parentReportingController;
}

@property (nonatomic, readonly, copy) NSArray *childReportingControllers;
@property (nonatomic) MPCReportingController *parentReportingController;

- (void).cxx_destruct;
- (void)_recordReportingEvents:(id)arg1;
- (void)addChildReportingController:(id)arg1;
- (id)childReportingControllers;
- (id)init;
- (id)parentReportingController;
- (void)recordReportingEvents:(id)arg1;
- (void)removeChildReportingController:(id)arg1;
- (void)setParentReportingController:(id)arg1;

@end
