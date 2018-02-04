/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSJSMessagePort : IKJSObject <VSJSMessagePort> {
    <VSJSMessagePortDelegate> * _delegate;
}

@property (nonatomic) <VSJSMessagePortDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)postMessage:(id)arg1;
- (void)setDelegate:(id)arg1;

@end