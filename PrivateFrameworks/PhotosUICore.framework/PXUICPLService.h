/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUICPLService : NSObject <PXCPLService> {
    id /* block */  _handler;
    NSObject<OS_dispatch_queue> * _serialQueue;
    PXCPLServiceStatus * _serviceStatus;
    PXCPLState * _state;
    PXCPLStatus * _statusProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_serviceStatusDidChange:(id)arg1;
- (void)_setState:(id)arg1;
- (bool)canPerformAction:(long long)arg1;
- (id /* block */)handler;
- (id)init;
- (void)performAction:(long long)arg1;
- (void)setHandler:(id /* block */)arg1;

@end
