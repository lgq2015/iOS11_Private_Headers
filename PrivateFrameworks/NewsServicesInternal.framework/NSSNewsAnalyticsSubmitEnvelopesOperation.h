/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
 */

@interface NSSNewsAnalyticsSubmitEnvelopesOperation : FCOperation {
    NSArray * _envelopes;
    id /* block */  _submissionCompletion;
}

@property (nonatomic, copy) NSArray *envelopes;
@property (nonatomic, copy) id /* block */ submissionCompletion;

- (void).cxx_destruct;
- (id)envelopes;
- (id)init;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setEnvelopes:(id)arg1;
- (void)setSubmissionCompletion:(id /* block */)arg1;
- (id /* block */)submissionCompletion;
- (bool)validateOperation;

@end
