/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICPredictionManager : NSObject <_ICPredictionManaging> {
    _ICResultCache * _cache;
    NSMutableArray * _predictionSources;
}

@property (retain) _ICResultCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_quickTypePredictionWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3 error:(id*)arg4;
- (id)cache;
- (id)initWithPredictionSource:(id)arg1;
- (id)lastCachedResultWithInitialCharacters:(id)arg1;
- (void)predictedItemSelected:(id)arg1;
- (void)reset;
- (id)searchForMeCardEmailAddresses;
- (id)searchForMeCardRegions;
- (id)searchWithTrigger:(id)arg1 searchContext:(id)arg2 timeoutInMilliseconds:(int)arg3 error:(id*)arg4;
- (id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id*)arg7;
- (void)setCache:(id)arg1;
- (id)workLocation;

@end