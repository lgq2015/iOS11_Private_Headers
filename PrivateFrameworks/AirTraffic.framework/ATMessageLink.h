/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATMessageLink : NSObject <ATMessageLink>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int endpointType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isInitialized, nonatomic, readonly) bool initialized;
@property (getter=isOpen, nonatomic, readonly) bool open;
@property (readonly) Class superclass;

- (void)addObserver:(id)arg1;
- (void)addRequestHandler:(id)arg1 forDataClass:(id)arg2;
- (int)endpointType;
- (id)identifier;
- (id)init;
- (bool)isInitialized;
- (bool)isOpen;
- (void)removeObserver:(id)arg1;
- (void)removeRequestHandlerForDataClass:(id)arg1;
- (void)sendRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)sendResponse:(id)arg1 withProgress:(id /* block */)arg2 completion:(id /* block */)arg3;

@end
