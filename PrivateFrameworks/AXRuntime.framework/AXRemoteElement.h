/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXRemoteElement : NSObject {
    id  _accessibilityContainer;
    NSMutableSet * _allChildren;
    unsigned int  _contextId;
    bool  _deniesDirectAppConnection;
    unsigned int  _machPort;
    bool  _onClientSide;
    <AXRemoteElementChildrenDelegate> * _remoteChildrenDelegate;
    int  _remotePid;
    NSObject<OS_dispatch_queue> * _remoteQueue;
    NSString * _uuid;
}

@property (nonatomic) id accessibilityContainer;
@property (nonatomic) unsigned int contextId;
@property (nonatomic) bool deniesDirectAppConnection;
@property (nonatomic) unsigned int machPort;
@property (nonatomic) bool onClientSide;
@property (nonatomic) <AXRemoteElementChildrenDelegate> *remoteChildrenDelegate;
@property (nonatomic) int remotePid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *remoteQueue;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, readonly) unsigned long long uuidHash;

// Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime

+ (void)initialize;
+ (bool)registerRemoteElement:(id)arg1;
+ (id)remoteElementForBlock:(id /* block */)arg1;
+ (id)remoteElementsForBlock:(id /* block */)arg1;
+ (id)remoteElementsForContextId:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)_accessibilityActiveKeyboard;
- (id)_accessibilityFirstElement;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (id)_accessibilityLastElement;
- (id)_accessibilityResponderElement;
- (id)_accessibilitySortedElementsWithin;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_remoteElementWithAttribute:(long long)arg1 limitToRemoteSubviews:(bool)arg2;
- (id)accessibilityContainer;
- (id)accessibilityElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (unsigned int)contextId;
- (void)dealloc;
- (bool)deniesDirectAppConnection;
- (id)description;
- (id)initWithUUID:(id)arg1 andRemotePid:(int)arg2 andContextId:(unsigned int)arg3;
- (unsigned int)machPort;
- (bool)onClientSide;
- (void)platformCleanup;
- (id)remoteChildrenDelegate;
- (int)remotePid;
- (id)remoteQueue;
- (void)setAccessibilityContainer:(id)arg1;
- (void)setContextId:(unsigned int)arg1;
- (void)setDeniesDirectAppConnection:(bool)arg1;
- (void)setMachPort:(unsigned int)arg1;
- (void)setOnClientSide:(bool)arg1;
- (void)setRemoteChildrenDelegate:(id)arg1;
- (void)setRemotePid:(int)arg1;
- (void)setRemoteQueue:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)unregister;
- (id)uuid;
- (unsigned long long)uuidHash;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (void)_accessibilityEnumerateSiblingsWithParent:(id*)arg1 options:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)_accessibilityIsRemoteElement;
- (id)_ancestorElementThatSupportsActivationAction;
- (bool)accessibilityActivate;
- (id)accessibilityAttributeValue:(long long)arg1;
- (id)accessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2;
- (bool)accessibilityViewIsModal;
- (void)platformCleanup;

@end
