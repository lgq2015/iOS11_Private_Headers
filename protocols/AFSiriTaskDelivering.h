/* made by EzioChiu.
 */

@protocol AFSiriTaskDelivering <NSObject>

@required

- (void)deliverSiriTask:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: AFSiriTask *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (void)siriTaskDidFinish;

@end
