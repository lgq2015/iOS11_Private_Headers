/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCProxyOperation : FCOperation {
    FCOperation * _underlyingOperation;
}

@property (nonatomic, retain) FCOperation *underlyingOperation;

+ (void)initialize;
+ (id)proxyForOperation:(id)arg1;

- (void).cxx_destruct;
- (void)_revisitQualityOfService;
- (void)_revisitRelativePriority;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;
- (unsigned long long)propertiesInheritedByChildOperations;
- (void)setQualityOfService:(long long)arg1;
- (void)setRelativePriority:(long long)arg1;
- (void)setUnderlyingOperation:(id)arg1;
- (id)underlyingOperation;

@end
