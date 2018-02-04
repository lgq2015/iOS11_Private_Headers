/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAGraphServiceWorkerGraphUpdateJob : PHAWorkerJob {
    float  _completionScore;
    NSDate * _creationDate;
    bool  _finished;
    NSString * _label;
    NSObject<OS_os_transaction> * _transaction;
    id /* block */  _updateBlock;
}

@property (nonatomic) float completionScore;
@property (retain) NSDate *creationDate;
@property (nonatomic) bool finished;
@property (copy) NSString *label;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property (copy) id /* block */ updateBlock;

+ (id)graphUpdateJobWithLibrary:(id)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 updateBlock:(id /* block */)arg4;

- (void).cxx_destruct;
- (float)completionScore;
- (id)creationDate;
- (id)description;
- (bool)finished;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 library:(id)arg4;
- (id)label;
- (void)markAsFinishedWithCompletionScore:(float)arg1;
- (void)setCompletionScore:(float)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (bool)startProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (bool)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (id)transaction;
- (id /* block */)updateBlock;
- (void)updateCompletionScore:(float)arg1;

@end
