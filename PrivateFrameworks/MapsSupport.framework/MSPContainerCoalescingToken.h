/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPContainerCoalescingToken : NSObject <MSPContainerCoalescingToken> {
    MSPContainer * _container;
    <NSObject><NSCopying> * _context;
    bool  _invalidated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)endCoalescingEdits;
- (id)init;
- (id)initWithContainerOwner:(id)arg1 context:(id)arg2;

@end
