/* made by EzioChiu.
 */

@protocol _CDPModel <NSObject>

@required

- (void)loadModel:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)makePredictionForGroup:(void *)arg1 clientType:(void *)arg2 limit:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSArray *, long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _CDPPredictionResult *, void*

@end
