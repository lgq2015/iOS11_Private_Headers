/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDataCollectionObserverWrapper : NSObject {
    double  _collectionInterval;
    id  _observer;
    HDDataCollectionObserverState * _state;
}

@property (nonatomic) double collectionInterval;
@property (nonatomic, readonly) id observer;
@property (nonatomic, copy) HDDataCollectionObserverState *state;

- (void).cxx_destruct;
- (double)collectionInterval;
- (id)description;
- (id)initWithObserver:(id)arg1 state:(id)arg2 collectionInterval:(double)arg3;
- (id)observer;
- (void)setCollectionInterval:(double)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end