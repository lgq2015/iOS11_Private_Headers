/* made by EzioChiu.
 */

@protocol _DKKnowledgeDeleting

@required

- (bool)deleteObjects:(NSArray *)arg1 error:(id*)arg2;
- (void)deleteObjects:(void *)arg1 responseQueue:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
