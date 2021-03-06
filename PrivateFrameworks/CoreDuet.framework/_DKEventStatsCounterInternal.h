/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKEventStatsCounterInternal : NSObject {
    struct XSPerfCounter { unsigned long long x1; } * _counters;
    NSString * _domain;
    NSString * _eventName;
    PETEventTracker * _eventTracker;
    NSString * _eventType;
    bool  _hasResult;
    bool  _hasType;
    struct XSPerfCollection { id x1; unsigned int x2; struct XSPerfCounter {} *x3; struct XSPerfMetric {} *x4; char *x5; } * _stats;
    NSArray * _typeValues;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *eventName;
@property (readonly) PETEventTracker *eventTracker;
@property (nonatomic, readonly) NSString *eventType;
@property (nonatomic, readonly) NSArray *typeValues;

- (void).cxx_destruct;
- (unsigned long long)countWithTypeValue:(id)arg1 success:(bool)arg2;
- (void)dealloc;
- (id)domain;
- (id)eventName;
- (id)eventTracker;
- (id)eventType;
- (void)incrementCountByNumber:(unsigned long long)arg1 typeValue:(id)arg2 success:(bool)arg3;
- (unsigned long long)indexOfTypeValue:(id)arg1 success:(bool)arg2;
- (id)initWithCollectionName:(id)arg1 eventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4 hasResult:(bool)arg5;
- (id)initWithCollectionName:(id)arg1 eventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4 hasResult:(bool)arg5 scalar:(bool)arg6;
- (id)typeValues;

@end
