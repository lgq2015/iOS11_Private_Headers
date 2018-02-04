/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLInstrumentedBlockOperation : NSBlockOperation {
    double  _creationTime;
    double  _executionEndTime;
    double  _executionStartTime;
    bool  _postambleAdded;
}

@property (nonatomic) double creationTime;
@property (nonatomic) double executionEndTime;
@property (nonatomic) double executionStartTime;
@property (nonatomic, readonly) double executionTime;
@property (nonatomic) bool postambleAdded;
@property (nonatomic, readonly) double timeSpentWaitingInQueue;

+ (id)blockOperationWithBlock:(id /* block */)arg1;

- (void)addExecutionBlock:(id /* block */)arg1;
- (double)creationTime;
- (id)description;
- (double)executionEndTime;
- (double)executionStartTime;
- (double)executionTime;
- (id)init;
- (bool)postambleAdded;
- (void)setCreationTime:(double)arg1;
- (void)setExecutionEndTime:(double)arg1;
- (void)setExecutionStartTime:(double)arg1;
- (void)setPostambleAdded:(bool)arg1;
- (double)timeSpentWaitingInQueue;

@end
