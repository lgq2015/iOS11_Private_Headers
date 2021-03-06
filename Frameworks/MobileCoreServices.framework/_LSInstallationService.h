/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSInstallationService : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly) NSObject<OS_dispatch_queue> *databaseQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

+ (void)beginListening;

- (id)databaseQueue;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)serialQueue;

@end
