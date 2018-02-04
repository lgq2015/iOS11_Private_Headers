/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNASVDelayedAnimation : NSObject {
    double  _delay;
    id  _object;
    double  _remainingDelay;
    SEL  _selector;
    double  _startTime;
    id  _target;
}

@property (nonatomic) double delay;
@property (nonatomic) id object;
@property (nonatomic) SEL selector;
@property (nonatomic) id target;

- (void).cxx_destruct;
- (double)delay;
- (id)init;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4;
- (id)object;
- (void)pause;
- (void)resume;
- (void)run;
- (SEL)selector;
- (void)setDelay:(double)arg1;
- (void)setObject:(id)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
