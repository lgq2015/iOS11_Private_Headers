/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataCollectorRecord : NSObject {
    <HDDataCollector> * _collector;
    HDDataCollectorState * _state;
}

@property (nonatomic, retain) <HDDataCollector> *collector;
@property (nonatomic, retain) HDDataCollectorState *state;

- (void).cxx_destruct;
- (id)collector;
- (void)setCollector:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end
