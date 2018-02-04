/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCMultiStepFetchOperation : FCFetchOperation {
    FCMutexLock * _accessLock;
    NSMutableArray * _stepResults;
    NSMutableArray * _steps;
}

@property (nonatomic, retain) FCMutexLock *accessLock;
@property (nonatomic, retain) NSMutableArray *stepResults;
@property (nonatomic, retain) NSMutableArray *steps;

- (void).cxx_destruct;
- (void)_performNextStep;
- (id)accessLock;
- (void)addFetchStep:(SEL)arg1;
- (void)addNonCriticalFetchStep:(SEL)arg1;
- (id)completeFetchOperation;
- (void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2;
- (id)init;
- (void)performOperation;
- (void)setAccessLock:(id)arg1;
- (void)setStepResults:(id)arg1;
- (void)setSteps:(id)arg1;
- (id)stepResults;
- (id)steps;

@end
