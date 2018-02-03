/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISObjectiveLinearExpression : NSObject <NSISRowBody> {
    struct __CFData { } * _constant;
    struct __CFDictionary { } * _priorityMap;
    NSMutableArray * _variablesSortedByPriorityVectors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addExpression:(id)arg1 priority:(double)arg2 times:(double)arg3 processVariableNewToReceiver:(id /* block */)arg4 processVariableDroppedFromReceiver:(id /* block */)arg5;
- (void)addVariable:(id)arg1 priority:(double)arg2 times:(double)arg3;
- (void)addVariable:(id)arg1 priority:(double)arg2 times:(double)arg3 processVariableNewToReceiver:(id /* block */)arg4 processVariableDroppedFromReceiver:(id /* block */)arg5;
- (bool)constantTermIsZero;
- (void)dealloc;
- (id)description;
- (void)enumerateVariables:(id /* block */)arg1;
- (void)incrementConstantWithPriority:(double)arg1 value:(double)arg2;
- (void)incrementConstantWithPriorityVector:(struct __CFData { }*)arg1 timesScalarCoefficient:(double)arg2;
- (id)init;
- (id)initWithLinearExpression:(id)arg1 priority:(double)arg2;
- (void)leadingPriority:(double*)arg1 andValue:(double*)arg2 forVariable:(id)arg3;
- (struct __CFData { }*)priorityVectorForVariable:(id)arg1;
- (void)removeVariable:(id)arg1;
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(id /* block */)arg3 processVariableDroppedFromReceiver:(id /* block */)arg4;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(id /* block */)arg4 processVariableDroppedFromReceiver:(id /* block */)arg5;
- (id)restrictedVariableWithCoefficientOfLargestNegativeMagnitude;
- (void)setPriorityVector:(struct __CFData { }*)arg1 forKnownAbsentVariable:(id)arg2;
- (unsigned long long)variableCount;
- (void)verifyInternalIntegrity;

@end