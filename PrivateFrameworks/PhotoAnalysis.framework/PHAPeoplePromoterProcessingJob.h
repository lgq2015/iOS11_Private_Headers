/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAPeoplePromoterProcessingJob : PHAWorkerJob <PVPersonPromoterDelegate> {
    NSObject<OS_dispatch_queue> * _backgroundTaskQueue;
    float  _completionScore;
    bool  _finished;
    PVPersonPromoter * _personPromoter;
    PHAVisionServiceFaceProcessingWorker * _worker;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *backgroundTaskQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PVPersonPromoter *personPromoter;
@property (readonly) Class superclass;
@property (nonatomic) PHAVisionServiceFaceProcessingWorker *worker;

- (void).cxx_destruct;
- (id)backgroundTaskQueue;
- (float)completionScore;
- (id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(id /* block */)arg4;
- (bool)finished;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 library:(id)arg3;
- (id)keyFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 updateBlock:(id /* block */)arg3;
- (id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 overTheYearsComputation:(bool)arg3 updateBlock:(id /* block */)arg4;
- (id)personPromoter;
- (void)setBackgroundTaskQueue:(id)arg1;
- (void)setCompletionScore:(float)arg1;
- (void)setFinished:(bool)arg1;
- (void)setPersonPromoter:(id)arg1;
- (void)setWorker:(id)arg1;
- (bool)startProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (bool)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(id /* block */)arg3;
- (id)worker;

@end
