/* made by EzioChiu.
 */

@protocol NSISRowBody <NSObject>

@required

- (void)enumerateVariables:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSISVariable *, void*
- (void)removeVariable:(NSISVariable *)arg1;
- (void)replaceVariable:(void *)arg1 withExpression:(void *)arg2 processVariableNewToReceiver:(void *)arg3 processVariableDroppedFromReceiver:(void *)arg4; // needs 4 arg types, found 14: NSISVariable *, NSISLinearExpression *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSISVariable *, void*, id /* block */, void*, void, id /* block */, NSISVariable *, void*
- (void)replaceVariable:(NSISVariable *)arg1 withVariablePlusDelta:(double)arg2;
- (void)replaceVariable:(void *)arg1 withVariablePlusDelta:(void *)arg2 timesVariable:(void *)arg3 processVariableNewToReceiver:(void *)arg4 processVariableDroppedFromReceiver:(void *)arg5; // needs 5 arg types, found 15: NSISVariable *, double, NSISVariable *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSISVariable *, void*, id /* block */, void*, void, id /* block */, NSISVariable *, void*
- (unsigned long long)variableCount;

@end
