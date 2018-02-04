/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUDynamicCallDisplayContext : TUMutableCallDisplayContext {
    CXCallDirectoryManager * _callDirectoryManager;
    <TUDynamicCallDisplayContextDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) CXCallDirectoryManager *callDirectoryManager;
@property (nonatomic) <TUDynamicCallDisplayContextDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

- (void).cxx_destruct;
- (void)_initializeAsynchronousStateWithCall:(id)arg1;
- (void)_initializeSynchronousStateWithCall:(id)arg1 contactIdentifier:(id)arg2 contactsDataProvider:(id)arg3;
- (id)callDirectoryManager;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithCall:(id)arg1 contactIdentifier:(id)arg2 serialQueue:(id)arg3;
- (id)initWithCall:(id)arg1 contactIdentifier:(id)arg2 serialQueue:(id)arg3 contactsDataSource:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayContext:(id)arg1 call:(id)arg2 serialQueue:(id)arg3;
- (id)serialQueue;
- (void)setCallDirectoryManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSerialQueue:(id)arg1;

@end
