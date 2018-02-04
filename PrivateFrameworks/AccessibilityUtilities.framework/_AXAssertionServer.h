/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface _AXAssertionServer : NSObject {
    id /* block */  _assertionWasAcquiredHandler;
    id /* block */  _assertionWasReleasedHandler;
    NSMutableDictionary * _heldAssertionMap;
}

@property (nonatomic, copy) id /* block */ assertionWasAcquiredHandler;
@property (nonatomic, copy) id /* block */ assertionWasReleasedHandler;
@property (nonatomic, retain) NSMutableDictionary *heldAssertionMap;

- (void).cxx_destruct;
- (void)addHeldAssertionOfType:(id)arg1 byClient:(id)arg2;
- (id /* block */)assertionWasAcquiredHandler;
- (id /* block */)assertionWasReleasedHandler;
- (id)clientsHoldingAssertionOfType:(id)arg1;
- (id)description;
- (id)heldAssertionMap;
- (id)init;
- (void)removeHeldAssertionOfType:(id)arg1 byClient:(id)arg2;
- (void)setAssertionWasAcquiredHandler:(id /* block */)arg1;
- (void)setAssertionWasReleasedHandler:(id /* block */)arg1;
- (void)setHeldAssertionMap:(id)arg1;

@end
