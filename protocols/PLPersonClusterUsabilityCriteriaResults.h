/* made by EzioChiu.
 */

@protocol PLPersonClusterUsabilityCriteriaResults <NSObject>

@required

- (unsigned long long)countOfUnverifiedPersons;
- (unsigned long long)countOfVerifiedPersons;
- (long long)faceCountOfUnverifiedPersonAtIndex:(unsigned long long)arg1;

@end
