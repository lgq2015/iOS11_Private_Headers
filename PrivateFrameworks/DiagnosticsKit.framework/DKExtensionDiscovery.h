/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKExtensionDiscovery : NSObject {
    struct NSString { Class x1; } * _bundleIdentifier;
    bool  _discoveryComplete;
    NSCondition * _discoveryLock;
    NSObject<OS_dispatch_queue> * _discoveryQueue;
    <DKExtensionRegistry> * _registry;
    NSSet * _services;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic) bool discoveryComplete;
@property (nonatomic, retain) NSCondition *discoveryLock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *discoveryQueue;
@property (nonatomic, retain) <DKExtensionRegistry> *registry;
@property (nonatomic, retain) NSSet *services;

+ (id)discoveryUsingExtensionRegistry:(id)arg1 services:(id)arg2 bundleIdentifier:(struct NSString { Class x1; }*)arg3;

- (void).cxx_destruct;
- (void)_beginExtensionDiscovery;
- (void)_registerExtensions:(id)arg1 error:(id)arg2;
- (struct NSString { Class x1; }*)bundleIdentifier;
- (bool)discoveryComplete;
- (id)discoveryLock;
- (id)discoveryQueue;
- (id)initWithExtensionRegistry:(id)arg1 services:(id)arg2 bundleIdentifier:(struct NSString { Class x1; }*)arg3;
- (id)registry;
- (id)services;
- (void)setBundleIdentifier:(struct NSString { Class x1; }*)arg1;
- (void)setDiscoveryComplete:(bool)arg1;
- (void)setDiscoveryLock:(id)arg1;
- (void)setDiscoveryQueue:(id)arg1;
- (void)setRegistry:(id)arg1;
- (void)setServices:(id)arg1;
- (void)waitUntilComplete;

@end
