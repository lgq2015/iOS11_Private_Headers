/* made by EzioChiu.
 */

@protocol TSDMatchingAlgorithmMatch

@required

- (long long)compareToMatch:(id <TSDMatchingAlgorithmMatch>)arg1;
- (bool)conflictsWithMatch:(id <TSDMatchingAlgorithmMatch>)arg1;
- (id)incomingMatchObject;
- (long long)matchCost;
- (id)outgoingMatchObject;

@end
