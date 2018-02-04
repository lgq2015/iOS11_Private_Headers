/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristicBatchRequest : NSObject {
    id /* block */  _completionHandler;
    id /* block */  _progressHandler;
    NSArray * _requests;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, retain) NSArray *requests;

+ (id)characteristicBatchRequestWithReadRequests:(id)arg1;
+ (id)characteristicBatchRequestWithWriteRequests:(id)arg1;
+ (bool)validateRequestTypes:(id)arg1 requestClass:(Class)arg2;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)initWithRequests:(id)arg1 requestClass:(Class)arg2;
- (id /* block */)progressHandler;
- (id)requests;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setRequests:(id)arg1;

@end
