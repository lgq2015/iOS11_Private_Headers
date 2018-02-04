/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionEngineNode : NSObject <AXMDescribing, NSSecureCoding> {
    bool  _connected;
    <AXMVisionEngineNodeConnectionDelegate> * _delegate;
    bool  _enabled;
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _nodeQueue;
}

@property (getter=isConnected, nonatomic) bool connected;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXMVisionEngineNodeConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *nodeQueue;
@property (nonatomic, readonly) bool requiresVisionFramework;
@property (readonly) Class superclass;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (void)axmAppendRecursiveDescription:(id)arg1 withIndentation:(long long)arg2;
- (id)axmDescription;
- (void)connect:(id)arg1;
- (id)delegate;
- (void)disconnect;
- (void)encodeWithCoder:(id)arg1;
- (void)freeResources;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isConnected;
- (bool)isEnabled;
- (void)nodeInitialize;
- (id)nodeQueue;
- (bool)requiresVisionFramework;
- (void)setConnected:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNodeQueue:(id)arg1;

@end
