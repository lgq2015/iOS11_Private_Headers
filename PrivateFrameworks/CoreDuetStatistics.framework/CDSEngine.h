/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetStatistics.framework/CoreDuetStatistics
 */

@interface CDSEngine : NSObject

+ (id)canonicalizeBasisObjectSequence:(id)arg1 error:(id*)arg2;
+ (id)durationStatistic:(long long)arg1 fromBasisObjects:(id)arg2 error:(id*)arg3;
+ (id)interArrivalStatistic:(long long)arg1 fromBasisObjects:(id)arg2 error:(id*)arg3;
+ (id)valueStatistic:(long long)arg1 fromBasisObjects:(id)arg2 error:(id*)arg3;

- (id)cachedAttributeIds;
- (double*)copyOccurrenceCoevalityCorrelationMatrixWithCoevalityLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long*)arg2 error:(id*)arg3;
- (double*)copyOccurrenceOrderingCorrelationMatrixWithOrderingGapLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long*)arg2 error:(id*)arg3;
- (double*)copyPrincipalOccurrenceCoevalityComponentsWithCoevalityLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long*)arg2 writeAttributeIds:(unsigned long long**)arg3 error:(id*)arg4;
- (double*)copyPrincipalOccurrenceOrderingComponentsWithOrderingGapLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long*)arg2 writeAttributeIds:(unsigned long long**)arg3 error:(id*)arg4;
- (double*)copyPrincipalRangeCoevalityComponentsWithCoevalityLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long*)arg2 writeAttributeIds:(unsigned long long**)arg3 writeStatisticTypes:(long long**)arg4 error:(id*)arg5;
- (double*)copyPrincipalRangeOrderingComponentsWithOrderingGapLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long*)arg2 writeAttributeIds:(unsigned long long**)arg3 writeStatisticTypes:(long long**)arg4 error:(id*)arg5;
- (double*)copyRangeCoevalityCorrelationMatrixOfAttributeId:(unsigned long long)arg1 toAttributeId:(unsigned long long)arg2 coevalityLeewaySeconds:(double)arg3 error:(id*)arg4;
- (double*)copyRangeCoevalityCorrelationMatrixWithCoevalityLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long*)arg2 error:(id*)arg3;
- (double*)copyRangeOrderingCorrelationMatrixOfAttributeId:(unsigned long long)arg1 toAttributeId:(unsigned long long)arg2 orderingGapLeewaySeconds:(double)arg3 error:(id*)arg4;
- (double*)copyRangeOrderingCorrelationMatrixWithOrderingGapLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long*)arg2 error:(id*)arg3;
- (id)durationStatistic:(long long)arg1 forAttributeId:(unsigned long long)arg2 error:(id*)arg3;
- (bool)injestBasisObjects:(id)arg1 error:(id*)arg2;
- (id)interArrivalStatistic:(long long)arg1 forAttributeId:(unsigned long long)arg2 error:(id*)arg3;
- (double)occurrenceCoevalityCorrelationOfAttributeId:(unsigned long long)arg1 toAttributeId:(unsigned long long)arg2 coevalityLeewaySeconds:(double)arg3 error:(id*)arg4;
- (double)occurrenceOrderingCorrelationOfAttributeId:(unsigned long long)arg1 toAttributeId:(unsigned long long)arg2 orderingGapLeewaySeconds:(double)arg3 error:(id*)arg4;
- (id)valueStatistic:(long long)arg1 forAttributeId:(unsigned long long)arg2 error:(id*)arg3;

@end
