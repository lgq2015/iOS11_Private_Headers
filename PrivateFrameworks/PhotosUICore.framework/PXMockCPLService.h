/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMockCPLService : NSObject <PXCPLService> {
    <PXCPLService> * _cplService;
    id /* block */  _handler;
    NSObject<OS_dispatch_queue> * _serialQueue;
    PXCPLServiceStatus * _serviceStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_mockEvent;
+ (bool)shouldUseMockService;

- (void).cxx_destruct;
- (void)_deliverMockServiceStatus;
- (void)_serviceStatusDidChange:(id)arg1;
- (bool)canPerformAction:(long long)arg1;
- (void)dealloc;
- (id /* block */)handler;
- (id)init;
- (id)initWithCPLService:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performAction:(long long)arg1;
- (void)setHandler:(id /* block */)arg1;

@end
