/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TURepeatingAction : NSObject {
    id /* block */  _action;
    id /* block */  _completion;
    double  _pauseDuration;
    unsigned long long  _remainingIterations;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) double pauseDuration;
@property (nonatomic) unsigned long long remainingIterations;

- (void).cxx_destruct;
- (id /* block */)action;
- (id /* block */)completion;
- (id)initWithAction:(id /* block */)arg1;
- (double)pauseDuration;
- (unsigned long long)remainingIterations;
- (void)setAction:(id /* block */)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setPauseDuration:(double)arg1;
- (void)setRemainingIterations:(unsigned long long)arg1;

@end