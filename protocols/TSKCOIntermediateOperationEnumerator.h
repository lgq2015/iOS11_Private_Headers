/* made by EzioChiu.
 */

@protocol TSKCOIntermediateOperationEnumerator <TSKCOOperationEnumerator>

@required

- (void)appendOperation:(TSKCOAbstractOperation *)arg1;
- (bool)hasOperations;
- (void)replaceOperation:(TSKCOAbstractOperation *)arg1;

@end