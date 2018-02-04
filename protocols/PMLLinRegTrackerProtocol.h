/* made by EzioChiu.
 */

@protocol PMLLinRegTrackerProtocol <PMLPlistAndChunksSerializableProtocol>

@required

- (void)trackObjectiveFeatures:(PMLSparseVector *)arg1 featureMatrix:(PMLSparseMatrix *)arg2 minibatchSize:(unsigned long long)arg3 support:(float)arg4;

@end
