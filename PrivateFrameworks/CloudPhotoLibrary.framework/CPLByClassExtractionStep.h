/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLByClassExtractionStep : CPLBatchExtractionStep {
    <NSFastEnumeration> * _changeEnumerator;
    Class  _extractionClass;
    unsigned long long  _maximumCount;
    int (* _query;
    NSString * _queryDescription;
}

@property (nonatomic, readonly) Class extractionClass;
@property (nonatomic, readonly) unsigned long long maximumCount;
@property (nonatomic, readonly, copy) NSString *queryDescription;

- (void).cxx_destruct;
- (bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 error:(id*)arg3;
- (Class)extractionClass;
- (id)initWithStorage:(id)arg1 description:(id)arg2 class:(Class)arg3 maximumCount:(unsigned long long)arg4 query:(int (*)arg5;
- (unsigned long long)maximumCount;
- (id)queryDescription;
- (void)reset;
- (id)shortDescription;
- (bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;

@end
