/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAAssetProcessingJob : PHAWorkerJob {
    NSArray * _assetLocalIdentifiers;
    NSMutableDictionary * _resultsByAssetLocalIdentifier;
    NSRecursiveLock * _resultsLock;
}

@property (nonatomic, readonly) NSArray *assetLocalIdentifiers;
@property (nonatomic, readonly, copy) NSArray *incompleteAssetLocalIdentifiers;
@property (nonatomic, readonly) NSMutableDictionary *resultsByAssetLocalIdentifier;
@property (readonly) NSRecursiveLock *resultsLock;

- (void).cxx_destruct;
- (id)_resultsCopy;
- (id)assetLocalIdentifiers;
- (float)completionScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)finished;
- (id)incompleteAssetLocalIdentifiers;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 assetLocalIdentifiers:(id)arg3 library:(id)arg4;
- (void)reportResult:(unsigned long long)arg1 forAssetLocalIdentifier:(id)arg2;
- (unsigned long long)resultCount;
- (unsigned long long)resultForAssetLocalIdentifier:(id)arg1;
- (id)resultsByAssetLocalIdentifier;
- (id)resultsLock;
- (id)statusAsDictionary;
- (unsigned long long)successfulResultCount;

@end
