/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPPortraitDeletionTrackingXPCListenerDelegate : NSObject <NSXPCListenerDelegate> {
    <PPPortraitDeletionTrackingProtocol> * _handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithHandler:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
