/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFTemporalScoreEngineNaive : NSObject <IFTemporalScoreEngine>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)temporalScoreForIndicationOnDate:(id)arg1 referenceDate:(id)arg2;

@end
